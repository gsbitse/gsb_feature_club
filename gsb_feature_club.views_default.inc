<?php
/**
 * @file
 * gsb_feature_club.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_club_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_clubs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_club_index';
  $view->human_name = 'Search Clubs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search club';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no clubs found';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Description */
  $handler->display->display_options['fields']['field_club_description']['id'] = 'field_club_description';
  $handler->display->display_options['fields']['field_club_description']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['field_club_description']['field'] = 'field_club_description';
  $handler->display->display_options['fields']['field_club_description']['label'] = '';
  $handler->display->display_options['fields']['field_club_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_club_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_club_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Indexed Node: Club Category */
  $handler->display->display_options['fields']['field_club_category']['id'] = 'field_club_category';
  $handler->display->display_options['fields']['field_club_category']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['field_club_category']['field'] = 'field_club_category';
  $handler->display->display_options['fields']['field_club_category']['label'] = '';
  $handler->display->display_options['fields']['field_club_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_club_category']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_club_category']['view_mode'] = 'full';
  /* Field: Indexed Node: Club Image */
  $handler->display->display_options['fields']['field_club_image']['id'] = 'field_club_image';
  $handler->display->display_options['fields']['field_club_image']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['fields']['field_club_image']['field'] = 'field_club_image';
  $handler->display->display_options['fields']['field_club_image']['label'] = '';
  $handler->display->display_options['fields']['field_club_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_club_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_club_image']['type'] = 'fancybox';
  $handler->display->display_options['fields']['field_club_image']['settings'] = array(
    'fancybox_image_style_content' => 'gsb_image_small',
    'fancybox_image_style_fancybox' => 'large',
    'fancybox_gallery' => 'post',
    'fancybox_gallery_custom' => '',
    'fancybox_caption' => 'auto',
    'fancybox_caption_custom' => '',
  );
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_club_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'club_search');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['search_clubs'] = $view;

  return $export;
}
