<?php
/**
 * @file
 * socketlabs_feature.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function socketlabs_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function socketlabs_feature_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function socketlabs_feature_node_info() {
  $items = array(
    'failed_mail_node' => array(
      'name' => t('failed mail node'),
      'base' => 'node_content',
      'description' => t('Node for results from call to SocketLabs function - messagesFailed '),
      'has_title' => '1',
      'title_label' => t('Report Type'),
      'help' => '',
    ),
    'feedback_loop_report' => array(
      'name' => t('Feedback Loop Report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Report Type'),
      'help' => '',
    ),
    'messages_open_click_node' => array(
      'name' => t('messages open click node'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Report Type'),
      'help' => '',
    ),
    'messages_processed_node' => array(
      'name' => t('messages processed node'),
      'base' => 'node_content',
      'description' => t('Node for holding info from SocketLabs function - messagesProcessed'),
      'has_title' => '1',
      'title_label' => t('Report Type'),
      'help' => '',
    ),
    'messages_queued_node' => array(
      'name' => t('messages queued node'),
      'base' => 'node_content',
      'description' => t('Node for holding info from SocketLabs function - messagesQueued'),
      'has_title' => '1',
      'title_label' => t('Report Type'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'xml_failed_feed' => array(
      'name' => t('xml failed feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'xml_feedback_loop_report' => array(
      'name' => t('xml feedback loop feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'xml_messages_processed' => array(
      'name' => t('xml messages processed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'xml_messages_queued' => array(
      'name' => t('xml messages queued'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'xml_open_click' => array(
      'name' => t('xml open click'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
