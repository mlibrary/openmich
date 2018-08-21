<?php

/**
 * @file
 *
 * Provide two WYSIWYG toolbar buttons to insert left- and right- floated images
 * with captions.
 */

/**
 * Implements hook_wysiwyg_plugin().
 */
function custom_imagebox_custom_imagebox_plugin() {
  // Both plugins use the same code and CSS.
  $path = drupal_get_path('module', 'custom_imagebox') . '/wysiwyg/custom_imagebox';
  $base = array(
    'icon path' => $path . '/images',
    'js path' => $path,
    'js file' => 'custom_imagebox.js',
    'css path' => $path,
    'css file' => 'custom_imagebox.css',
  );

  $plugins['custom_imagebox_left'] = $base + array(
    'title' => t('Image box, left'),
    'icon file' => 'custom_imagebox-left.gif',
    'icon title' => 'Image box, left',
    'settings' => array(
      'template' => '<div class="imagebox-wrapper float-left"><div class="imagebox-image">add image here</div><div class="imagebox-caption">add caption here</div></div>',
    ),
  );
  $plugins['custom_imagebox_right'] = $base + array(
    'title' => t('Image box, right'),
    'icon file' => 'custom_imagebox-right.gif',
    'icon title' => 'Image box, right',
    'settings' => array(
      'template' => '<div class="imagebox-wrapper float-right"><div class="imagebox-image">add image here</div><div class="imagebox-caption">add caption here</div></div>',
    ),
  );
  
  $plugins['custom_imagebox_left_small'] = $base + array(
    'title' => t('Image box, left-small'),
    'icon file' => 'custom_imagebox-left.gif',
    'icon title' => 'Image box, left-small',
    'settings' => array(
      'template' => '<div class="imagebox-wrapper_small float-left"><div class="imagebox-image">add image here</div><div class="imagebox-caption">add caption here</div></div>',
    ),
  );
  $plugins['custom_imagebox_right_small'] = $base + array(
    'title' => t('Image box, right-small'),
    'icon file' => 'custom_imagebox-right.gif',
    'icon title' => 'Image box, right-small',
    'settings' => array(
      'template' => '<div class="imagebox-wrapper_small float-right"><div class="imagebox-image">add image here</div><div class="imagebox-caption">add caption here</div></div>',
    ),
  );
  $plugins['custom_imagebox_full'] = $base + array(
    'title' => t('Image box, full-100'),
    'icon file' => 'custom_imagebox-full.gif',
    'icon title' => 'Image box, full-100',
    'settings' => array(
      'template' => '<div class="imagebox-wrapper_full"><div class="imagebox-image">add image here</div><div class="imagebox-caption">add caption here</div></div>',
    ),
  );
  

  return $plugins;
}
