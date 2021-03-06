<?php

/**
 * Implementation of hook_default_taxonomy_export().
 */
function kt_bookmarks_default_taxonomy_export() {
  $taxonomy_exports = array();

  // Exported vocabulary: Bookmark Tags
  $taxonomy_export = new stdClass;
  $taxonomy_export->disabled = FALSE; /* Edit this to true to make a default taxonomy_export disabled initially */
  $taxonomy_export->api_version = 1;
  $taxonomy_export->machine_name = 'bookmark_tags';
  $taxonomy_export->vocabulary = (object) array(
  'vid' => '1',
  'name' => 'Bookmark Tags',
  'description' => '',
  'help' => '',
  'relations' => '1',
  'hierarchy' => '0',
  'multiple' => '0',
  'required' => '0',
  'tags' => '1',
  'module' => 'features_kt_bookmark_tags',
  'weight' => '-2',
  'nodes' => array(
    'kt_bookmark' => 'kt_bookmark',
  ),
  'machine_name' => 'bookmark_tags',
);
  $taxonomy_export->terms = array();
  $taxonomy_exports[$taxonomy_export->machine_name] = $taxonomy_export;

  return $taxonomy_exports;
}
