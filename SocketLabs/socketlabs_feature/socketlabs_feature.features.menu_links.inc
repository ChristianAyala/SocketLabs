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
  // Translatables
  // Included for use with string extractors like potx.
  t('Failed Mail');
  t('Feedback Loop Mail');
  t('Home');
  t('Open/Click Mail');
  t('Processed Messages');
  t('Queued Messages');


  return $menu_links;
}
