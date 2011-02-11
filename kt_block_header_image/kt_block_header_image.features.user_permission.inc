<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function kt_block_header_image_user_default_permissions() {
  $permissions = array();

  // Exported permission: view imagecache kt_image_header_gallery
  $permissions['view imagecache kt_image_header_gallery'] = array(
    'name' => 'view imagecache kt_image_header_gallery',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
