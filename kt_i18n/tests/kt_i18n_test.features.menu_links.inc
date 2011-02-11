<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function kt_i18n_test_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:this/is/a/path
  $menu_links['primary-links:kt_i18n_test/path/in/english'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'kt_i18n_test/path/in/english',
    'router_path' => 'kt_i18n_test/path/in/english',
    'link_title' => 'Menu Item In English',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu Item In English');


  return $menu_links;
}
