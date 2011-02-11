<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function kt_i18n_test_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function kt_i18n_test_node_info() {
  $items = array(
    'kt_i18n_testtranslatable' => array(
      'name' => t('kt_i18n_testtranslatable'),
      'module' => 'features',
      'description' => t('Describe the translatable content type here.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'kt_i18n_testuntranslatable' => array(
      'name' => t('kt_i18n_testuntranslatable'),
      'module' => 'features',
      'description' => t('Describe the untranslatable content type here.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function kt_i18n_test_views_api() {
  return array(
    'api' => '2',
  );
}
