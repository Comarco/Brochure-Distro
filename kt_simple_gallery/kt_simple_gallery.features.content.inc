<?php

/**
 * Implementation of hook_content_default_fields().
 */
function kt_simple_gallery_content_default_fields() {
  $fields = array();

  // Exported field: field_kt_gallery_desc
  $fields['kt_gallery-field_kt_gallery_desc'] = array(
    'field_name' => 'field_kt_gallery_desc',
    'type_name' => 'kt_gallery',
    'display_settings' => array(
      'weight' => '-23',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_kt_gallery_desc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Decription of the Gallery',
      'weight' => '-26',
      'description' => 'Here you can add a long description with HTML for the Gallery',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_kt_img_gal
  $fields['kt_gallery-field_kt_img_gal'] = array(
    'field_name' => 'field_kt_img_gal',
    'type_name' => 'kt_gallery',
    'display_settings' => array(
      'weight' => '-24',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'exclude' => 1,
        'format' => 'hidden',
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__gal_simple_thumbnail__gal_simple_normalsize',
        'exclude' => 0,
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
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'jpg gif png',
      'file_path' => 'images/galleries/galleries/[yyyy]/[mm]/[dd]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'fupload_mode' => 'multiple',
      'fupload_previewlist_img_attributes' => '',
      'fupload_title_replacements' => '_;{;};-',
      'fupload_previewlist_field_settings' => array(
        'imagefield_description' => 'imagefield_description',
        'node_title' => 0,
        'node_description' => 0,
        'imagefield_title' => 0,
        'imagefield_alt' => 0,
        'taxonomy_3' => 0,
        'cck_field_kt_teaser_img' => 0,
        'cck_field_kt_gallery_desc' => 0,
      ),
      'fupload_previewlist_redirecturl' => '',
      'insert' => FALSE,
      'insert_styles' => array(
        '1' => 1,
        '0' => 1,
        'auto' => FALSE,
        'link' => FALSE,
        'image' => FALSE,
        'imagecache_gal_simple_normalsize' => FALSE,
        'imagecache_gal_simple_thumbblock' => FALSE,
        'imagecache_gal_simple_thumbnail' => FALSE,
      ),
      'insert_default' => array(
        '0' => 'imagecache_gal_simple_thumbnail',
      ),
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Images Gallery',
      'weight' => '-27',
      'description' => 'Enable imagecache_ui and imagecache_actions to be able to modify watermark and images formats. 
',
      'type' => 'image_fupload_imagefield_widget',
      'module' => 'image_fupload_imagefield',
    ),
  );

  // Exported field: field_kt_teaser_img
  $fields['kt_gallery-field_kt_teaser_img'] = array(
    'field_name' => 'field_kt_teaser_img',
    'type_name' => 'kt_gallery',
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
      'weight' => '-28',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Decription of the Gallery');
  t('Images Gallery');
  t('Teaser Image');

  return $fields;
}
