<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _kt_job_offers_node_info() {
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
      'help' => t(''),
    ),
  );
  return $items;
}
