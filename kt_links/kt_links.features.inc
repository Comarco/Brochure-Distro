<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function kt_links_ctools_plugin_api() {
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
function kt_links_node_info() {
  $items = array(
    'kt_link' => array(
      'name' => t('Link'),
      'module' => 'features',
      'description' => t('A link that will be listed on the Links page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('<h3>You can use a linklet</h3>

<ol>
<li>In your browser click on Links >> Manage Bookmarks</li>
<li>Create a new empty link </li>
<li>Paste the code above in the "url" field</li>
<li>Give a name to your Bookmarklet, like «Make this page a link in my website» ;-)</li>
<li><strong>Be carrefull to change the url part, the <em>PUT-YOUR-OWN-DOMAIN</em></strong></li>
</ol>

<pre>
javascript:u=document.location.href;t=document.title;s=window.getSelection();void(window.open(%22\'http://PUT-YOUR-OWN-DOMAIN.COM/node/add/kt-link?edit[title]=%22\'+escape(t)+\'&edit[field_kt_link_url][0][url]=\'+escape(u),\'_blank\',\'width=1024,height=500,status=yes,resizable=yes,scrollbars=yes\'));
</pre>

To try it, simply go to a page somewhere, select the part of the text you want to be the excerpt for your link, click on your bookmarklet «Link it». If you have the <a href="http://drupal.org/project/prepopulate">prepopulate module</a>, the Title, URL and body field should be populated.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function kt_links_views_api() {
  return array(
    'api' => '2',
  );
}
