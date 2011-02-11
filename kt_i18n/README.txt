= kt_i18n =

by Albert Albala
Koumbit.org
http://creativecommons.org/licenses/by-sa/2.0/

== Intro ==

kt_i18n is a feature which is meant to do all necessary setup for a multilingual site. Based partly on kt_campaign_i18n, by Marc Angles.

Looking through the code at kt_i18n.test gives a good idea of what kt_i18n is supposed to do out of the box.

== Dependencies ==

 * i18n, i18nblocks, i18ncck, i18ncontent, i18nmenu, i18nstrings, i18nsync, i18ntaxonomy, i18nviews, locale are various internationalization modules which were present in kt_campaign_i18n
 * strongarm allows the exporting of some site variables, although not the ones we need (thus, as of the initial commit strongarm was not necessary but kept as a dependency for future use)
 * context: used to define block position in the feature. (you will note that all our blocks are managed by context and don't even appear as active in the block admin page, even though they're present on the page)
 * kt_basic: this is my solution for now for showing a "todo" list (see more in the readme of kt_basic and ktodo). kt_basic enables ktodo and displays a block for it. ktodo defines a hook, hook_ktodo(), which allows modules (like this kt_i18n feature) to define things that remain to be done before they're fully functional. This is best solution I found for asking users to enable a second language after enabling kt_i18n.

== Testing ==

Simpletest is used and we will strive for the all tests to pass in the repo, so nothing should be committed if it causes a test to fail. Likewise, new features should also implement new tests.

== Integrating *your* features with i18n ==

kt_i18n supports a protocol for defining i18n-support in 3rd-party Features for content types (not yet for views).

Specifically, 

* third-party Features which define content types can define whether they should be localizable
* Features which take advantage of this functionality don't need to have kt_i18n as a dependency.
* The content types defined as localizable by third-party Features will be localizable whatever the order in which the third-party Feature and kt_i18n are enabled.
* a simpletest and test module exist within kt_i18n whic demonstrate how to do this and prove that it works.

== Releases ==

=== Initial commit, nov. 17 2010 ===

 * Implements hook_ktodo and notifies the user if there is only one languages, or if other conditions are met which will prevent kt_i18n from working.
 * Displays the language switcher block
 * If language_negociation is set to none, sets it to path prefix
