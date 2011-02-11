<?php

/**
 * Implementation of hook_content_default_fields().
 */
function kt_stories_content_default_fields() {
  $fields = array();

  // Exported field: field_kt_stories_files
  $fields['story-field_kt_stories_files'] = array(
    'field_name' => 'field_kt_stories_files',
    'type_name' => 'story',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
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
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'doc pdf txt xml docx odt ods',
      'file_path' => 'uploaded-documents/articles/[site-date-yyyy]/[site-date-mm]/[site-date-dd]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'insert' => FALSE,
      'insert_styles' => array(
        '1' => 1,
        '0' => 1,
        'auto' => FALSE,
        'link' => FALSE,
        'image' => FALSE,
        'imagecache_kt_stories_simple_thumbblock' => FALSE,
        'imagecache_kt_stories_simple_normalsize' => FALSE,
        'imagecache_kt_stories_simple_thumbnail' => FALSE,
      ),
      'insert_default' => array(
        '0' => 'imagecache_kt_stories_simple_thumbnail',
      ),
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Files',
      'weight' => '2',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_kt_stories_files_desc
  $fields['story-field_kt_stories_files_desc'] = array(
    'field_name' => 'field_kt_stories_files_desc',
    'type_name' => 'story',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
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
          'format' => '1',
          '_error_element' => 'default_value_widget][field_kt_stories_files_desc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Description of the File(s)',
      'weight' => '3',
      'description' => 'Here you can add a description with HTML of the File(s)',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_kt_stories_gallery_desc
  $fields['story-field_kt_stories_gallery_desc'] = array(
    'field_name' => 'field_kt_stories_gallery_desc',
    'type_name' => 'story',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
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
          'format' => '1',
          '_error_element' => 'default_value_widget][field_kt_stories_gallery_desc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Decription of the Gallery',
      'weight' => '1',
      'description' => 'Here you can add a long description with HTML for the Gallery',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_kt_stories_img_gal
  $fields['story-field_kt_stories_img_gal'] = array(
    'field_name' => 'field_kt_stories_img_gal',
    'type_name' => 'story',
    'display_settings' => array(
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__gal_simple_mini_thumb__gal_simple_normalsize',
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
      'file_path' => 'images/galleries/articles/[site-date-yyyy]/[site-date-mm]/[site-date-dd]',
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
      'insert' => FALSE,
      'insert_styles' => array(
        '1' => 1,
        '0' => 1,
        'auto' => FALSE,
        'link' => FALSE,
        'image' => FALSE,
        'imagecache_kt_stories_simple_thumbblock' => FALSE,
        'imagecache_kt_stories_simple_normalsize' => FALSE,
        'imagecache_kt_stories_simple_thumbnail' => FALSE,
      ),
      'insert_default' => array(
        '0' => 'imagecache_kt_stories_simple_thumbnail',
      ),
      'insert_class' => '',
      'insert_width' => '',
      'fupload_mode' => 'multiple',
      'fupload_previewlist_img_attributes' => '',
      'fupload_title_replacements' => '_;{;};-',
      'fupload_previewlist_field_settings' => array(
        'imagefield_description' => 'imagefield_description',
        'node_title' => 0,
        'node_description' => 0,
        'imagefield_title' => 0,
        'imagefield_alt' => 0,
        'cck_field_kt_teaser_img' => 0,
        'cck_field_kt_stories_subtitle' => 0,
        'cck_field_kt_stories_gallery_desc' => 0,
        'cck_field_kt_stories_files' => 0,
        'cck_field_kt_stories_files_desc' => 0,
      ),
      'fupload_previewlist_redirecturl' => '',
      'label' => 'Images Gallery',
      'weight' => 0,
      'description' => '',
      'type' => 'image_fupload_imagefield_widget',
      'module' => 'image_fupload_imagefield',
    ),
  );

  // Exported field: field_kt_stories_subtitle
  $fields['story-field_kt_stories_subtitle'] = array(
    'field_name' => 'field_kt_stories_subtitle',
    'type_name' => 'story',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
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
          'format' => '1',
          '_error_element' => 'default_value_widget][field_kt_stories_subtitle][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Subtitle',
      'weight' => '-3',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Decription of the Gallery');
  t('Description of the File(s)');
  t('Files');
  t('Images Gallery');
  t('Subtitle');

  return $fields;
}
