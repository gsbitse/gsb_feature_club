<?php
/**
 * @file
 * gsb_feature_club.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_club_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_club_node_info() {
  $items = array(
    'gsb_club' => array(
      'name' => t('Club'),
      'base' => 'node_content',
      'description' => t('The GSB Public Club content type is used for clubs on the GSB Public web site.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
