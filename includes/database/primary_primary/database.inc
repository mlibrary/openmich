<?php

/**
 * @file
 * Database interface code for MySQL database servers.
 *
 * Portions of this file may be copyright by some authors of Drupal.
 *
 * Copyright (c) 2015, Regents of the University of Michigan.
 * All rights reserved. See LICENSE.txt for details.
 *
 */

/**
 * @addtogroup database
 * @{
 */

include_once DRUPAL_ROOT . '/includes/database/mysql/database.inc';

class DatabaseConnection_primary_primary extends DatabaseConnection_mysql {

  /**
   * Gets the driver-specific override class if any for the specified class.
   *
   * @param string $class
   *   The class for which we want the potentially driver-specific class.
   * @param array $files
   *   The name of the files in which the driver-specific class can be.
   * @param $use_autoload
   *   If TRUE, attempt to load classes using PHP's autoload capability
   *   as well as the manual approach here.
   * @return string
   *   The name of the class that should be used for this driver.
   */
  public function getDriverClass($class, array $files = array(), $use_autoload = FALSE) {
    if (empty($this->driverClasses[$class])) {
      // Views seems to take issue with ->driver() returning 'primary_primary'
      $driver = 'primary_primary';
      $this->driverClasses[$class] = $class . '_' . $driver;
      Database::loadDriverFile($driver, $files);
      if (!class_exists($this->driverClasses[$class], $use_autoload)) {
        $this->driverClasses[$class] = $class;
      }
    }
    return $this->driverClasses[$class];
  }

  /**
   * Prepares and returns an REPLACE query object.
   *
   * @param $options
   *   An array of options on the query.
   *
   * @return ReplaceQuery
   *   A new ReplaceQuery object.
   *
   * @see ReplaceQuery
   */
  public function replace($table, array $options = array()) {
    $class = $this->getDriverClass('ReplaceQuery', array('query.inc'));
    return new $class($this, $table, $options);
  }

  /**
   * Prepares and returns an UPSERT query object.
   *
   * @param $options
   *   An array of options on the query.
   *
   * @return UpsertQuery
   *   A new UpsertQuery object.
   *
   * @see UpsertQuery
   */
  public function upsert($table, array $options = array()) {
    $class = $this->getDriverClass('UpsertQuery', array('query.inc'));
    return new $class($this, $table, $options);
  }
}

/**
 * Returns a new ReplaceQuery object for the active database.
 *
 * @param $table
 *   The table in which to insert or replace.
 * @param $options
 *   An array of options to control how the query operates.
 *
 * @return ReplaceQuery
 *   A new ReplaceQuery object for this connection.
 */
if (!function_exists('db_replace')) {
  function db_replace($table, array $options = array()) {
    if (empty($options['target']) || $options['target'] == 'replica') {
      $options['target'] = 'default';
    }
    return Database::getConnection($options['target'])->replace($table, $options);
  }
}

/**
 * Returns a new UpsertQuery object for the active database.
 *
 * @param $table
 *   The table in which to insert or replace.
 * @param $options
 *   An array of options to control how the query operates.
 *
 * @return UpsertQuery
 *   A new UpsertQuery object for this connection.
 */
if (!function_exists('db_upsert')) {
  function db_upsert($table, array $options = array()) {
    if (empty($options['target']) || $options['target'] == 'replica') {
      $options['target'] = 'default';
    }
    return Database::getConnection($options['target'])->upsert($table, $options);
  }
}

/**
 * @} End of "addtogroup database".
 */
