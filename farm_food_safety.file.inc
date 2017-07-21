<?php

/**
 * @file
 * Farm food safety file management code.
 * This file encapsulates code that relates to food safety document management.
 */

/**
 * Define Food Safety document types.
 */
function farm_food_safety_document_types() {
  return array(
    'plan' => t('Food safety plan'),
    'sop' => t('Standard Operating Procedure (SOP)'),
    'training' => t('Training material'),
    'recall' => t('Recall plan'),
    'other' => t('Other'),
  );
}
