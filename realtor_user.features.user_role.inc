<?php
/**
 * @file
 * realtor_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function realtor_user_user_default_roles() {
  $roles = array();

  // Exported role: Assistant.
  $roles['Assistant'] = array(
    'name' => 'Assistant',
    'weight' => '5',
  );

  // Exported role: Broker.
  $roles['Broker'] = array(
    'name' => 'Broker',
    'weight' => '3',
  );

  // Exported role: Owner.
  $roles['Owner'] = array(
    'name' => 'Owner',
    'weight' => '7',
  );

  // Exported role: Principal Broker.
  $roles['Principal Broker'] = array(
    'name' => 'Principal Broker',
    'weight' => '4',
  );

  return $roles;
}
