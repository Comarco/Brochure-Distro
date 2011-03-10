<?php

/**
 * Implementation of hook_user_default_roles().
 */
function kt_brochure_roles_permissions_user_default_roles() {
  $roles = array();

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
  );

  return $roles;
}
