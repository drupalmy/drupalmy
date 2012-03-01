<?php
/**
 * @file
 * feature_drupal_my_showcase.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_drupal_my_showcase_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_drupal_my_showcase_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_drupal_my_showcase_node_info() {
  $items = array(
    'showcase_site' => array(
      'name' => t('Showcase site'),
      'base' => 'node_content',
      'description' => t('A site to be showcased.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
