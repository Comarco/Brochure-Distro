<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function kt_job_offers_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function kt_job_offers_imagecache_default_presets() {
  $items = array(
    'kt_job_offers_company_logo' => array(
      'presetname' => 'kt_job_offers_company_logo',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '250',
            'height' => '250',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'kt_job_offers_company_logo_thumbnail' => array(
      'presetname' => 'kt_job_offers_company_logo_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '100',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function kt_job_offers_node_info() {
  $items = array(
    'kt_job_offer' => array(
      'name' => t('Job Offer'),
      'module' => 'features',
      'description' => t('Display a job offer.'),
      'has_title' => '1',
      'title_label' => t('Job Offer Title'),
      'has_body' => '1',
      'body_label' => t('Job Description'),
      'min_word_count' => '10',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function kt_job_offers_views_api() {
  return array(
    'api' => '2',
  );
}
