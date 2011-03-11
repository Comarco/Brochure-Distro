<?php

/**
 * Implementation of hook_content_default_fields().
 */
function kt_block_header_image_content_default_fields() {
  $fields = array();

  // Exported field: field_kt_teaser_img
  $fields['page-field_kt_teaser_img'] = array(
    'field_name' => 'field_kt_teaser_img',
    'type_name' => 'page',
    'display_settings' => array(
      'weight' => '-27',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'gal_simple_thumbnail_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png jpg gif',
      'file_path' => 'images/galleries/teaser-images/[yyyy]/[mm]/[dd]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textarea',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 1,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_kt_simple_normalsize' => 0,
        'imagecache_kt_simple_thumbblock' => 0,
        'imagecache_kt_simple_thumbnail' => 0,
        'imagecache_gal_simple_normalsize' => 0,
        'imagecache_gal_simple_thumbblock' => 0,
        'imagecache_gal_simple_thumbnail' => 0,
      ),
      'insert_default' => 'imagecache_gal_simple_thumbnail',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Teaser Image',
      'weight' => '-4',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_kt_teaser_img
  $fields['story-field_kt_teaser_img'] = array(
    'field_name' => 'field_kt_teaser_img',
    'type_name' => 'story',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'kt_stories_thumbnail_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png jpg gif',
      'file_path' => 'images/galleries/teaser-images/[yyyy]/[mm]/[dd]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textarea',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 1,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_kt_simple_normalsize' => 0,
        'imagecache_kt_simple_thumbblock' => 0,
        'imagecache_kt_simple_thumbnail' => 0,
        'imagecache_gal_simple_normalsize' => 0,
        'imagecache_gal_simple_thumbblock' => 0,
        'imagecache_gal_simple_thumbnail' => 0,
      ),
      'insert_default' => 'imagecache_gal_simple_thumbnail',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Teaser Image',
      'weight' => '-4',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Teaser Image');

  return $fields;
}
