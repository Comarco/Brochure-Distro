= ktodo =

by Albert Albala
Koumbit.org
http://creativecommons.org/licenses/by-sa/2.0/

== Intro ==

ktodo defines hook_ktodo(), which allows other modules to make lists of things users should do for them (the modules) to be functional.

Differs from hook_requirements() in that 
(1) it is less technical and doesn't necessarily mean there is something wrong with the site. For example, the kt_i18n module can let users know that their site won't be truly multilingual unless they enable more than one language; a blog module might tell a user that it's time to start writing blog posts if there are none available.
(3) it is not necessarily site-wide. It is possible to check who the current user is and display todo items for authenticated users, for example, who don't have access to admin/reports/status. For example, once they register they might be asked to fill in their profile or something like that.

Take a look at ktodo.test to have an idea what a usecase might be.

== Structure ==

This module is meant to be lightweight, simple with no dependencies. It just defines a hook and a block.

== Testing ==

Simpletest is used and we will strive for the all tests to pass in the repo, so nothing should be committed if it causes a test to fail. Likewise, new features should also implement new tests.

== Implementing the hook ==

Please look at the code at tests/ktodo_test.module to see how this hook should be implemented.

== Releases ==

=== Initial commit, nov. 17 2010 ===

 * Defines hook_ktodo()
 * Defines a block displaying todo items