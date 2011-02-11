<?php

/**
 * Implementation of hook_default_taxonomy_export().
 */
function kt_simple_gallery_default_taxonomy_export() {
  $taxonomy_exports = array();

  // Exported vocabulary: Image Type
  $taxonomy_export = new stdClass;
  $taxonomy_export->disabled = FALSE; /* Edit this to true to make a default taxonomy_export disabled initially */
  $taxonomy_export->api_version = 1;
  $taxonomy_export->machine_name = 'image_type';
  $taxonomy_export->vocabulary = (object) array(
  'vid' => '2',
  'name' => 'Image Type',
  'description' => '',
  'help' => '',
  'relations' => '1',
  'hierarchy' => '0',
  'multiple' => '0',
  'required' => '0',
  'tags' => '1',
  'module' => 'features_kt_gal_img_type',
  'weight' => '0',
  'nodes' => array(
    'kt_gallery' => 'kt_gallery',
  ),
  'machine_name' => 'image_type',
);
  $taxonomy_export->terms = array();
  $taxonomy_exports[$taxonomy_export->machine_name] = $taxonomy_export;

  return $taxonomy_exports;
}
