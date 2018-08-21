<?php

/**
 * @file
 *   Views hook to provide or alter default views.
 */

/**
 * Implementation of hook_views_default_views().
 */
function custom_views_default_views_alter(&$views) {
  // Find all the .view files in the views subdirectory that end in .view.
  $files = file_scan_directory(drupal_get_path('module', 'custom') . '/views', '/.view/');
  foreach ($files as $path => $file) {
    require $path;
    if (isset($view)) {
      $views[$view->name] = $view;
    }
  }
}
