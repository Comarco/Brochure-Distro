<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function kt_job_offers_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create kt_job_offer content
  $permissions['create kt_job_offer content'] = array(
    'name' => 'create kt_job_offer content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any kt_job_offer content
  $permissions['delete any kt_job_offer content'] = array(
    'name' => 'delete any kt_job_offer content',
    'roles' => array(),
  );

  // Exported permission: delete own kt_job_offer content
  $permissions['delete own kt_job_offer content'] = array(
    'name' => 'delete own kt_job_offer content',
    'roles' => array(),
  );

  // Exported permission: edit any kt_job_offer content
  $permissions['edit any kt_job_offer content'] = array(
    'name' => 'edit any kt_job_offer content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own kt_job_offer content
  $permissions['edit own kt_job_offer content'] = array(
    'name' => 'edit own kt_job_offer content',
    'roles' => array(),
  );

  // Exported permission: view imagecache kt_job_offers_company_logo
  $permissions['view imagecache kt_job_offers_company_logo'] = array(
    'name' => 'view imagecache kt_job_offers_company_logo',
    'roles' => array(),
  );

  // Exported permission: view imagecache kt_job_offers_company_logo_thumbnail
  $permissions['view imagecache kt_job_offers_company_logo_thumbnail'] = array(
    'name' => 'view imagecache kt_job_offers_company_logo_thumbnail',
    'roles' => array(),
  );

  return $permissions;
}
