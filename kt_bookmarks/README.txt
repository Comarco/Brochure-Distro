You can use a bookmarklet
~~~~~~~~~~~~~~~~~~~~~~~~~

<ol>
<li>In your browser click on Links >> Manage Bookmarks</li>
<li>Create a new empty link </li>
<li>Paste the code above in the "url" field</li>
<li>Give a name to your Bookmarklet, like «Make this page a link in my website» ;-)</li>
<li><strong>Be carrefull to change the url part, the <em>PUT-YOUR-OWN-DOMAIN</em></strong></li>
</ol>

<pre>
javascript:u=document.location.href;t=document.title;s=window.getSelection();void(window.open(%22http://PUT-YOUR-OWN-DOMAIN.COM/node/add/kt-bookmark?edit[title]=%22+escape(t)+'&edit[field_kt_bookmark_body][0][value]='+escape(s)+'&edit[field_kt_bookmark_url][0][url]='+escape(u),'_blank','width=1024,height=500,status=yes,resizable=yes,scrollbars=yes'));
</pre>

To try it, simply go to a page somewhere, select the part of the text you want to be the excerpt for your link, click on your bookmarklet «Link it». If you have the <a href="http://drupal.org/project/prepopulate">prepopulate module</a>, the Title, URL and body field should be populated.


