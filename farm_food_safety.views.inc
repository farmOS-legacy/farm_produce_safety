<?php

/**
 * @file
 * Farm Food Safety Views data.
 */

/**
 * Implements hook_views_data().
 */
function farm_food_safety_views_data() {

  // Describe the {farm_food_safety_doc} table to Views.
  $data['farm_food_safety_doc']['table']['group'] = t('Food safety documents');

  // Create an implicit relationship to the file_managed table, so that when
  // the base table is file_managed, document fields are automatically available.
  $data['farm_food_safety_doc']['table']['join'] = array(
    'file_managed' => array(
      'left_field' => 'fid',
      'field' => 'fid',
    ),
  );

  // Document type.
  $data['farm_food_safety_doc']['type'] = array(
    'title' => t('Food safety document type'),
    'help' => t('The type of food safety document.'),
    'field' => array(
      'handler' => 'views_handler_field_machine_name',
      'options callback' => 'farm_food_safety_document_types',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_in_operator',
      'options callback' => 'farm_food_safety_document_types',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Document label.
  $data['farm_food_safety_doc']['label'] = array(
    'title' => t('Food safety document label'),
    'help' => t('The label for the food safety document.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  return $data;
}
