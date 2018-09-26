<?php
/**
 * @file
 * custom_map.features.inc
 */

/**
 * Implements hook_views_api().
 */
function custom_map_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function custom_map_node_info() {
  $items = array(
    'office_locations' => array(
      'name' => t('Office Locations'),
      'base' => 'node_content',
      'description' => t('A content type using geofield, geophp, ctools for showing location of offices'),
      'has_title' => '1',
      'title_label' => t('Office Location'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
