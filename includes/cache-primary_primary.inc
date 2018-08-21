<?php
/**
 * @file
 * Provides local cache drivers to prevent caching for specific cases.
 *
 * Portions of this file may be copyright by some authors of Drupal.
 *
 * Copyright (c) 2015, Regents of the University of Michigan.
 * All rights reserved. See LICENSE.txt for details.
 *
 */

/**
 * Defines a stub cache implementation to skip caching for some tables.
 *
 * @SuppressWarnings("unused")
 */
if (!class_exists('NoCache', FALSE)) {
  class NoCache implements DrupalCacheInterface {

    /**
     * Implements NoCache::get().
     */
    public function get($cid) {
      return FALSE;
    }

    /**
     * Implements NoCache::getMultiple().
     */
    public function getMultiple(&$cids) {
      return array();
    }

    /**
     * Implements NoCache::set().
     */
    public function set($cid, $data, $expire = CACHE_PERMANENT) {}

    /**
     * Implements NoCache::clear().
     */
    public function clear($cid = NULL, $wildcard = FALSE) {}

    /**
     * Implements NoCache::isEmpty().
     */
    public function isEmpty() {
      return TRUE;
    }
  }
}

if (!class_exists('FilterCache', FALSE)) {
  class FilterCache extends DrupalDatabaseCache implements DrupalCacheInterface {

    /**
     * Overrides DrupalDatabaseCache::set().
     */
    public function set($cid, $data, $expire = CACHE_PERMANENT) {
      global $conf;
      if (!isset($conf['cache_filter']) || !in_array($cid, $conf['cache_filter'])) {
        return parent::set($cid, $data, $expire);
      }
    }
  }
}
