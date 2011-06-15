<?php
/**
 * @file
 * socketlabs_feature.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function socketlabs_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:node/113
  $menu_links['main-menu:node/113'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/113',
    'router_path' => 'node/%',
    'link_title' => 'SocketLabs Codes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:socketlabs/failed_mail
  $menu_links['main-menu:socketlabs/failed_mail'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'socketlabs/failed_mail',
    'router_path' => 'socketlabs/failed_mail',
    'link_title' => 'Failed Mail',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:socketlabs/feedback_loop
  $menu_links['main-menu:socketlabs/feedback_loop'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'socketlabs/feedback_loop',
    'router_path' => 'socketlabs/feedback_loop',
    'link_title' => 'Feedback Loop Mail',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:socketlabs/openclick_messages
  $menu_links['main-menu:socketlabs/openclick_messages'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'socketlabs/openclick_messages',
    'router_path' => 'socketlabs/openclick_messages',
    'link_title' => 'Open/Click Mail',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:socketlabs/processed_messages
  $menu_links['main-menu:socketlabs/processed_messages'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'socketlabs/processed_messages',
    'router_path' => 'socketlabs/processed_messages',
    'link_title' => 'Processed Messages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:socketlabs/queued_messages
  $menu_links['main-menu:socketlabs/queued_messages'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'socketlabs/queued_messages',
    'router_path' => 'socketlabs/queued_messages',
    'link_title' => 'Queued Messages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: navigation:node/add/failed-mail-node
  $menu_links['navigation:node/add/failed-mail-node'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/failed-mail-node',
    'router_path' => 'node/add/failed-mail-node',
    'link_title' => 'failed mail node',
    'options' => array(
      'attributes' => array(
        'title' => 'Node for results from call to SocketLabs function - messagesFailed ',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/feedback-loop-report
  $menu_links['navigation:node/add/feedback-loop-report'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/feedback-loop-report',
    'router_path' => 'node/add/feedback-loop-report',
    'link_title' => 'Feedback Loop Report',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/messages-open-click-node
  $menu_links['navigation:node/add/messages-open-click-node'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/messages-open-click-node',
    'router_path' => 'node/add/messages-open-click-node',
    'link_title' => 'messages open click node',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/messages-processed-node
  $menu_links['navigation:node/add/messages-processed-node'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/messages-processed-node',
    'router_path' => 'node/add/messages-processed-node',
    'link_title' => 'messages processed node',
    'options' => array(
      'attributes' => array(
        'title' => 'Node for holding info from SocketLabs function - messagesProcessed',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/messages-queued-node
  $menu_links['navigation:node/add/messages-queued-node'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/messages-queued-node',
    'router_path' => 'node/add/messages-queued-node',
    'link_title' => 'messages queued node',
    'options' => array(
      'attributes' => array(
        'title' => 'Node for holding info from SocketLabs function - messagesQueued',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/xml-failed-feed
  $menu_links['navigation:node/add/xml-failed-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/xml-failed-feed',
    'router_path' => 'node/add/xml-failed-feed',
    'link_title' => 'xml failed feed',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/xml-feedback-loop-report
  $menu_links['navigation:node/add/xml-feedback-loop-report'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/xml-feedback-loop-report',
    'router_path' => 'node/add/xml-feedback-loop-report',
    'link_title' => 'xml feedback loop feed',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/xml-messages-processed
  $menu_links['navigation:node/add/xml-messages-processed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/xml-messages-processed',
    'router_path' => 'node/add/xml-messages-processed',
    'link_title' => 'xml messages processed',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/xml-messages-queued
  $menu_links['navigation:node/add/xml-messages-queued'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/xml-messages-queued',
    'router_path' => 'node/add/xml-messages-queued',
    'link_title' => 'xml messages queued',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/xml-open-click
  $menu_links['navigation:node/add/xml-open-click'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/xml-open-click',
    'router_path' => 'node/add/xml-open-click',
    'link_title' => 'xml open click',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Failed Mail');
  t('Feedback Loop Mail');
  t('Feedback Loop Report');
  t('Home');
  t('Open/Click Mail');
  t('Processed Messages');
  t('Queued Messages');
  t('SocketLabs Codes');
  t('failed mail node');
  t('messages open click node');
  t('messages processed node');
  t('messages queued node');
  t('xml failed feed');
  t('xml feedback loop feed');
  t('xml messages processed');
  t('xml messages queued');
  t('xml open click');


  return $menu_links;
}
