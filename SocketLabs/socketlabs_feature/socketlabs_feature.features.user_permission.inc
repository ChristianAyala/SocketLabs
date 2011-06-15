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

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access dashboard
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access overlay
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access site in maintenance mode
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer feeds
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: administer feeds_tamper
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer image styles
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer modules
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer themes
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: bypass node access
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: clear failed_mail_importer feeds
  $permissions['clear failed_mail_importer feeds'] = array(
    'name' => 'clear failed_mail_importer feeds',
    'roles' => array(),
  );

  // Exported permission: clear feed feeds
  $permissions['clear feed feeds'] = array(
    'name' => 'clear feed feeds',
    'roles' => array(),
  );

  // Exported permission: clear feedback_loop_importer feeds
  $permissions['clear feedback_loop_importer feeds'] = array(
    'name' => 'clear feedback_loop_importer feeds',
    'roles' => array(),
  );

  // Exported permission: clear messages_open_click_importer feeds
  $permissions['clear messages_open_click_importer feeds'] = array(
    'name' => 'clear messages_open_click_importer feeds',
    'roles' => array(),
  );

  // Exported permission: clear messages_processed_importer feeds
  $permissions['clear messages_processed_importer feeds'] = array(
    'name' => 'clear messages_processed_importer feeds',
    'roles' => array(),
  );

  // Exported permission: clear messages_queued_importer feeds
  $permissions['clear messages_queued_importer feeds'] = array(
    'name' => 'clear messages_queued_importer feeds',
    'roles' => array(),
  );

  // Exported permission: clear node feeds
  $permissions['clear node feeds'] = array(
    'name' => 'clear node feeds',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear user feeds
  $permissions['clear user feeds'] = array(
    'name' => 'clear user feeds',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: create failed_mail_node content
  $permissions['create failed_mail_node content'] = array(
    'name' => 'create failed_mail_node content',
    'roles' => array(),
  );

  // Exported permission: create feedback_loop_report content
  $permissions['create feedback_loop_report content'] = array(
    'name' => 'create feedback_loop_report content',
    'roles' => array(),
  );

  // Exported permission: create messages_open_click_node content
  $permissions['create messages_open_click_node content'] = array(
    'name' => 'create messages_open_click_node content',
    'roles' => array(),
  );

  // Exported permission: create messages_processed_node content
  $permissions['create messages_processed_node content'] = array(
    'name' => 'create messages_processed_node content',
    'roles' => array(),
  );

  // Exported permission: create messages_queued_node content
  $permissions['create messages_queued_node content'] = array(
    'name' => 'create messages_queued_node content',
    'roles' => array(),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
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

  // Exported permission: delete any failed_mail_node content
  $permissions['delete any failed_mail_node content'] = array(
    'name' => 'delete any failed_mail_node content',
    'roles' => array(),
  );

  // Exported permission: delete any feedback_loop_report content
  $permissions['delete any feedback_loop_report content'] = array(
    'name' => 'delete any feedback_loop_report content',
    'roles' => array(),
  );

  // Exported permission: delete any messages_open_click_node content
  $permissions['delete any messages_open_click_node content'] = array(
    'name' => 'delete any messages_open_click_node content',
    'roles' => array(),
  );

  // Exported permission: delete any messages_processed_node content
  $permissions['delete any messages_processed_node content'] = array(
    'name' => 'delete any messages_processed_node content',
    'roles' => array(),
  );

  // Exported permission: delete any messages_queued_node content
  $permissions['delete any messages_queued_node content'] = array(
    'name' => 'delete any messages_queued_node content',
    'roles' => array(),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any xml_failed_feed content
  $permissions['delete any xml_failed_feed content'] = array(
    'name' => 'delete any xml_failed_feed content',
    'roles' => array(),
  );

  // Exported permission: delete any xml_feedback_loop_report content
  $permissions['delete any xml_feedback_loop_report content'] = array(
    'name' => 'delete any xml_feedback_loop_report content',
    'roles' => array(),
  );

  // Exported permission: delete any xml_messages_processed content
  $permissions['delete any xml_messages_processed content'] = array(
    'name' => 'delete any xml_messages_processed content',
    'roles' => array(),
  );

  // Exported permission: delete any xml_messages_queued content
  $permissions['delete any xml_messages_queued content'] = array(
    'name' => 'delete any xml_messages_queued content',
    'roles' => array(),
  );

  // Exported permission: delete any xml_open_click content
  $permissions['delete any xml_open_click content'] = array(
    'name' => 'delete any xml_open_click content',
    'roles' => array(),
  );

  // Exported permission: delete own failed_mail_node content
  $permissions['delete own failed_mail_node content'] = array(
    'name' => 'delete own failed_mail_node content',
    'roles' => array(),
  );

  // Exported permission: delete own feedback_loop_report content
  $permissions['delete own feedback_loop_report content'] = array(
    'name' => 'delete own feedback_loop_report content',
    'roles' => array(),
  );

  // Exported permission: delete own messages_open_click_node content
  $permissions['delete own messages_open_click_node content'] = array(
    'name' => 'delete own messages_open_click_node content',
    'roles' => array(),
  );

  // Exported permission: delete own messages_processed_node content
  $permissions['delete own messages_processed_node content'] = array(
    'name' => 'delete own messages_processed_node content',
    'roles' => array(),
  );

  // Exported permission: delete own messages_queued_node content
  $permissions['delete own messages_queued_node content'] = array(
    'name' => 'delete own messages_queued_node content',
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

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any failed_mail_node content
  $permissions['edit any failed_mail_node content'] = array(
    'name' => 'edit any failed_mail_node content',
    'roles' => array(),
  );

  // Exported permission: edit any feedback_loop_report content
  $permissions['edit any feedback_loop_report content'] = array(
    'name' => 'edit any feedback_loop_report content',
    'roles' => array(),
  );

  // Exported permission: edit any messages_open_click_node content
  $permissions['edit any messages_open_click_node content'] = array(
    'name' => 'edit any messages_open_click_node content',
    'roles' => array(),
  );

  // Exported permission: edit any messages_processed_node content
  $permissions['edit any messages_processed_node content'] = array(
    'name' => 'edit any messages_processed_node content',
    'roles' => array(),
  );

  // Exported permission: edit any messages_queued_node content
  $permissions['edit any messages_queued_node content'] = array(
    'name' => 'edit any messages_queued_node content',
    'roles' => array(),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any xml_failed_feed content
  $permissions['edit any xml_failed_feed content'] = array(
    'name' => 'edit any xml_failed_feed content',
    'roles' => array(),
  );

  // Exported permission: edit any xml_feedback_loop_report content
  $permissions['edit any xml_feedback_loop_report content'] = array(
    'name' => 'edit any xml_feedback_loop_report content',
    'roles' => array(),
  );

  // Exported permission: edit any xml_messages_processed content
  $permissions['edit any xml_messages_processed content'] = array(
    'name' => 'edit any xml_messages_processed content',
    'roles' => array(),
  );

  // Exported permission: edit any xml_messages_queued content
  $permissions['edit any xml_messages_queued content'] = array(
    'name' => 'edit any xml_messages_queued content',
    'roles' => array(),
  );

  // Exported permission: edit any xml_open_click content
  $permissions['edit any xml_open_click content'] = array(
    'name' => 'edit any xml_open_click content',
    'roles' => array(),
  );

  // Exported permission: edit own failed_mail_node content
  $permissions['edit own failed_mail_node content'] = array(
    'name' => 'edit own failed_mail_node content',
    'roles' => array(),
  );

  // Exported permission: edit own feedback_loop_report content
  $permissions['edit own feedback_loop_report content'] = array(
    'name' => 'edit own feedback_loop_report content',
    'roles' => array(),
  );

  // Exported permission: edit own messages_open_click_node content
  $permissions['edit own messages_open_click_node content'] = array(
    'name' => 'edit own messages_open_click_node content',
    'roles' => array(),
  );

  // Exported permission: edit own messages_processed_node content
  $permissions['edit own messages_processed_node content'] = array(
    'name' => 'edit own messages_processed_node content',
    'roles' => array(),
  );

  // Exported permission: edit own messages_queued_node content
  $permissions['edit own messages_queued_node content'] = array(
    'name' => 'edit own messages_queued_node content',
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

  // Exported permission: edit own xml_failed_feed content
  $permissions['edit own xml_failed_feed content'] = array(
    'name' => 'edit own xml_failed_feed content',
    'roles' => array(),
  );

  // Exported permission: edit own xml_feedback_loop_report content
  $permissions['edit own xml_feedback_loop_report content'] = array(
    'name' => 'edit own xml_feedback_loop_report content',
    'roles' => array(),
  );

  // Exported permission: edit own xml_messages_processed content
  $permissions['edit own xml_messages_processed content'] = array(
    'name' => 'edit own xml_messages_processed content',
    'roles' => array(),
  );

  // Exported permission: edit own xml_messages_queued content
  $permissions['edit own xml_messages_queued content'] = array(
    'name' => 'edit own xml_messages_queued content',
    'roles' => array(),
  );

  // Exported permission: edit own xml_open_click content
  $permissions['edit own xml_open_click content'] = array(
    'name' => 'edit own xml_open_click content',
    'roles' => array(),
  );

  // Exported permission: import failed_mail_importer feeds
  $permissions['import failed_mail_importer feeds'] = array(
    'name' => 'import failed_mail_importer feeds',
    'roles' => array(),
  );

  // Exported permission: import feed feeds
  $permissions['import feed feeds'] = array(
    'name' => 'import feed feeds',
    'roles' => array(),
  );

  // Exported permission: import feedback_loop_importer feeds
  $permissions['import feedback_loop_importer feeds'] = array(
    'name' => 'import feedback_loop_importer feeds',
    'roles' => array(),
  );

  // Exported permission: import messages_open_click_importer feeds
  $permissions['import messages_open_click_importer feeds'] = array(
    'name' => 'import messages_open_click_importer feeds',
    'roles' => array(),
  );

  // Exported permission: import messages_processed_importer feeds
  $permissions['import messages_processed_importer feeds'] = array(
    'name' => 'import messages_processed_importer feeds',
    'roles' => array(),
  );

  // Exported permission: import messages_queued_importer feeds
  $permissions['import messages_queued_importer feeds'] = array(
    'name' => 'import messages_queued_importer feeds',
    'roles' => array(),
  );

  // Exported permission: import node feeds
  $permissions['import node feeds'] = array(
    'name' => 'import node feeds',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import user feeds
  $permissions['import user feeds'] = array(
    'name' => 'import user feeds',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: use text format filtered_html
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use views exporter
  $permissions['use views exporter'] = array(
    'name' => 'use views exporter',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views_export',
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
