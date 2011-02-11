<?php

/**
 * Implementation of hook_default_taxonomy_export().
 */
function kt_links_default_taxonomy_export() {
  $taxonomy_exports = array();

  // Exported vocabulary: Link Tags
  $taxonomy_export = new stdClass;
  $taxonomy_export->disabled = FALSE; /* Edit this to true to make a default taxonomy_export disabled initially */
  $taxonomy_export->api_version = 1;
  $taxonomy_export->machine_name = 'link_tags';
  $taxonomy_export->vocabulary = (object) array(
  'vid' => '1',
  'name' => 'Link Tags',
  'description' => '',
  'help' => '',
  'relations' => '1',
  'hierarchy' => '0',
  'multiple' => '0',
  'required' => '0',
  'tags' => '1',
  'module' => 'features_kt_link_tags',
  'weight' => '-2',
  'nodes' => array(
    'kt_link' => 'kt_link',
  ),
  'machine_name' => 'link_tags',
);
  $taxonomy_export->terms = array();
  $taxonomy_exports[$taxonomy_export->machine_name] = $taxonomy_export;

  return $taxonomy_exports;
}
