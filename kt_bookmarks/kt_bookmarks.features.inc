<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function kt_bookmarks_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
  elseif ($module == "taxonomy_export" && $api == "default_taxonomy_exports") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function kt_bookmarks_node_info() {
  $items = array(
    'kt_bookmark' => array(
      'name' => t('Bookmark'),
      'module' => 'features',
      'description' => t('un bookmark comme sur delicious, mais chez moi ;)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('<h3>You can use a bookmarklet</h3>

<ol>
<li>In your browser click on Bookmarks >> Manage Bookmarks</li>
<li>Create a new empty bookmark </li>
<li>Paste the code above in the "url" field</li>
<li>Give a name to your Bookmarklet, like «Bookmark it»</li>
<li><strong>Be carrefull to change the url part, the <em>example.com</em></strong></li>
</ol>

<pre>
javascript:u=document.location.href;t=document.title;s=window.getSelection();void(window.open(%22http://PUT-YOUR-OWN-DOMAIN.com/node/add/kt-bookmark?edit[title]=%22+escape(t)\'&edit[field_kt_bookmark_body][0][value]=\'+escape(s)+\'&edit[field_kt_bookmark_url][0][url]=\'+escape(u),\'_blank\',\'width=1024,height=500,status=yes,resizable=yes,scrollbars=yes\'));
</pre>

To try it, simply go to a page somewhere, select the part of the text you want to be the excerpt for your bookmark, click on your bookmarklet «Bookmark it». If you have the prepopulate module, the Title, URL and body field should be populated.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function kt_bookmarks_views_api() {
  return array(
    'api' => '2',
  );
}
