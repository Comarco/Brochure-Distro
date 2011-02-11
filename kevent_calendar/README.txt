= kevent_calendar =

by Sofian B, Marc Angles, Albert Albala
Koumbit.org
http://creativecommons.org/licenses/by-sa/2.0/

== Intro ==

kevent_calendar is a feature which is meant to do all necessary setup for defining and viewing events on a website. 

Looking through the code at kt_event_calendar.test gives a good idea of what kt_i18n is supposed to do out of the box.

== Dependencies ==

 * calendar
 * date 
 * features
 
== Testing ==

Simpletest is used and we will strive for the all tests to pass in the repo, so nothing should be committed if it causes a test to fail. Likewise, new features should also implement new tests.

== Releases ==

=== January 10, 2011 ===

 * fixed https://redmine.koumbit.net/issues/2226
 * applied some tests (see kt_event_calendar.test)

=== Prior to January 10, 2011 ===

 * See git log for information