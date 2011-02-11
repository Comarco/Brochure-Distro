<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function kt_bookmarks_taxonomy_default_vocabularies() {
  return array(
    'kt_bookmark_tags' => array(
      'name' => 'Bookmark Tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_kt_bookmark_tags',
      'weight' => '-2',
      'language' => '',
      'nodes' => array(
        'kt_bookmark' => 'kt_bookmark',
      ),
    ),
  );
}
