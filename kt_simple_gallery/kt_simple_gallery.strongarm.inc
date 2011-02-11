<?php

/**
 * Implementation of hook_strongarm().
 */
function kt_simple_gallery_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_kt_gallery';
  $strongarm->value = 0;

  $export['comment_anonymous_kt_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_kt_gallery';
  $strongarm->value = '3';

  $export['comment_controls_kt_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_kt_gallery';
  $strongarm->value = '4';

  $export['comment_default_mode_kt_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_kt_gallery';
  $strongarm->value = '1';

  $export['comment_default_order_kt_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_kt_gallery';
  $strongarm->value = '50';

  $export['comment_default_per_page_kt_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_kt_gallery';
  $strongarm->value = '0';

  $export['comment_form_location_kt_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_kt_gallery';
  $strongarm->value = '0';

  $export['comment_kt_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_kt_gallery';
  $strongarm->value = '1';

  $export['comment_preview_kt_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_kt_gallery';
  $strongarm->value = '1';

  $export['comment_subject_field_kt_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_kt_gallery';
  $strongarm->value = array(
    'title' => '-30',
    'revision_information' => '-24',
    'author' => '-23',
    'options' => '-22',
    'comment_settings' => '-21',
    'menu' => '-25',
    'taxonomy' => '-29',
  );

  $export['content_extra_weights_kt_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_kt_gallery';
  $strongarm->value = 'form-dc4116eee8ecfed14fe96e4acb6e3b7a';

  $export['form_build_id_kt_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_kt_gallery';
  $strongarm->value = '2';

  $export['language_content_type_kt_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_kt_gallery';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_kt_gallery'] = $strongarm;
  return $export;
}
