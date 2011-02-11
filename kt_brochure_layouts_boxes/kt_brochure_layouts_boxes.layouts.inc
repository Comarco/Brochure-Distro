<?php

/**
 * Implementation of hook_default_panels_layout().
 */
function kt_brochure_layouts_boxes_default_panels_layout() {
  $export = array();
  $layout = new stdClass;
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = '2_1_4_myttak';
  $layout->admin_title = '2-1-4 colones ';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
          3 => 3,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Ads - Partners',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_left',
          1 => 'main_right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'main_left' => array(
        'type' => 'region',
        'title' => 'Main Left',
        'width' => '69.74055273547658',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'main_right' => array(
        'type' => 'region',
        'title' => 'Main Right',
        'width' => '30.259447264523413',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'col_1',
          1 => 'col_2',
          2 => 'col_3',
          3 => 'col_4',
        ),
        'parent' => 'main',
        'class' => 'menu-sections',
      ),
      'col_1' => array(
        'type' => 'region',
        'title' => 'Col 1',
        'width' => '25.0038455622212',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'col_2' => array(
        'type' => 'region',
        'title' => 'Col 2',
        'width' => '25.001922485343623',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'col_3' => array(
        'type' => 'region',
        'title' => 'Col 3',
        'width' => '24.955210892720988',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'col_4' => array(
        'type' => 'region',
        'title' => 'Col 4',
        'width' => '25.039021059714194',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => 'footer-row',
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'footer-panel',
      ),
    ),
  );

  $export['2_1_4_myttak'] = $layout;
  $layout = new stdClass;
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = '2_1_4_nodes_myttak';
  $layout->admin_title = '2-1-4 colones pour nodes et le reste';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
          3 => 3,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Ads - Partners',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_left',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'main_left' => array(
        'type' => 'region',
        'title' => 'Main Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'col_1',
          1 => 'col_2',
          2 => 'col_3',
          3 => 'col_4',
        ),
        'parent' => 'main',
        'class' => 'menu-sections',
      ),
      'col_1' => array(
        'type' => 'region',
        'title' => 'Col 1',
        'width' => '25.0038455622212',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'col_2' => array(
        'type' => 'region',
        'title' => 'Col 2',
        'width' => '25.001922485343623',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'col_3' => array(
        'type' => 'region',
        'title' => 'Col 3',
        'width' => '24.955210892720988',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'col_4' => array(
        'type' => 'region',
        'title' => 'Col 4',
        'width' => '25.039021059714194',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => 'footer-row',
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'footer-panel',
      ),
    ),
  );

  $export['2_1_4_nodes_myttak'] = $layout;
  return $export;
}
