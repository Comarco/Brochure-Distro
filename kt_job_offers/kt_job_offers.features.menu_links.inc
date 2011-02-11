<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function kt_job_offers_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:job-offers
  $menu_links['primary-links:job-offers'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'job-offers',
    'router_path' => 'job-offers',
    'link_title' => 'Job Offers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Job Offers');


  return $menu_links;
}
