<?php
/**
 * @file
 * feature_drupal_my_defaults.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function feature_drupal_my_defaults_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Welcome block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'welcome_block';
  $fe_block_boxes->body = '<h3>Drupal Malaysia is a community of developers teaching and supporting other Drupal developers through collaborative projects, online tutorials on this website and monthly meetups</h3>
<h3><a href="/">Find out more about Drupal and Drupal Malaysia »</a></h3>';

  $export['welcome_block'] = $fe_block_boxes;

  return $export;
}
