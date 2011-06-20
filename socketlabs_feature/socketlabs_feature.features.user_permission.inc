<?php
/**
 * @file
 * socketlabs_feature.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function socketlabs_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create xml_failed_feed content
  $permissions['create xml_failed_feed content'] = array(
    'name' => 'create xml_failed_feed content',
    'roles' => array(),
  );

  // Exported permission: create xml_feedback_loop_report content
  $permissions['create xml_feedback_loop_report content'] = array(
    'name' => 'create xml_feedback_loop_report content',
    'roles' => array(),
  );

  // Exported permission: create xml_messages_processed content
  $permissions['create xml_messages_processed content'] = array(
    'name' => 'create xml_messages_processed content',
    'roles' => array(),
  );

  // Exported permission: create xml_messages_queued content
  $permissions['create xml_messages_queued content'] = array(
    'name' => 'create xml_messages_queued content',
    'roles' => array(),
  );

  // Exported permission: create xml_open_click content
  $permissions['create xml_open_click content'] = array(
    'name' => 'create xml_open_click content',
    'roles' => array(),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own xml_failed_feed content
  $permissions['delete own xml_failed_feed content'] = array(
    'name' => 'delete own xml_failed_feed content',
    'roles' => array(),
  );

  // Exported permission: delete own xml_feedback_loop_report content
  $permissions['delete own xml_feedback_loop_report content'] = array(
    'name' => 'delete own xml_feedback_loop_report content',
    'roles' => array(),
  );

  // Exported permission: delete own xml_messages_processed content
  $permissions['delete own xml_messages_processed content'] = array(
    'name' => 'delete own xml_messages_processed content',
    'roles' => array(),
  );

  // Exported permission: delete own xml_messages_queued content
  $permissions['delete own xml_messages_queued content'] = array(
    'name' => 'delete own xml_messages_queued content',
    'roles' => array(),
  );

  // Exported permission: delete own xml_open_click content
  $permissions['delete own xml_open_click content'] = array(
    'name' => 'delete own xml_open_click content',
    'roles' => array(),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
