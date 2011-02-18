<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function kt_simple_gallery_taxonomy_default_vocabularies() {
  return array(
    'kt_gal_img_type' => array(
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
    ),
  );
}
