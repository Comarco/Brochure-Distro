api = "2"
core = "6.x"

projects[image_fupload][subdir] = "contrib"
projects[image_fupload][version] = "3.0-rc2"
projects[image_fupload][patch][] = "http://drupal.org/files/issues/image_fupload-swfupload_as_library_1.patch"

libraries[swfupload][download][type] = "get"
libraries[swfupload][download][url] = "http://swfupload.googlecode.com/files/SWFUpload%20v2.2.0.1%20Core.zip"
libraries[swfupload][directory_name] = "swfupload"




