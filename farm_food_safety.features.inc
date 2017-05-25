<?php
/**
 * @file
 * farm_food_safety.features.inc
 */

/**
 * Implements hook_default_log_type().
 */
function farm_food_safety_default_log_type() {
  $items = array();
  $items['farm_training'] = entity_import('log_type', '{
    "type" : "farm_training",
    "label" : "Training",
    "weight" : 0,
    "name_pattern" : "Training",
    "name_edit" : "1",
    "done" : "1",
    "rdf_mapping" : []
  }');
  $items['farm_worker_health'] = entity_import('log_type', '{
    "type" : "farm_worker_health",
    "label" : "Worker Health",
    "weight" : 0,
    "name_pattern" : "Worker health",
    "name_edit" : "1",
    "done" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
