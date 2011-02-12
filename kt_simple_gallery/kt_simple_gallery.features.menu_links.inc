<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function kt_simple_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/kt-gallery
  $menu_links['navigation:node/add/kt-gallery'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/kt-gallery',
    'router_path' => 'node/add/kt-gallery',
    'link_title' => 'Gallery',
    'options' => array(
      'attributes' => array(
        'title' => 'A simple gallery.. For uploading series of images.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Gallery');


  return $menu_links;
}
