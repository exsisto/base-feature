<?php
/**
 * @file
 * base_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function base_feature_user_default_roles() {
  $roles = array();

  // Exported role: Content manager.
  $roles['Content manager'] = array(
    'name' => 'Content manager',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
