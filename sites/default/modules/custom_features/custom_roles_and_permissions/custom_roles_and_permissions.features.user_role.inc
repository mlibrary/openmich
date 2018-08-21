<?php
/**
 * @file
 * custom_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function custom_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: site-admin.
  $roles['site-admin'] = array(
    'name' => 'site-admin',
    'weight' => 4,
  );

  return $roles;
}
