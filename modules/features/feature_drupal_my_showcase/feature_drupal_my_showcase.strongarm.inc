<?php
/**
 * @file
 * feature_drupal_my_showcase.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_drupal_my_showcase_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_showcase_site';
  $strongarm->value = 0;
  $export['comment_anonymous_showcase_site'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_showcase_site';
  $strongarm->value = 1;
  $export['comment_default_mode_showcase_site'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_showcase_site';
  $strongarm->value = '50';
  $export['comment_default_per_page_showcase_site'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_showcase_site';
  $strongarm->value = 1;
  $export['comment_form_location_showcase_site'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_showcase_site';
  $strongarm->value = '1';
  $export['comment_preview_showcase_site'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_showcase_site';
  $strongarm->value = '0';
  $export['comment_showcase_site'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_showcase_site';
  $strongarm->value = 1;
  $export['comment_subject_field_showcase_site'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_showcase_site';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_showcase_site'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_showcase_site';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_showcase_site'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_showcase_site';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_showcase_site'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_showcase_site';
  $strongarm->value = '1';
  $export['node_preview_showcase_site'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_showcase_site';
  $strongarm->value = 0;
  $export['node_submitted_showcase_site'] = $strongarm;

  return $export;
}
