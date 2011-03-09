<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function kt_partners_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function kt_partners_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Partennaire'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function kt_partners_views_api() {
  return array(
    'api' => '2',
  );
}
