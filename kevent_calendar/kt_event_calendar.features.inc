<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function kt_event_calendar_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function kt_event_calendar_node_info() {
  $items = array(
    'kt_event_calandar' => array(
      'name' => t('Event'),
      'module' => 'features',
      'description' => t('An event with one associated start date and time, and optionally and end date and time.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Decription'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function kt_event_calendar_views_api() {
  return array(
    'api' => '2',
  );
}
