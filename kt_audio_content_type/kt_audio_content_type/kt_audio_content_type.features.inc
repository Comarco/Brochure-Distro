<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function kt_audio_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function kt_audio_content_type_node_info() {
  $items = array(
    'kt_audio' => array(
      'name' => t('Audio'),
      'module' => 'features',
      'description' => t('A simple content type for uploading audio files'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
