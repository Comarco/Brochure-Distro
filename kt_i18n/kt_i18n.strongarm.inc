<?php

/**
 * Implementation of hook_strongarm().
 * Strongarm doesn't work with some variables. See 
 * http://drupal.org/node/661442#comment-3450508
 */
function kt_i18n_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation';
  $strongarm->value = LANGUAGE_NEGOTIATION_PATH_DEFAULT;

  $export['language_negotiation'] = $strongarm;

    // the above doesn't work with some variables, one example being
    // language_negotiation; force them here if they 
    // aren't set. See also http://drupal.org/node/661442#comment-3450508. The
    // only thing that works for me is setting these in .install
  
  return $export;  
}
