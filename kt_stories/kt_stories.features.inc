<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function kt_stories_imagecache_default_presets() {
  $items = array(
    'kt_stories_mini_thumb' => array(
      'presetname' => 'kt_stories_mini_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '120',
            'height' => '86',
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
    'kt_stories_nornalsize' => array(
      'presetname' => 'kt_stories_nornalsize',
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
    'kt_stories_thumbnail' => array(
      'presetname' => 'kt_stories_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '330',
            'height' => '200',
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
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function kt_stories_views_api() {
  return array(
    'api' => '2',
  );
}
