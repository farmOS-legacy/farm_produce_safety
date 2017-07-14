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
    ),
    'soil' => array(
      'title' => t('Biological Soil Amendments'),
    ),
    'animals' => array(
      'title' => t('Domesticated and Wild Animals'),
    ),
    'workers' => array(
      'title' => t('Worker Health, Hygiene, and Training'),
    ),
    'equipment' => array(
      'title' => t('Equipment, Tools, and Buildings'),
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
  }

  // Return the render array.
  return $build;
}
