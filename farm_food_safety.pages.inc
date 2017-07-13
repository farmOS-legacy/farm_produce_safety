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

  // Add the collapse library so our collapsible fieldsets work properly.
  drupal_add_library('system', 'drupal.collapse');

  // Pull in all the fieldsets.
  $build['water'] = farm_food_safety_dashboard_water();
  $build['soil'] = farm_food_safety_dashboard_soil();
  $build['animals'] = farm_food_safety_dashboard_animals();
  $build['workers'] = farm_food_safety_dashboard_workers();
  $build['equipment'] = farm_food_safety_dashboard_equipment();

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
