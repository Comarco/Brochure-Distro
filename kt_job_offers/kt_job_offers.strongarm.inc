<?php

/**
 * Implementation of hook_strongarm().
 */
function kt_job_offers_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_kt_job_offer';
  $strongarm->value = '0';

  $export['ant_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_kt_job_offer';
  $strongarm->value = '';

  $export['ant_pattern_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_kt_job_offer';
  $strongarm->value = 0;

  $export['ant_php_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_nodetitle_php_kt_job_offer';
  $strongarm->value = 0;

  $export['auto_nodetitle_php_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_kt_job_offer';
  $strongarm->value = 0;

  $export['comment_anonymous_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_kt_job_offer';
  $strongarm->value = '3';

  $export['comment_controls_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_kt_job_offer';
  $strongarm->value = '4';

  $export['comment_default_mode_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_kt_job_offer';
  $strongarm->value = '1';

  $export['comment_default_order_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_kt_job_offer';
  $strongarm->value = '50';

  $export['comment_default_per_page_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_kt_job_offer';
  $strongarm->value = '0';

  $export['comment_form_location_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_kt_job_offer';
  $strongarm->value = '0';

  $export['comment_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_kt_job_offer';
  $strongarm->value = '1';

  $export['comment_preview_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_kt_job_offer';
  $strongarm->value = '1';

  $export['comment_subject_field_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_settings';
  $strongarm->value = array();

  $export['content_access_settings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_kt_job_offer';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '1',
    'revision_information' => '15',
    'comment_settings' => '18',
    'menu' => '14',
    'path' => '16',
    'attachments' => '17',
  );

  $export['content_extra_weights_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_kt_job_offer';
  $strongarm->value = 0;

  $export['content_profile_use_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_version';
  $strongarm->value = '5.2';

  $export['date_api_version'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_kt_job_offer';
  $strongarm->value = 0;

  $export['enable_revisions_page_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_kt_job_offer';
  $strongarm->value = 'form-600944aa836b33632f00ee1f94abb3b5';

  $export['form_build_id_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_preview_kt_job_offer';
  $strongarm->value = 0;

  $export['hide_preview_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_kt_job_offer';
  $strongarm->value = '2';

  $export['language_content_type_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_kt_job_offer';
  $strongarm->value = array(
    0 => 'revision',
  );

  $export['node_options_kt_job_offer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_kt_job_offers_pattern';
  $strongarm->value = '';

  $export['pathauto_node_kt_job_offers_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_kt_job_offer';
  $strongarm->value = '1';

  $export['upload_kt_job_offer'] = $strongarm;
  return $export;
}
