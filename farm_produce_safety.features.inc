<?php
/**
 * @file
 * farm_produce_safety.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farm_produce_safety_ctools_plugin_api($module = NULL, $api = NULL) {
  return farm_record_api('ctools', $module, $api);
}

/**
 * Implements hook_views_api().
 */
function farm_produce_safety_views_api($module = NULL, $api = NULL) {
  return farm_record_api('views', $module, $api);
}

/**
 * Implements hook_default_log_type().
 */
function farm_produce_safety_default_log_type() {
  return farm_record_entity_type_definitions('farm_produce_safety', 'log');
}
