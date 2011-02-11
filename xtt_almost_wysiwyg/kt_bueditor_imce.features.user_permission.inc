<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function kt_bueditor_imce_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer bueditor(execute PHP)
  $permissions['administer bueditor(execute PHP)'] = array(
    'name' => 'administer bueditor(execute PHP)',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer imce(execute PHP)
  $permissions['administer imce(execute PHP)'] = array(
    'name' => 'administer imce(execute PHP)',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
