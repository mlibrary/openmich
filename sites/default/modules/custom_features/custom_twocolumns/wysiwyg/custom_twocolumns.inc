<?php

/**
 * @file
 *
 * Provide two WYSIWYG toolbar buttons to insert left- and right- columns
 *
 */

/**
 * Implements hook_wysiwyg_plugin().
 */
function custom_twocolumns_custom_twocolumns_plugin() {
  $path = drupal_get_path('module', 'custom_twocolumns') . '/wysiwyg/custom_twocolumns';
  $base = array(
    'icon path' => $path . '/images',
    'js path' => $path,
    'js file' => 'custom_twocolumns.js',
    'css path' => $path,
    'css file' => 'custom_twocolumns.css',
  );

  $plugins['custom_twocolumns'] = $base + array(
    'title' => t('Two column box'),
    'icon file' => 'custom_twocolumns.gif',
    'icon title' => 'Two column box',
    'settings' => array(
      'template' => '<div class="twocolumns-wrapper clearfix"><div class="twocolumns col-left">add column 1 text here</div><div class="twocolumns col-right">add column 2 text here</div><div class="clear-col">&nbsp;</div></div>',
    ),
  );

  return $plugins;
}
