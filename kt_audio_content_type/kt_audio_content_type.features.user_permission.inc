<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function kt_audio_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: create kt_audio content
  $permissions['create kt_audio content'] = array(
    'name' => 'create kt_audio content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any kt_audio content
  $permissions['delete any kt_audio content'] = array(
    'name' => 'delete any kt_audio content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own kt_audio content
  $permissions['delete own kt_audio content'] = array(
    'name' => 'delete own kt_audio content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any kt_audio content
  $permissions['edit any kt_audio content'] = array(
    'name' => 'edit any kt_audio content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own kt_audio content
  $permissions['edit own kt_audio content'] = array(
    'name' => 'edit own kt_audio content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
