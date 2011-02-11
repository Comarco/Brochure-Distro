<?php

/**
 * Implementation of hook_strongarm().
 */
function kt_i18n_test_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_kt_i18n_testtranslatable';
  $strongarm->value = 0;

  $export['comment_anonymous_kt_i18n_testtranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_kt_i18n_testuntranslatable';
  $strongarm->value = 0;

  $export['comment_anonymous_kt_i18n_testuntranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_kt_i18n_testtranslatable';
  $strongarm->value = '3';

  $export['comment_controls_kt_i18n_testtranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_kt_i18n_testuntranslatable';
  $strongarm->value = '3';

  $export['comment_controls_kt_i18n_testuntranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_kt_i18n_testtranslatable';
  $strongarm->value = '4';

  $export['comment_default_mode_kt_i18n_testtranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_kt_i18n_testuntranslatable';
  $strongarm->value = '4';

  $export['comment_default_mode_kt_i18n_testuntranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_kt_i18n_testtranslatable';
  $strongarm->value = '1';

  $export['comment_default_order_kt_i18n_testtranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_kt_i18n_testuntranslatable';
  $strongarm->value = '1';

  $export['comment_default_order_kt_i18n_testuntranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_kt_i18n_testtranslatable';
  $strongarm->value = '50';

  $export['comment_default_per_page_kt_i18n_testtranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_kt_i18n_testuntranslatable';
  $strongarm->value = '50';

  $export['comment_default_per_page_kt_i18n_testuntranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_kt_i18n_testtranslatable';
  $strongarm->value = '0';

  $export['comment_form_location_kt_i18n_testtranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_kt_i18n_testuntranslatable';
  $strongarm->value = '0';

  $export['comment_form_location_kt_i18n_testuntranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_kt_i18n_testtranslatable';
  $strongarm->value = '1';

  $export['comment_preview_kt_i18n_testtranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_kt_i18n_testuntranslatable';
  $strongarm->value = '1';

  $export['comment_preview_kt_i18n_testuntranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_kt_i18n_testtranslatable';
  $strongarm->value = '1';

  $export['comment_subject_field_kt_i18n_testtranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_kt_i18n_testuntranslatable';
  $strongarm->value = '1';

  $export['comment_subject_field_kt_i18n_testuntranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_kt_i18n_testtranslatable';
  $strongarm->value = '2';

  $export['comment_kt_i18n_testtranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_kt_i18n_testuntranslatable';
  $strongarm->value = '2';

  $export['comment_kt_i18n_testuntranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_kt_i18n_testtranslatable';
  $strongarm->value = '2';

  $export['language_content_type_kt_i18n_testtranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_kt_i18n_testuntranslatable';
  $strongarm->value = '0';

  $export['language_content_type_kt_i18n_testuntranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_kt_i18n_testtranslatable';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_kt_i18n_testtranslatable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_kt_i18n_testuntranslatable';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_kt_i18n_testuntranslatable'] = $strongarm;
  return $export;
}
