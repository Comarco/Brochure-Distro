<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function kt_simple_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
  elseif ($module == "taxonomy_export" && $api == "default_taxonomy_exports") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function kt_simple_gallery_imagecache_default_presets() {
  $items = array(
    'gal_simple_mini_thumb' => array(
      'presetname' => 'gal_simple_mini_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '70',
            'height' => '70',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_autorotate',
          'action' => 'imagecache_autorotate',
          'data' => array(),
        ),
      ),
    ),
    'gal_simple_normalsize' => array(
      'presetname' => 'gal_simple_normalsize',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '675',
            'height' => '490',
          ),
        ),
      ),
    ),
    'gal_simple_thumbblock' => array(
      'presetname' => 'gal_simple_thumbblock',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_autorotate',
          'action' => 'imagecache_autorotate',
          'data' => array(),
        ),
      ),
    ),
    'gal_simple_thumbnail' => array(
      'presetname' => 'gal_simple_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '330',
            'height' => '200',
          ),
        ),
        '1' => array(
          'weight' => '-7',
          'module' => 'imagecache_autorotate',
          'action' => 'imagecache_autorotate',
          'data' => array(),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function kt_simple_gallery_node_info() {
  $items = array(
    'kt_gallery' => array(
      'name' => t('Gallery'),
      'module' => 'features',
      'description' => t('A simple gallery.. For uploading series of images.'),
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

/**
 * Implementation of hook_views_api().
 */
function kt_simple_gallery_views_api() {
  return array(
    'api' => '2',
  );
}
