<?php

/**
 * @file
 * Installation code for MySQL embedded database engine.
 *
 * Portions of this file may be copyright by some authors of Drupal.
 *
 * Copyright (c) 2015, Regents of the University of Michigan.
 * All rights reserved. See LICENSE.txt for details.
 *
 */

include_once DRUPAL_ROOT . '/includes/database/mysql/install.inc';

/**
 * Specifies installation tasks for MySQL and equivalent databases.
 */
class DatabaseTasks_primary_primary extends DatabaseTasks_mysql {}
