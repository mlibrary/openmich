<?php
/**
 * @file
 * Alterations for after settings.php is loaded.
 *
 * Portions of this file may be copyright by some authors of Drupal.
 *
 * Copyright (c) 2015, Regents of the University of Michigan.
 * All rights reserved. See LICENSE.txt for details.
 *
 */

/*
 * Include this at the end of settings.php:
 *
 * if (file_exists(DRUPAL_ROOT . '/includes/settings-primary_primary.inc')) {
 *   require_once(DRUPAL_ROOT . '/includes/settings-primary_primary.inc');
 * }
 */

/*
 * Override the default locking code.
 */
$conf['lock_inc'] = 'includes/lock-primary_primary.inc';

/*
 * Add new cache backends
 *  -> FilterCache filters out some cids.
 *  -> NoCache does not write data to the cache.
 */
$conf['cache_backends'][] = 'includes/cache-primary_primary.inc';
$conf['cache_class_cache'] = 'FilterCache';
$conf['cache_class_cache_views'] = 'NoCache';
$conf['cache_class_cache_views_data'] = 'NoCache';
$conf['cache_class_cache_bootstrap'] = 'FilterCache';

/*
 * The context block rebuild process was causing a lot of database churn.
 */
$conf['context_block_rebuild_needed'] = FALSE;

/*
 * The views cache was causing a lot of database churn.
 *  -> This may be redundant with using NoCache, but I'd rather be safe here.
 */
$conf['views_skip_cache'] = TRUE;

/*
 * Change your database drivers to 'primary_primary'
 *
 *  update.php and drush have a bug in the current versions
 *  that don't recognize the subclassed mysql driver.
 *
 *  https://www.drupal.org/node/1906144
 */
foreach ($databases as $__primary => $__definition) {
  foreach ($__definition as $__secondary => $__info) {
    if (isset($__info['driver']) && $__info['driver'] == 'mysql') {
      $databases[$__primary][$__secondary]['driver'] = 'primary_primary';
    }
  }
}

// This runs in the global scope, so clean up temporary variables.
unset($__primary);
unset($__secondary);
unset($__definition);
unset($__info);
