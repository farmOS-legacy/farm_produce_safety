<?php
/**
 * @file
 * farm_food_safety.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farm_food_safety_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_log_type().
 */
function farm_food_safety_default_log_type() {
  $items = array();
  $items['farm_training'] = entity_import('log_type', '{
    "type" : "farm_training",
    "label" : "Training",
    "weight" : 0,
    "name_pattern" : "Training: [log:field-farm-training-topics]",
    "name_edit" : "0",
    "done" : "1",
    "rdf_mapping" : []
  }');
  $items['farm_worker_health'] = entity_import('log_type', '{
    "type" : "farm_worker_health",
    "label" : "Worker Health",
    "weight" : 0,
    "name_pattern" : "Worker health: [log:field-farm-people] [log:field-farm-health-summary]",
    "name_edit" : "0",
    "done" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
