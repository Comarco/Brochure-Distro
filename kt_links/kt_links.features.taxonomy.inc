<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function kt_links_taxonomy_default_vocabularies() {
  return array(
    'kt_link_tags' => array(
      'name' => 'Link Tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_kt_link_tags',
      'weight' => '-2',
      'type' => NULL,
      'nodes' => array(),
    ),
  );
}
