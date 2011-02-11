<?php

/**
 * Implementation of hook_strongarm().
 */
function kt_brochure_layouts_boxes_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_edit_block_active_pages';
  $strongarm->value = '';

  $export['block_edit_block_active_pages'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_edit_block_active_type';
  $strongarm->value = 'disable';

  $export['block_edit_block_active_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_edit_block_links';
  $strongarm->value = 0;

  $export['block_edit_block_links'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_edit_content_types';
  $strongarm->value = array(
    'kt_gallery' => 'kt_gallery',
    'kt_link' => 'kt_link',
    'page' => 'page',
    'partner' => 'partner',
    'story' => 'story',
  );

  $export['block_edit_content_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_edit_display_options';
  $strongarm->value = 'both';

  $export['block_edit_display_options'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_edit_hover_links';
  $strongarm->value = 0;

  $export['block_edit_hover_links'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_edit_node_active_pages';
  $strongarm->value = '';

  $export['block_edit_node_active_pages'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_edit_node_active_type';
  $strongarm->value = 'disable';

  $export['block_edit_node_active_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_edit_node_links';
  $strongarm->value = 0;

  $export['block_edit_node_links'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_edit_panels_links';
  $strongarm->value = 0;

  $export['block_edit_panels_links'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_edit_tabs';
  $strongarm->value = array(
    'kt_gallery' => 'kt_gallery',
    'kt_link' => 'kt_link',
    'page' => 'page',
    'partner' => 'partner',
    'story' => 'story',
  );

  $export['block_edit_tabs'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_border_size';
  $strongarm->value = '10';

  $export['lightbox2_border_size'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_box_color';
  $strongarm->value = 'fff';

  $export['lightbox2_box_color'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_disable_close_click';
  $strongarm->value = 1;

  $export['lightbox2_disable_close_click'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_disable_resize';
  $strongarm->value = 0;

  $export['lightbox2_disable_resize'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_disable_zoom';
  $strongarm->value = 0;

  $export['lightbox2_disable_zoom'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_download_link_text';
  $strongarm->value = 'Download Original';

  $export['lightbox2_download_link_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_enable_contact';
  $strongarm->value = 0;

  $export['lightbox2_enable_contact'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_enable_login';
  $strongarm->value = 0;

  $export['lightbox2_enable_login'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_enable_video';
  $strongarm->value = 0;

  $export['lightbox2_enable_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_fadein_speed';
  $strongarm->value = '0.4';

  $export['lightbox2_fadein_speed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_filter_xss_allowed_tags';
  $strongarm->value = 'p, br, a, em, strong, cite, code, ul, ol, li, dl, dt, dd';

  $export['lightbox2_filter_xss_allowed_tags'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_flv_player_flashvars';
  $strongarm->value = '';

  $export['lightbox2_flv_player_flashvars'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_flv_player_path';
  $strongarm->value = 'flvplayer.swf';

  $export['lightbox2_flv_player_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_font_color';
  $strongarm->value = '000';

  $export['lightbox2_font_color'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_force_show_nav';
  $strongarm->value = 0;

  $export['lightbox2_force_show_nav'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_image_count_str';
  $strongarm->value = 'Image !current of !total';

  $export['lightbox2_image_count_str'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_imagefield_group_node_id';
  $strongarm->value = '1';

  $export['lightbox2_imagefield_group_node_id'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_imagefield_use_node_title';
  $strongarm->value = 0;

  $export['lightbox2_imagefield_use_node_title'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_js_location';
  $strongarm->value = 'footer';

  $export['lightbox2_js_location'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_keys_close';
  $strongarm->value = 'c x 27';

  $export['lightbox2_keys_close'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_keys_next';
  $strongarm->value = 'n 39';

  $export['lightbox2_keys_next'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_keys_play_pause';
  $strongarm->value = '32';

  $export['lightbox2_keys_play_pause'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_keys_previous';
  $strongarm->value = 'p 37';

  $export['lightbox2_keys_previous'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_keys_zoom';
  $strongarm->value = 'z';

  $export['lightbox2_keys_zoom'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_lite';
  $strongarm->value = 0;

  $export['lightbox2_lite'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_loop_items';
  $strongarm->value = 0;

  $export['lightbox2_loop_items'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_node_link_target';
  $strongarm->value = 0;

  $export['lightbox2_node_link_target'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_node_link_text';
  $strongarm->value = 'View Image Details';

  $export['lightbox2_node_link_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_overlay_color';
  $strongarm->value = '000';

  $export['lightbox2_overlay_color'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_overlay_opacity';
  $strongarm->value = '0.8';

  $export['lightbox2_overlay_opacity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_page_count_str';
  $strongarm->value = 'Page !current of !total';

  $export['lightbox2_page_count_str'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_page_init_action';
  $strongarm->value = 'page_disable';

  $export['lightbox2_page_init_action'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_page_list';
  $strongarm->value = '';

  $export['lightbox2_page_list'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_resize_sequence';
  $strongarm->value = '0';

  $export['lightbox2_resize_sequence'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_resize_speed';
  $strongarm->value = '0.4';

  $export['lightbox2_resize_speed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_show_caption';
  $strongarm->value = 1;

  $export['lightbox2_show_caption'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_slidedown_speed';
  $strongarm->value = '0.6';

  $export['lightbox2_slidedown_speed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_top_position';
  $strongarm->value = '';

  $export['lightbox2_top_position'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_use_alt_layout';
  $strongarm->value = 0;

  $export['lightbox2_use_alt_layout'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_video_count_str';
  $strongarm->value = 'Video !current of !total';

  $export['lightbox2_video_count_str'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_view_image_text';
  $strongarm->value = 'View image';

  $export['lightbox2_view_image_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_contact_site_disabled';
  $strongarm->value = FALSE;

  $export['page_manager_contact_site_disabled'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;

  $export['page_manager_node_view_disabled'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_legacy_rendering_mode';
  $strongarm->value = FALSE;

  $export['panels_legacy_rendering_mode'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'homepage';

  $export['site_frontpage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'webmaster@brochure-dev2.mercure2';

  $export['site_mail'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'brochure-dev2.mercure2';

  $export['site_name'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'skinr_adaptivetheme';
  $strongarm->value = array(
    'block' => array(
      'user-2' => array(
        'at-grid' => 'grid-4-12',
      ),
      'node-0' => array(
        'at-grid' => 'grid-4-12',
      ),
      'user-3' => array(
        'at-grid' => 'grid-4-12',
      ),
      'search-0' => array(
        'at-grid' => 'grid-7',
        'at-align-content' => 'at-align-right-content',
      ),
      'boxes-language_switcher_box' => array(
        'at-grid' => 'grid-1',
        'at-align-content' => 'at-align-right-content',
        '_additional' => 'inline',
      ),
      'superfish-1' => array(
        'at-grid' => 'grid-16',
      ),
      'boxes-logo_box' => array(
        'at-grid' => 'grid-3',
      ),
      'boxes-mission_box' => array(
        'at-grid' => 'grid-8',
      ),
      'boxes-slogan_box' => array(
        'at-grid' => 'grid-8',
      ),
    ),
    'views' => array(
      'view-galleries-display-default' => array(
        'at-align-content' => '',
      ),
    ),
  );

  $export['skinr_adaptivetheme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_arrow_1';
  $strongarm->value = 'false';

  $export['superfish_arrow_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_bgf_1';
  $strongarm->value = 1;

  $export['superfish_bgf_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_count_1';
  $strongarm->value = 1;

  $export['superfish_count_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_delay_1';
  $strongarm->value = '1000';

  $export['superfish_delay_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_depth_1';
  $strongarm->value = '-1';

  $export['superfish_depth_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_dfirstlast_1';
  $strongarm->value = 0;

  $export['superfish_dfirstlast_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_dzebra_1';
  $strongarm->value = 0;

  $export['superfish_dzebra_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_extraclass_1';
  $strongarm->value = '';

  $export['superfish_extraclass_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_extracss_1';
  $strongarm->value = '';

  $export['superfish_extracss_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_firstlast_1';
  $strongarm->value = 1;

  $export['superfish_firstlast_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_linktextwrapper_1';
  $strongarm->value = '';

  $export['superfish_linktextwrapper_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_linkwrapper_1';
  $strongarm->value = '';

  $export['superfish_linkwrapper_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_maxwidth_1';
  $strongarm->value = '27';

  $export['superfish_maxwidth_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_menu_1';
  $strongarm->value = 'primary-links:0';

  $export['superfish_menu_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_minwidth_1';
  $strongarm->value = '12';

  $export['superfish_minwidth_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mulwrapper_1';
  $strongarm->value = '';

  $export['superfish_mulwrapper_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_name_1';
  $strongarm->value = 'Primary Links JS';

  $export['superfish_name_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_shadow_1';
  $strongarm->value = 'false';

  $export['superfish_shadow_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_slide_1';
  $strongarm->value = 'false';

  $export['superfish_slide_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_speed_1';
  $strongarm->value = 'fast';

  $export['superfish_speed_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_style_1';
  $strongarm->value = 'white';

  $export['superfish_style_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_supersubs_1';
  $strongarm->value = 0;

  $export['superfish_supersubs_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_type_1';
  $strongarm->value = 'horizontal';

  $export['superfish_type_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_zebra_1';
  $strongarm->value = 1;

  $export['superfish_zebra_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_combined_selectors';
  $strongarm->value = 1;

  $export['sweaver_combined_selectors'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_ctools_allowed_properties';
  $strongarm->value = '-moz-border-radius
-webkit-border-radius
border-top-right-radius
border-bottom-right-radius
border-bottom-left-radius
border-top-left-radius
webkit-border-top-right-radius
webkit-border-bottom-right-radius
webkit-border-bottom-left-radius
webkit-border-top-left-radius
moz-border-radius-topright
moz-border-radius-bottomright
moz-border-radius-bottomleft
moz-border-radius-topleft
position
top
left
bottom
right
border-collapse
border-spacing
list-style-image
list-style-type
min-width
max-width
min-height
max-height
visibility';

  $export['sweaver_ctools_allowed_properties'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_enabled';
  $strongarm->value = 1;

  $export['sweaver_enabled'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_paths';
  $strongarm->value = 'admin*
node/add*
node/*/edit
node/*/panel*
panels/ajax*
user/*/edit
batch*';

  $export['sweaver_paths'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_handle_images';
  $strongarm->value = 'sweaver_plugin_images';

  $export['sweaver_plugin_handle_images'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_images_imagecache';
  $strongarm->value = 0;

  $export['sweaver_plugin_images_imagecache'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_images_tab';
  $strongarm->value = 1;

  $export['sweaver_plugin_images_tab'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin';
  $strongarm->value = TRUE;

  $export['sweaver_plugin_status_sweaver_plugin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_customcss';
  $strongarm->value = 1;

  $export['sweaver_plugin_status_sweaver_plugin_customcss'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_editor';
  $strongarm->value = TRUE;

  $export['sweaver_plugin_status_sweaver_plugin_editor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_images';
  $strongarm->value = TRUE;

  $export['sweaver_plugin_status_sweaver_plugin_images'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_kb';
  $strongarm->value = 1;

  $export['sweaver_plugin_status_sweaver_plugin_kb'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_palettes';
  $strongarm->value = 1;

  $export['sweaver_plugin_status_sweaver_plugin_palettes'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_styles';
  $strongarm->value = TRUE;

  $export['sweaver_plugin_status_sweaver_plugin_styles'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_themeclasses';
  $strongarm->value = 1;

  $export['sweaver_plugin_status_sweaver_plugin_themeclasses'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_themesettings';
  $strongarm->value = 1;

  $export['sweaver_plugin_status_sweaver_plugin_themesettings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_styles_autosave';
  $strongarm->value = '30';

  $export['sweaver_styles_autosave'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_styles_delete_tab';
  $strongarm->value = 0;

  $export['sweaver_styles_delete_tab'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_adaptivetheme_settings';
  $strongarm->value = array(
    'skip_navigation_display' => 'hide',
    'breadcrumb_display' => 'yes',
    'breadcrumb_separator' => '&#187;',
    'breadcrumb_home' => 0,
    'breadcrumb_trailing' => 0,
    'breadcrumb_title' => 0,
    'display_search_form_label' => 0,
    'search_snippet' => 1,
    'search_info_type' => 1,
    'search_info_user' => 1,
    'search_info_date' => 1,
    'search_info_comment' => 1,
    'search_info_upload' => 1,
    'search_info_separator' => '-',
    'primary_links_tree' => 0,
    'secondary_links_tree' => 0,
    'mission_statement_pages' => 'home',
    'taxonomy_settings_enabled' => 0,
    'taxonomy_display_default' => 'only',
    'taxonomy_format_default' => 'vocab',
    'taxonomy_delimiter_default' => ', ',
    'taxonomy_enable_content_type' => '0',
    'submitted_by_settings_enabled' => 0,
    'submitted_by_author_default' => '1',
    'submitted_by_date_default' => '1',
    'submitted_by_enable_content_type' => '0',
    'display_links_settings_enabled' => 0,
    'display_links_default' => 'all',
    'display_links_enable_content_type' => 0,
    'rebuild_registry' => 0,
    'show_theme_info' => 0,
    'cleanup_classes_section' => 1,
    'cleanup_classes_front' => 1,
    'cleanup_classes_user_status' => 1,
    'cleanup_classes_normal_path' => 0,
    'cleanup_classes_node_type' => 1,
    'cleanup_classes_add_edit_delete' => 0,
    'cleanup_classes_language' => 0,
    'cleanup_article_id' => 1,
    'cleanup_article_classes_promote' => 1,
    'cleanup_article_classes_sticky' => 1,
    'cleanup_article_classes_teaser' => 1,
    'cleanup_article_classes_preview' => 0,
    'cleanup_article_classes_type' => 0,
    'cleanup_article_classes_language' => 0,
    'cleanup_comment_anonymous' => 0,
    'cleanup_comment_article_author' => 0,
    'cleanup_comment_by_viewer' => 0,
    'cleanup_comment_new' => 0,
    'cleanup_comment_zebra' => 0,
    'cleanup_comment_wrapper_type' => 0,
    'cleanup_block_block_module_delta' => 1,
    'cleanup_block_classes_module' => 1,
    'cleanup_block_classes_zebra' => 1,
    'cleanup_block_classes_region' => 1,
    'cleanup_block_classes_count' => 0,
    'cleanup_menu_menu_class' => 1,
    'cleanup_menu_leaf_class' => 1,
    'cleanup_menu_first_last_classes' => 1,
    'cleanup_menu_active_classes' => 1,
    'cleanup_menu_title_class' => 1,
    'cleanup_links_type_class' => 1,
    'cleanup_links_active_classes' => 1,
    'cleanup_links_first_last_classes' => 1,
    'cleanup_item_list_zebra' => 0,
    'cleanup_item_list_first_last' => 1,
    'cleanup_views_css_name' => 1,
    'cleanup_views_view_name' => 1,
    'cleanup_views_display_id' => 1,
    'cleanup_views_dom_id' => 0,
    'cleanup_views_unformatted' => 1,
    'cleanup_views_item_list' => 1,
    'cleanup_fields_type' => 1,
    'cleanup_fields_name' => 1,
    'cleanup_fields_zebra' => 1,
    'cleanup_headings_title_class' => 1,
    'cleanup_headings_namespaced_class' => 1,
    'links_add_span_elements' => 0,
    'at_user_menu' => 0,
    'block_edit_links' => 0,
    'at_admin_hide_help' => 0,
    'layout_method' => '0',
    'layout_width' => '960px',
    'layout_sidebar_first_width' => '240',
    'layout_sidebar_last_width' => '240',
    'layout_enable_settings' => 'on',
    'layout_enable_width' => 'on',
    'layout_enable_sidebars' => 'on',
    'layout_enable_method' => 'on',
    'layout_enable_frontpage' => 'on',
    'equal_heights_sidebars' => 0,
    'equal_heights_blocks' => '0',
    'equal_heights_gpanels' => 0,
    'horizontal_login_block' => 1,
    'horizontal_login_block_overlabel' => 0,
    'horizontal_login_block_enable' => 'on',
    'color_schemes' => 'colors-default.css',
    'color_enable_schemes' => 'off',
    'mission' => '',
    'default_logo' => 1,
    'logo_path' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'primary_links' => 1,
    'secondary_links' => 1,
    'toggle_logo' => 0,
    'toggle_favicon' => 1,
    'toggle_name' => 0,
    'toggle_search' => 0,
    'toggle_slogan' => 0,
    'toggle_mission' => 0,
    'toggle_node_user_picture' => '0',
    'toggle_comment_user_picture' => '0',
    'toggle_primary_links' => 0,
    'toggle_secondary_links' => 0,
    'logo_upload' => '',
    'favicon_upload' => '',
    'display_links_kt_bookmark' => 'all',
    'display_links_kt_gallery' => 'all',
    'display_links_kt_link' => 'all',
    'display_links_page' => 'all',
    'display_links_story' => 'all',
    'equalize_leaderboard' => 1,
    'equalize_header' => 1,
    'equalize_secondary-content' => 1,
    'equalize_content-top' => 1,
    'equalize_content-bottom' => 1,
    'equalize_tertiary-content' => 1,
    'equalize_footer' => 1,
    'exported_settings' => 'settings[skip_navigation_display]="hide"
settings[breadcrumb_display]="yes"
settings[breadcrumb_separator]="&#187;"
settings[breadcrumb_home]="0"
settings[breadcrumb_trailing]="0"
settings[breadcrumb_title]="0"
settings[display_search_form_label]="0"
settings[search_snippet]="1"
settings[search_info_type]="1"
settings[search_info_user]="1"
settings[search_info_date]="1"
settings[search_info_comment]="1"
settings[search_info_upload]="1"
settings[search_info_separator]="-"
settings[primary_links_tree]="0"
settings[secondary_links_tree]="0"
settings[mission_statement_pages]="home"
settings[taxonomy_settings_enabled]="0"
settings[taxonomy_display_default]="only"
settings[taxonomy_format_default]="vocab"
settings[taxonomy_delimiter_default]=", "
settings[taxonomy_enable_content_type]="0"
settings[submitted_by_settings_enabled]="0"
settings[submitted_by_author_default]="1"
settings[submitted_by_date_default]="1"
settings[submitted_by_enable_content_type]="0"
settings[display_links_settings_enabled]="1"
settings[display_links_default]="all"
settings[display_links_enable_content_type]="0"
settings[rebuild_registry]="0"
settings[show_theme_info]="0"
settings[cleanup_classes_section]="1"
settings[cleanup_classes_front]="1"
settings[cleanup_classes_user_status]="1"
settings[cleanup_classes_normal_path]="0"
settings[cleanup_classes_node_type]="1"
settings[cleanup_classes_add_edit_delete]="0"
settings[cleanup_classes_language]="0"
settings[cleanup_article_id]="1"
settings[cleanup_article_classes_promote]="1"
settings[cleanup_article_classes_sticky]="1"
settings[cleanup_article_classes_teaser]="1"
settings[cleanup_article_classes_preview]="0"
settings[cleanup_article_classes_type]="0"
settings[cleanup_article_classes_language]="0"
settings[cleanup_comment_anonymous]="0"
settings[cleanup_comment_article_author]="0"
settings[cleanup_comment_by_viewer]="0"
settings[cleanup_comment_new]="0"
settings[cleanup_comment_zebra]="0"
settings[cleanup_comment_wrapper_type]="0"
settings[cleanup_block_block_module_delta]="1"
settings[cleanup_block_classes_module]="1"
settings[cleanup_block_classes_zebra]="1"
settings[cleanup_block_classes_region]="1"
settings[cleanup_block_classes_count]="0"
settings[cleanup_menu_menu_class]="1"
settings[cleanup_menu_leaf_class]="1"
settings[cleanup_menu_first_last_classes]="1"
settings[cleanup_menu_active_classes]="1"
settings[cleanup_menu_title_class]="1"
settings[cleanup_links_type_class]="1"
settings[cleanup_links_active_classes]="1"
settings[cleanup_links_first_last_classes]="1"
settings[cleanup_item_list_zebra]="0"
settings[cleanup_item_list_first_last]="1"
settings[cleanup_views_css_name]="1"
settings[cleanup_views_view_name]="1"
settings[cleanup_views_display_id]="1"
settings[cleanup_views_dom_id]="0"
settings[cleanup_views_unformatted]="1"
settings[cleanup_views_item_list]="1"
settings[cleanup_fields_type]="1"
settings[cleanup_fields_name]="1"
settings[cleanup_fields_zebra]="1"
settings[cleanup_headings_title_class]="1"
settings[cleanup_headings_namespaced_class]="1"
settings[links_add_span_elements]="0"
settings[at_user_menu]="0"
settings[block_edit_links]="1"
settings[at_admin_hide_help]="0"
settings[layout_method]="0"
settings[layout_width]="960px"
settings[layout_sidebar_first_width]="240"
settings[layout_sidebar_last_width]="240"
settings[layout_enable_settings]="on"
settings[layout_enable_width]="on"
settings[layout_enable_sidebars]="on"
settings[layout_enable_method]="on"
settings[layout_enable_frontpage]="on"
settings[equal_heights_sidebars]="0"
settings[equal_heights_blocks]="0"
settings[equal_heights_gpanels]="0"
settings[horizontal_login_block]="1"
settings[horizontal_login_block_overlabel]="0"
settings[horizontal_login_block_enable]="on"
settings[color_schemes]="colors-default.css"
settings[color_enable_schemes]="off"
',
  );

  $export['theme_adaptivetheme_settings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'adaptivetheme';

  $export['theme_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_node_info_page' => FALSE,
  );

  $export['theme_settings'] = $strongarm;
  return $export;
}
