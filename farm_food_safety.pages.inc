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

  // Pull in all the fieldsets.
  $build['container']['water'] = farm_food_safety_dashboard_water();
  $build['container']['soil'] = farm_food_safety_dashboard_soil();
  $build['container']['animals'] = farm_food_safety_dashboard_animals();
  $build['container']['workers'] = farm_food_safety_dashboard_workers();
  $build['container']['equipment'] = farm_food_safety_dashboard_equipment();

  // Make them collapsible.
  foreach ($build as &$fieldset) {
    $fieldset['#collapsible'] = TRUE;
    $fieldset['#attributes'] = array(
      'class' => array(
        'collapsible',
      ),
    );
  }

  // Return the render array.
  return $build;
}

/**
 * Dashboard: Agricultural Water
 */
function farm_food_safety_dashboard_water() {
  $build = array(
    '#type' => 'fieldset',
    '#title' => t('Agricultural Water'),
  );
  return $build;
}

/**
 * Dashboard: Biological Soil Amendments
 */
function farm_food_safety_dashboard_soil() {
  $build = array(
    '#type' => 'fieldset',
    '#title' => t('Biological Soil Amendments'),
  );
  return $build;
}

/**
 * Dashboard: Domesticated and Wild Animals
 */
function farm_food_safety_dashboard_animals() {
  $build = array(
    '#type' => 'fieldset',
    '#title' => t('Domesticated and Wild Animals'),
  );
  return $build;
}

/**
 * Dashboard: Worker Health, Hygiene, and Training
 */
function farm_food_safety_dashboard_workers() {
  $build = array(
    '#type' => 'fieldset',
    '#title' => t('Worker Health, Hygiene, and Training'),
  );
  return $build;
}

/**
 * Dashboard: Equipment, Tools, and Buildings
 */
function farm_food_safety_dashboard_equipment() {
  $build = array(
    '#type' => 'fieldset',
    '#title' => t('Equipment, Tools, and Buildings'),
  );
  return $build;
}
