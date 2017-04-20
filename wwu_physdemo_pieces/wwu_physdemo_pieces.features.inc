<?php
/**
 * @file
 * wwu_physdemo_pieces.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wwu_physdemo_pieces_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function wwu_physdemo_pieces_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wwu_physdemo_pieces_node_info() {
  $items = array(
    'demonstration' => array(
      'name' => t('Demonstration'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Demonstration Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
