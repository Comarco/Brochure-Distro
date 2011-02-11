<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function kt_block_header_image_imagecache_default_presets() {
  $items = array(
    'kt_image_header_gallery' => array(
      'presetname' => 'kt_image_header_gallery',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '960',
            'height' => '70',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_textactions',
          'action' => 'textactions_text2canvas',
          'data' => array(
            'size' => '32',
            'angle' => '0',
            'alpha' => '85',
            'xpos' => 'left+30',
            'ypos' => 'center',
            'RGB' => array(
              'HEX' => 'ffffff',
            ),
            'fontfile' => 'liberation-fonts-1.04/LiberationSans-Bold.ttf',
            'text' => 'The teaser image ;-)',
            'evaluate_text' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function kt_block_header_image_views_api() {
  return array(
    'api' => '2',
  );
}
