<?php

/**
 * Implementation of hook_default_stylizer().
 */
function kt_brochure_layouts_boxes_default_stylizer() {
  $export = array();
  $style = new stdClass;
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->name = 'kt_style1';
  $style->admin_title = 'Style 1';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'kt_style1',
    'style_base' => 'region_rounded_shadow',
    'font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'medium',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '0.05em',
      'right' => '0.05em',
      'bottom' => '0.05em',
      'left' => '0.05em',
    ),
    'palette' => array(
      'background' => '#ffffff',
      'text' => '#3c2f20',
    ),
  );

  $export['kt_style1'] = $style;
  $style = new stdClass;
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->name = 'kt_style2';
  $style->admin_title = 'Style 2';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'kt_style2',
    'style_base' => 'region_rounded_shadow',
    'font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'medium',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'palette' => array(
      'background' => '#2f3f74',
      'text' => '#e0cbe2',
    ),
  );

  $export['kt_style2'] = $style;
  $style = new stdClass;
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->name = 'kt_style3';
  $style->admin_title = 'Style 3';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'kt_style3',
    'style_base' => 'region_plain_box',
    'font' => array(
      'font' => 'Verdana, Arial, Helvetica, sans-serif',
      'size' => 'small',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'border' => array(
      'thickness' => 'none',
      'style' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'palette' => array(
      'background' => '#ffffff',
      'text' => '#000000',
      'border' => '#f3f3d3',
    ),
  );

  $export['kt_style3'] = $style;
  return $export;
}
