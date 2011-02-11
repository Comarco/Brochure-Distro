= kt_basic =

by Albert Albala
Koumbit.org
http://creativecommons.org/licenses/by-sa/2.0/

== Intro ==

kt_basic is meant to be a Feature that can be used as a dependency for many other Features, and implements basic Drupal functionality for Features-based sites.

== Dependencies ==

 * ktodo: this is my solution for now for showing a "todo" list (see more in the readme ktodo). ktodo defines a hook, hook_ktodo(), which allows modules (like the kt_i18n feature) to define things that remain to be done before they're fully functional. This is best solution I found for asking users to enable a second language after enabling kt_i18n; and should be made available, I believe, to other modules. For example, some of Koumbit's brochure creation features could also let users know that for the feature to be fully functional they need to, for example, actually write content.
 * context: used to define block position in the feature. (you will note that all our blocks are managed by context and don't even appear as active in the block admin page, even though they're present on the page)

== Testing ==

Simpletest is used and we will strive for the all tests to pass in the repo, so nothing should be committed if it causes a test to fail. Likewise, new features should also implement new tests.

== Releases ==

=== Initial commit, nov. 17 2010 ===

 * Displays the ktodo block at left.
 