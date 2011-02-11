<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function kt_brochure_layouts_boxes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "panels" && $api == "layouts") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function kt_brochure_layouts_boxes_imagecache_default_presets() {
  $items = array(
    'kt_blb_cadre_01' => array(
      'presetname' => 'kt_blb_cadre_01',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '190',
            'height' => '',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '188',
            'height' => '110',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
        '2' => array(
          'weight' => '-8',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => '',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '210',
              'height' => '130',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'relative' => array(
              'leftdiff' => '',
              'rightdiff' => '',
              'topdiff' => '',
              'bottomdiff' => '',
            ),
          ),
        ),
        '3' => array(
          'weight' => '-7',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_canvas2file',
          'data' => array(
            'xpos' => 0,
            'ypos' => 0,
            'alpha' => '100',
            'path' => 'sites/all/modules/features/features-brochure/kt_brochure_layouts_boxes/images/cadreflou210x130.png',
            'dimensions' => 'original',
          ),
        ),
      ),
    ),
    'kt_brochure_width_of_the_site' => array(
      'presetname' => 'kt_brochure_width_of_the_site',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '990',
            'height' => '',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_roundedcorners',
          'data' => array(
            'radius' => '32',
            'independent_corners_set' => array(
              'independent_corners' => 0,
              'radii' => array(
                'tl' => '',
                'tr' => '',
                'bl' => '',
                'br' => '',
              ),
            ),
          ),
        ),
        '2' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '990',
            'height' => '200',
            'xoffset' => 'center',
            'yoffset' => 'center',
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
function kt_brochure_layouts_boxes_views_api() {
  return array(
    'api' => '2',
  );
}
