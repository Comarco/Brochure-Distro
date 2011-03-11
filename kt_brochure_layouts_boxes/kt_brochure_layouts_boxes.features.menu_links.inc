<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function kt_brochure_layouts_boxes_menu_default_menu_links() {
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
    'weight' => '-47',
  );
  // Exported menu link: primary-links:front
  $menu_links['primary-links:front'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'front',
    'router_path' => 'front',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:images
  $menu_links['primary-links:images'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'images',
    'router_path' => 'images',
    'link_title' => 'Gallery',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:news
  $menu_links['primary-links:news'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(),
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
  t('Gallery');
  t('Home');
  t('News');


  return $menu_links;
}
