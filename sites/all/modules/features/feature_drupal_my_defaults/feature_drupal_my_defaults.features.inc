<?php
/**
 * @file
 * feature_drupal_my_defaults.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_drupal_my_defaults_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_drupal_my_defaults_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function feature_drupal_my_defaults_fontyourface_features_default_font() {
  return array(
    'Open Sans Condensed 300 (latin-ext)' => array(
      'name' => 'Open Sans Condensed 300 (latin-ext)',
      'enabled' => '1',
      'url' => 'http://www.google.com/webfonts/family?family=Open Sans Condensed&subset=latin-ext#300',
      'provider' => 'google_fonts_api',
      'css_selector' => '#block-block-1 h3',
      'css_family' => 'Open Sans Condensed',
      'css_style' => 'normal',
      'css_weight' => '300',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:23:"Open Sans Condensed:300";s:6:"subset";s:9:"latin-ext";}',
    ),
    'Open Sans Condensed 300italic (latin-ext)' => array(
      'name' => 'Open Sans Condensed 300italic (latin-ext)',
      'enabled' => '1',
      'url' => 'http://www.google.com/webfonts/family?family=Open Sans Condensed&subset=latin-ext#300italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Open Sans Condensed',
      'css_style' => 'italic',
      'css_weight' => '300',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:29:"Open Sans Condensed:300italic";s:6:"subset";s:9:"latin-ext";}',
    ),
    'Open Sans Condensed 700 (latin-ext)' => array(
      'name' => 'Open Sans Condensed 700 (latin-ext)',
      'enabled' => '1',
      'url' => 'http://www.google.com/webfonts/family?family=Open Sans Condensed&subset=latin-ext#700',
      'provider' => 'google_fonts_api',
      'css_selector' => 'h1, h2, h3, h4, h5, h6, #block-system-main-menu',
      'css_family' => 'Open Sans Condensed',
      'css_style' => 'normal',
      'css_weight' => '700',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:23:"Open Sans Condensed:700";s:6:"subset";s:9:"latin-ext";}',
    ),
  );
}
