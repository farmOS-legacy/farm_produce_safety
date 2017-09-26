<?php
/**
 * @file
 * farm_produce_safety.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function farm_produce_safety_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'log-farm_training-field_farm_area'.
  $field_instances['log-farm_training-field_farm_area'] = array(
    'bundle' => 'farm_training',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'What areas is this training taking place in?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_area',
    'label' => 'Areas',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'log-farm_training-field_farm_files'.
  $field_instances['log-farm_training-field_farm_files'] = array(
    'bundle' => 'farm_training',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_files',
    'label' => 'Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'farm/log/training',
      'file_extensions' => '',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_filefield_widget',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_mfw',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_training-field_farm_images'.
  $field_instances['log-farm_training-field_farm_images'] = array(
    'bundle' => 'farm_training',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'thumbnail',
          'colorbox_node_style_first' => 'large',
        ),
        'type' => 'colorbox',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_images',
    'label' => 'Photos',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'farm/log/training',
      'file_extensions' => '',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_miw',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'log-farm_training-field_farm_log_category'.
  $field_instances['log-farm_training-field_farm_log_category'] = array(
    'bundle' => 'farm_training',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this to organize your logs into categories for easier searching and filtering later.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_log_category',
    'label' => 'Log category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'log-farm_training-field_farm_log_owner'.
  $field_instances['log-farm_training-field_farm_log_owner'] = array(
    'bundle' => 'farm_training',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Who is administering the training?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_log_owner',
    'label' => 'Trainer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_training-field_farm_notes'.
  $field_instances['log-farm_training-field_farm_notes'] = array(
    'bundle' => 'farm_training',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'log-farm_training-field_farm_people'.
  $field_instances['log-farm_training-field_farm_people'] = array(
    'bundle' => 'farm_training',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select all people who attended this training.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_people',
    'label' => 'Attendees',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'log-farm_training-field_farm_training_materials'.
  $field_instances['log-farm_training-field_farm_training_materials'] = array(
    'bundle' => 'farm_training',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Include training materials and provide an outline of the training topics discussed. Also reference any relevant SOPs or sections of your farm produce safety plan that apply.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_training_materials',
    'label' => 'Training materials',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'log-farm_training-field_farm_training_topics'.
  $field_instances['log-farm_training-field_farm_training_topics'] = array(
    'bundle' => 'farm_training',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Summarize the topics covered by this training. More details should be provided in the "Training materials" field below.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_training_topics',
    'label' => 'Training topics',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'log-farm_worker_health-field_farm_action'.
  $field_instances['log-farm_worker_health-field_farm_action'] = array(
    'bundle' => 'farm_worker_health',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Briefly describe any actions that were taken (ice applied, bandaged, sent to hospital, etc). Use the Notes field for a more detailed report.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_action',
    'label' => 'Action taken',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_worker_health-field_farm_files'.
  $field_instances['log-farm_worker_health-field_farm_files'] = array(
    'bundle' => 'farm_worker_health',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_files',
    'label' => 'Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'farm/log/worker_health',
      'file_extensions' => '',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_filefield_widget',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_mfw',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'log-farm_worker_health-field_farm_health_summary'.
  $field_instances['log-farm_worker_health-field_farm_health_summary'] = array(
    'bundle' => 'farm_worker_health',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Briefly summarize the injury or illness sustained by the worker(s). Use the Notes field for a more detailed report.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_health_summary',
    'label' => 'Injury/illness sustained',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'log-farm_worker_health-field_farm_images'.
  $field_instances['log-farm_worker_health-field_farm_images'] = array(
    'bundle' => 'farm_worker_health',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'thumbnail',
          'colorbox_node_style_first' => 'large',
        ),
        'type' => 'colorbox',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_images',
    'label' => 'Photos',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'farm/log/worker_health',
      'file_extensions' => '',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_miw',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'log-farm_worker_health-field_farm_log_category'.
  $field_instances['log-farm_worker_health-field_farm_log_category'] = array(
    'bundle' => 'farm_worker_health',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this to organize your logs into categories for easier searching and filtering later.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_log_category',
    'label' => 'Log category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'log-farm_worker_health-field_farm_log_owner'.
  $field_instances['log-farm_worker_health-field_farm_log_owner'] = array(
    'bundle' => 'farm_worker_health',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Who is reporting this worker health log?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_log_owner',
    'label' => 'Reporter',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'log-farm_worker_health-field_farm_notes'.
  $field_instances['log-farm_worker_health-field_farm_notes'] = array(
    'bundle' => 'farm_worker_health',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'log-farm_worker_health-field_farm_people'.
  $field_instances['log-farm_worker_health-field_farm_people'] = array(
    'bundle' => 'farm_worker_health',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select all people who are affected by this worker health log.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_people',
    'label' => 'Worker',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'log-farm_worker_health-field_farm_worker_returned'.
  $field_instances['log-farm_worker_health-field_farm_worker_returned'] = array(
    'bundle' => 'farm_worker_health',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Did the employee(s) return to work?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_worker_returned',
    'label' => 'Returned to work?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Action taken');
  t('Areas');
  t('Attendees');
  t('Briefly describe any actions that were taken (ice applied, bandaged, sent to hospital, etc). Use the Notes field for a more detailed report.');
  t('Briefly summarize the injury or illness sustained by the worker(s). Use the Notes field for a more detailed report.');
  t('Did the employee(s) return to work?');
  t('Files');
  t('Include training materials and provide an outline of the training topics discussed. Also reference any relevant SOPs or sections of your farm produce safety plan that apply.');
  t('Injury/illness sustained');
  t('Log category');
  t('Notes');
  t('Photos');
  t('Reporter');
  t('Returned to work?');
  t('Select all people who are affected by this worker health log.');
  t('Select all people who attended this training.');
  t('Summarize the topics covered by this training. More details should be provided in the "Training materials" field below.');
  t('Trainer');
  t('Training materials');
  t('Training topics');
  t('Use this to organize your logs into categories for easier searching and filtering later.');
  t('What areas is this training taking place in?');
  t('Who is administering the training?');
  t('Who is reporting this worker health log?');
  t('Worker');

  return $field_instances;
}
