<?php

/**
 * Implementation of hook_default_box().
 */
function kt_brochure_layouts_boxes_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_info';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'InfosContact';
  $box->options = array(
    'body' => 'Contact

    Pascal Guérin
    514.820.2579

    Mathieu Lamoureux
    514.820.9543

    Adresse civique
    648 route 104, Mont-Saint-Grégoire (Québec) J0J 1K0',
    'format' => '2',
  );

  $export['contact_info'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_box';
  $box->plugin_key = 'simple';
  $box->title = 'Footer Message';
  $box->description = 'Footer Box';
  $box->options = array(
    'body' => 'Nullam laoreet, massa quis dapibus bibendum, libero turpis mollis neque, quis facilisis tellus elit in mauris. Vestibulum mattis rhoncus massa, nec eleifend purus venenatis sit amet! Nam vestibulum auctor risus, ut dignissim neque tincidunt vel. Aliquam ultrices fermentum leo, eu tincidunt tellus tincidunt at! In non urna non velit commodo dictum massa nunc.
',
    'format' => '2',
  );

  $export['footer_box'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'header_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Header Box';
  $box->options = array(
    'body' => '&nbsp;',
    'format' => '1',
  );

  $export['header_box'] = $box;
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
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'logo_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Logo Box';
  $box->options = array(
    'body' => '<a href="/"><img src="/sites/drupal.toituresimpala.com/files/sweaver/logo_adaptivetheme_temp_draft.png" alt="logo"/></a>',
    'format' => '3',
  );

  $export['logo_box'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'main_content_box';
  $box->plugin_key = 'simple';
  $box->title = 'What we do';
  $box->description = 'Main Content Box';
  $box->options = array(
    'body' => 'Ut eu tellus urnia, sit amet mattis enim. Aliquam eu velit eros, eu dapibus libero. Curabitur sit amet odio ut ligula tincidunt auctor et id nunc. Fusce posuere libero a ante aliquet posuere quis at nisl. Curabitur convallis rutrum vehicula. Aliquam vitae justo lacus, sed cursus ipsum. Integer et tellus id tortor tincidunt ultrices. Nam sagittis magna nullam.

Aliquam eu velit eros, eu dapibus libero. Curabitur sit amet odio ut ligula tincidunt auctor et id nunc. Fusce posuere libero a ante aliquet posuere quis at nisl. Curabitur convallis rutrum vehicula. Aliquam vitae justo lacus, sed cursus ipsum. Integer et tellus id tortor tincidunt ultrices',
    'format' => '1',
  );

  $export['main_content_box'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mission_box';
  $box->plugin_key = 'simple';
  $box->title = 'Our Mission';
  $box->description = 'Mission Box';
  $box->options = array(
    'body' => 'Proin lobortis sagittis eros vitae placerat? Maecenas consectetur scelerisque enim, bibendum sagittis elit dapibus at. Mauris auctor tellus sollicitudin enim feugiat vel pulvinar nisl iaculis. Duis vitae nibh mi. Praesent bibendum dolor et ligula dictum faucibus. In odio dui, eleifend sit amet pharetra id, placerat at odio? Fusce dapibus volutpat neque amet.
',
    'format' => '1',
  );

  $export['mission_box'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'slogan_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Slogan Box';
  $box->options = array(
    'body' => 'SERVICE & QUALITÉ GARANTIS • ASSURANCE 
RESPONSABILIÉ • ESTIMATION GRATUITE',
    'format' => '2',
  );

  $export['slogan_box'] = $box;
  return $export;
}
