<?php
/**
 * @file
 * feature_drupal_my_defaults.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_drupal_my_defaults_user_default_permissions() {
  $permissions = array();

  // Exported permission: access site-wide contact form
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'contact',
  );

  return $permissions;
}
