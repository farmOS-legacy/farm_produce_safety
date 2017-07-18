<?php

/**
 * @file
 * Food safety pages code.
 */

/**
 * Page callback for the food safety dashboard.
 */
function farm_food_safety_dashboard() {
  $build = array();

  // Set the page title.
  drupal_set_title(t('Food Safety Dashboard'));

  // Add the collapse library so our collapsible fieldsets work properly.
  drupal_add_library('system', 'drupal.collapse');

  $build['container'] = array(
    '#type' => 'fieldset',
    '#title' => t('FSMA Produce Safety Rule'),
    '#description' => t('The Produce Safety Rule is part of the FDA Food Safety Modernization Act (FSMA). This regulation focuses on setting federal regulatory standards for the production, harvest, and handling of fruits and vegetables, in an effort to prevent microbial contamination and reduce foodborne illnesses associated with fresh produce. This dashboard provides shortcuts for keeping food safety records with farmOS.'),
  );

  // Build collapsed fieldsets.
  $fieldsets = array(
    'water' => array(
      'title' => t('Agricultural Water'),
      'links' => array(
        l('Add log: Water test', 'log/add/farm_water_test', array('query' => array('category' => array('Food Safety')))),
        l('Add log: Corrective action', 'log/add/farm_activity', array('query' => array('name' => 'Corrective action', 'category' => array('Food Safety', 'Water')))),
      ),
    ),
    'soil' => array(
      'title' => t('Biological Soil Amendments'),
      'links' => array(
        l('Manage Compost', 'farm/assets/compost'),
        l('Add log: Compost turning', 'log/add/farm_activity', array('query' => array('name' => 'Compost turning', 'category' => array('Food Safety', 'Compost')))),
        l('Add log: Compost temperature observation', 'log/add/farm_observation', array('query' => array('name' => 'Compost temperature', 'category' => array('Food Safety', 'Compost')))),
        l('Add log: Soil test', 'log/add/farm_soil_test', array('query' => array('category' => array('Food Safety')))),
        l('Add log: Input', 'log/add/farm_input', array('query' => array('category' => array('Food Safety', 'Soil')))),
      ),
    ),
    'animals' => array(
      'title' => t('Domesticated and Wild Animals'),
      'links' => array(
        l('Manage Animals', 'farm/assets/animals'),
        l('Add log: Pre-planting risk observation', 'log/add/farm_observation', array('query' => array('name' => 'Pre-planting risk observation', 'category' => array('Food Safety', 'Animals')))),
        l('Add log: Pre-harvest risk observation', 'log/add/farm_observation', array('query' => array('name' => 'Pre-harvest risk observation', 'category' => array('Food Safety', 'Animals')))),
        l('Add log: Intrusion/contamination observation', 'log/add/farm_observation', array('query' => array('name' => 'Intrusion/contamination', 'category' => array('Food Safety', 'Animals')))),
        l('Add log: Corrective action', 'log/add/farm_activity', array('query' => array('name' => 'Corrective action', 'category' => array('Food Safety', 'Animals')))),
      ),
    ),
    'workers' => array(
      'title' => t('Worker Health, Hygiene, and Training'),
      'links' => array(
        l('Add log: Training', 'log/add/farm_training'),
        l('Add log: Worker health', 'log/add/farm_worker_health'),
        l('Add log: Restock facilities', 'log/add/farm_activity', array('query' => array('name' => 'Restock facilities', 'category' => array('Food Safety')))),
        l('Add log: Restock first aid', 'log/add/farm_activity', array('query' => array('name' => 'Restock first aid', 'category' => array('Food Safety')))),
      ),
    ),
    'equipment' => array(
      'title' => t('Equipment, Tools, and Buildings'),
      'links' => array(
        l('Manage Areas', 'farm/areas'),
        l('Manage Equipment', 'farm/assets/equipment'),
        l('Add log: Area cleaning', 'log/add/farm_activity', array('query' => array('name' => 'Area cleaning', 'category' => array('Food Safety')))),
        l('Add log: Equipment cleaning', 'log/add/farm_maintenance', array('query' => array('name' => 'Equipment cleaning', 'category' => array('Food Safety')))),
      ),
    ),
  );
  $build['container']['fieldsets'] = array();
  foreach ($fieldsets as $key => $fieldset) {
    $build['container']['fieldsets'][$key] = array(
      '#type' => 'fieldset',
      '#title' => $fieldset['title'],
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
      '#attributes' => array(
        'class' => array(
          'collapsible',
          'collapsed',
        ),
      ),
    );
    if (!empty($fieldset['links'])) {
      $build['container']['fieldsets'][$key]['links'] = array(
        '#theme' => 'item_list',
        '#title' => t('Quick links'),
        '#items' => $fieldset['links'],
      );
    }
  }

  // Return the render array.
  return $build;
}
