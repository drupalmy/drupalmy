<?php

/**
 * Implements hook_skinr_skin_PLUGIN_info().
 */
function drupalmy_skinr_skin_styles_info() {
  $skins['drupalmy_block_style'] = array(
    'title' => t('Variation'),
    'type' => 'select',
    'default status' => 1,
    'options' => array(
      'block_style_1' => array('title' => t('Highlight'), 'class' => array('block-highlight')),
    ),
  );
  return $skins;
}