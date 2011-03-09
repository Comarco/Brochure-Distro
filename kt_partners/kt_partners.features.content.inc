<?php

/**
 * Implementation of hook_content_default_fields().
 */
function kt_partners_content_default_fields() {
  $fields = array();

  // Exported field: field_partner_logo
  $fields['partner-field_kt_partner_logo'] = array(
    'field_name' => 'field_kt_partner_logo',
    'type_name' => 'kt_partner',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'node-display_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'node-display_default',
        'exclude' => 0,
      ),
      '0' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '1' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
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
    'list_field' => '0',
    'list_default' => '1',
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => 'partner-images',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'file_widgets' => NULL,
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Partner List',
      'weight' => '-4',
      'description' => 'The Logo',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_url
  $fields['partner-field_kt_partner_url'] = array(
    'field_name' => 'field_kt_partner_url',
    'type_name' => 'kt_partner',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'url',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'url',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '0' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '1' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'user',
      'rel' => 'nofollow',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
          'attributes' => array(
            'target' => '_blank',
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'url',
      'weight' => '-3',
      'description' => 'The URL of the Partner',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  return $fields;
}
