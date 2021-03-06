<?php

/**
 * Implementation of hook_default_box().
 */
function kt_brochure_layouts_boxes_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'language_switcher_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Language Switcher Box';
  $box->options = array(
    'body' => '<?php
  // this is copy&paste from locale_block in locale.module
  $languages = language_list(\'enabled\');
  $links = array();
  foreach ($languages[1] as $language) {
    if ($language->language != $current) {
      $links[$language->language] = array(
        \'href\'       => $_GET[\'q\'],
        \'title\'      => $language->native,
        \'language\'   => $language,
        \'attributes\' => array(\'class\' => \'language-link\'),
      );
    }
  }

  // this adds the real paths, i.e. if we are on a german page,
  // the british flag will point to en/english_alias instead of
  // en/node_with_german_content
  translation_translation_link_alter($links, $_GET[\'q\']);

  // This one adds extended languages, i.e. those that are not enabled.
  // Disable if you want only flags for enabled languages.
  i18n_translation_link_alter($links, $_GET[\'q\']);

  // now add or replace text links by flags, according to your i18n settings.
  if (function_exists(\'languageicons_translation_link_alter\'))
    languageicons_translation_link_alter($links, $_GET[\'q\']);

  // Or do your own stuff, e.g. set the flags and no lang names,
  // no matter what the i18n icon settings say.
  //if ($icon = theme(\'languageicons_icon\', $language, NULL)) {
  //   $links[$language->language][\'title\'] = theme(\'languageicons_place\', $link[\'title\'], $icon);
  //   $links[$language->language][\'html\'] = TRUE;         
  //}

  // remove the current language again. We cannot do that
  // earlier because i18n_translation_link_alter would add it
  // again, thinking it was an extendeg language because it
  // was not yet contained in $links. If you don\'t use
  // i18n_translation_link_alter, you can also make a case distinction
  // in the foreach loop
  $current = i18n_get_lang();
  unset($links[$current]);

  // format as you like, e.g.
  echo theme(\'links\', $links, array());
?>',
    'format' => '3',
  );

  $export['language_switcher_box'] = $box;
  return $export;
}
