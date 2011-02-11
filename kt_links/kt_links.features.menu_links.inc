<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function kt_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:links
  $menu_links['primary-links:links'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'links',
    'router_path' => 'links',
    'link_title' => 'Links',
    'options' => array(
      'attributes' => array(
        'title' => 'Links',
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
  t('Links');


  return $menu_links;
}
