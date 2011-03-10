<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function kt_simple_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create kt_gallery content
  $permissions['create kt_gallery content'] = array(
    'name' => 'create kt_gallery content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any kt_gallery content
  $permissions['delete any kt_gallery content'] = array(
    'name' => 'delete any kt_gallery content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own kt_gallery content
  $permissions['delete own kt_gallery content'] = array(
    'name' => 'delete own kt_gallery content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: download original image
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit any kt_gallery content
  $permissions['edit any kt_gallery content'] = array(
    'name' => 'edit any kt_gallery content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit captions
  $permissions['edit captions'] = array(
    'name' => 'edit captions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit own kt_gallery content
  $permissions['edit own kt_gallery content'] = array(
    'name' => 'edit own kt_gallery content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: mass upload images
  $permissions['mass upload images'] = array(
    'name' => 'mass upload images',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache gal_simple_mini_thumb
  $permissions['view imagecache gal_simple_mini_thumb'] = array(
    'name' => 'view imagecache gal_simple_mini_thumb',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache gal_simple_normalsize
  $permissions['view imagecache gal_simple_normalsize'] = array(
    'name' => 'view imagecache gal_simple_normalsize',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache gal_simple_thumbblock
  $permissions['view imagecache gal_simple_thumbblock'] = array(
    'name' => 'view imagecache gal_simple_thumbblock',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache gal_simple_thumbnail
  $permissions['view imagecache gal_simple_thumbnail'] = array(
    'name' => 'view imagecache gal_simple_thumbnail',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  return $permissions;
}
