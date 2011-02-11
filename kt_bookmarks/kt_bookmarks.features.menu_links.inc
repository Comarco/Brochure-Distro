<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function kt_bookmarks_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:bookmarks
  $menu_links['primary-links:bookmarks'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'bookmarks',
    'router_path' => 'bookmarks',
    'link_title' => 'Bookmarks',
    'options' => array(
      'attributes' => array(
        'title' => 'Bookmarks',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bookmarks');


  return $menu_links;
}
