<?php
/**
 * @file
 * socketlabs_feature.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function socketlabs_feature_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'failed_messages_view';
  $view->description = 'View for SocketLabs report on failed messages.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Failed Messages View';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_report_type' => 'field_report_type',
    'field_accountid' => 'field_accountid',
    'field_datetime' => 'field_datetime',
    'field_toaddress' => 'field_toaddress',
    'field_fromaddress' => 'field_fromaddress',
    'field_failtype' => 'field_failtype',
    'field_failcode' => 'field_failcode',
    'field_reason' => 'field_reason',
    'field_mailingid' => 'field_mailingid',
    'field_messageid' => 'field_messageid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_report_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_accountid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_datetime' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_toaddress' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_fromaddress' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_failtype' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_failcode' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_reason' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_mailingid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_messageid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Report Type */
  $handler->display->display_options['fields']['field_report_type']['id'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['table'] = 'field_data_field_report_type';
  $handler->display->display_options['fields']['field_report_type']['field'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_report_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_report_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_report_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_report_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_report_type']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_report_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_report_type']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Sent To */
  $handler->display->display_options['fields']['field_toaddress']['id'] = 'field_toaddress';
  $handler->display->display_options['fields']['field_toaddress']['table'] = 'field_data_field_toaddress';
  $handler->display->display_options['fields']['field_toaddress']['field'] = 'field_toaddress';
  $handler->display->display_options['fields']['field_toaddress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_toaddress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_toaddress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_toaddress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_toaddress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['field_api_classes'] = 0;
  /* Field: Content: Sent From */
  $handler->display->display_options['fields']['field_fromaddress']['id'] = 'field_fromaddress';
  $handler->display->display_options['fields']['field_fromaddress']['table'] = 'field_data_field_fromaddress';
  $handler->display->display_options['fields']['field_fromaddress']['field'] = 'field_fromaddress';
  $handler->display->display_options['fields']['field_fromaddress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['field_api_classes'] = 0;
  /* Field: Content: Account Id */
  $handler->display->display_options['fields']['field_accountid']['id'] = 'field_accountid';
  $handler->display->display_options['fields']['field_accountid']['table'] = 'field_data_field_accountid';
  $handler->display->display_options['fields']['field_accountid']['field'] = 'field_accountid';
  $handler->display->display_options['fields']['field_accountid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_accountid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_accountid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_accountid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_accountid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_accountid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_accountid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_accountid']['field_api_classes'] = 0;
  /* Field: Content: Failure Type */
  $handler->display->display_options['fields']['field_failtype']['id'] = 'field_failtype';
  $handler->display->display_options['fields']['field_failtype']['table'] = 'field_data_field_failtype';
  $handler->display->display_options['fields']['field_failtype']['field'] = 'field_failtype';
  $handler->display->display_options['fields']['field_failtype']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_failtype']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_failtype']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_failtype']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_failtype']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_failtype']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_failtype']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_failtype']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_failtype']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_failtype']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_failtype']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_failtype']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_failtype']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_failtype']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_failtype']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_failtype']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_failtype']['field_api_classes'] = 0;
  /* Field: Content: Failure Code */
  $handler->display->display_options['fields']['field_failcode']['id'] = 'field_failcode';
  $handler->display->display_options['fields']['field_failcode']['table'] = 'field_data_field_failcode';
  $handler->display->display_options['fields']['field_failcode']['field'] = 'field_failcode';
  $handler->display->display_options['fields']['field_failcode']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_failcode']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_failcode']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_failcode']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_failcode']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_failcode']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_failcode']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_failcode']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_failcode']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_failcode']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_failcode']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_failcode']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_failcode']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_failcode']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_failcode']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_failcode']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_failcode']['field_api_classes'] = 0;
  /* Field: Content: Reason */
  $handler->display->display_options['fields']['field_reason']['id'] = 'field_reason';
  $handler->display->display_options['fields']['field_reason']['table'] = 'field_data_field_reason';
  $handler->display->display_options['fields']['field_reason']['field'] = 'field_reason';
  $handler->display->display_options['fields']['field_reason']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_reason']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_reason']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_reason']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_reason']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_reason']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_reason']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_reason']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_reason']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_reason']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_reason']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_reason']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_reason']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_reason']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_reason']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_reason']['field_api_classes'] = 0;
  /* Field: Content: Mailing Id */
  $handler->display->display_options['fields']['field_mailingid']['id'] = 'field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['table'] = 'field_data_field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['field'] = 'field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['field_api_classes'] = 0;
  /* Field: Content: Message Id */
  $handler->display->display_options['fields']['field_messageid']['id'] = 'field_messageid';
  $handler->display->display_options['fields']['field_messageid']['table'] = 'field_data_field_messageid';
  $handler->display->display_options['fields']['field_messageid']['field'] = 'field_messageid';
  $handler->display->display_options['fields']['field_messageid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_messageid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_messageid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_messageid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_messageid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_messageid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_messageid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_messageid']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 0;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Filter: Start Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = '';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+3';
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 0;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Filter: End Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value_1']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = '';
  $handler->display->display_options['filters']['field_date_value_1']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_date_value_1']['year_range'] = '-3:+3';
  /* Filter criterion: Content: Sent To (field_toaddress) */
  $handler->display->display_options['filters']['field_toaddress_value']['id'] = 'field_toaddress_value';
  $handler->display->display_options['filters']['field_toaddress_value']['table'] = 'field_data_field_toaddress';
  $handler->display->display_options['filters']['field_toaddress_value']['field'] = 'field_toaddress_value';
  $handler->display->display_options['filters']['field_toaddress_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_toaddress_value']['group'] = 0;
  $handler->display->display_options['filters']['field_toaddress_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['operator_id'] = 'field_toaddress_value_op';
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['label'] = 'Filter: Sent To';
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['operator'] = 'field_toaddress_value_op';
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['identifier'] = 'field_toaddress_value';
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Sent From (field_fromaddress) */
  $handler->display->display_options['filters']['field_fromaddress_value']['id'] = 'field_fromaddress_value';
  $handler->display->display_options['filters']['field_fromaddress_value']['table'] = 'field_data_field_fromaddress';
  $handler->display->display_options['filters']['field_fromaddress_value']['field'] = 'field_fromaddress_value';
  $handler->display->display_options['filters']['field_fromaddress_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fromaddress_value']['group'] = 0;
  $handler->display->display_options['filters']['field_fromaddress_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['operator_id'] = 'field_fromaddress_value_op';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['label'] = 'Filter: Sent From';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['operator'] = 'field_fromaddress_value_op';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['identifier'] = 'field_fromaddress_value';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'failed_mail_node' => 'failed_mail_node',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'failed messages block';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'socketlabs/failed_mail';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Failed Mail';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'features';
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Failed Mail';
  $handler->display->display_options['tab_options']['weight'] = '1';
  $handler->display->display_options['tab_options']['name'] = 'features';
  $export['failed_messages_view'] = $view;

  $view = new view;
  $view->name = 'feedback_loop_view';
  $view->description = 'View for SocketLabs report on feedback loop reports.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Feedback Loop View';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_report_type' => 'field_report_type',
    'field_accountid' => 'field_accountid',
    'field_datetime' => 'field_datetime',
    'field_original_recipient' => 'field_original_recipient',
    'field_fromaddress' => 'field_fromaddress',
    'field_user_agent' => 'field_user_agent',
    'field_type' => 'field_type',
    'field_mailingid' => 'field_mailingid',
    'field_messageid' => 'field_messageid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_report_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_accountid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_datetime' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_original_recipient' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_fromaddress' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_user_agent' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_mailingid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_messageid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Report Type */
  $handler->display->display_options['fields']['field_report_type']['id'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['table'] = 'field_data_field_report_type';
  $handler->display->display_options['fields']['field_report_type']['field'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_report_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_report_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_report_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_report_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_report_type']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_report_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_report_type']['field_api_classes'] = 0;
  /* Field: Content: Account Id */
  $handler->display->display_options['fields']['field_accountid']['id'] = 'field_accountid';
  $handler->display->display_options['fields']['field_accountid']['table'] = 'field_data_field_accountid';
  $handler->display->display_options['fields']['field_accountid']['field'] = 'field_accountid';
  $handler->display->display_options['fields']['field_accountid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_accountid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_accountid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_accountid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_accountid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_accountid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_accountid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_accountid']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Original Recipient */
  $handler->display->display_options['fields']['field_original_recipient']['id'] = 'field_original_recipient';
  $handler->display->display_options['fields']['field_original_recipient']['table'] = 'field_data_field_original_recipient';
  $handler->display->display_options['fields']['field_original_recipient']['field'] = 'field_original_recipient';
  $handler->display->display_options['fields']['field_original_recipient']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_original_recipient']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_original_recipient']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['field_api_classes'] = 0;
  /* Field: Content: Sent From */
  $handler->display->display_options['fields']['field_fromaddress']['id'] = 'field_fromaddress';
  $handler->display->display_options['fields']['field_fromaddress']['table'] = 'field_data_field_fromaddress';
  $handler->display->display_options['fields']['field_fromaddress']['field'] = 'field_fromaddress';
  $handler->display->display_options['fields']['field_fromaddress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['field_api_classes'] = 0;
  /* Field: Content: User Agent */
  $handler->display->display_options['fields']['field_user_agent']['id'] = 'field_user_agent';
  $handler->display->display_options['fields']['field_user_agent']['table'] = 'field_data_field_user_agent';
  $handler->display->display_options['fields']['field_user_agent']['field'] = 'field_user_agent';
  $handler->display->display_options['fields']['field_user_agent']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_agent']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_agent']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_agent']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_agent']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_agent']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_agent']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_agent']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_agent']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_agent']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_agent']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_agent']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_user_agent']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_agent']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_user_agent']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_agent']['field_api_classes'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_type']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_type']['field_api_classes'] = 0;
  /* Field: Content: Mailing Id */
  $handler->display->display_options['fields']['field_mailingid']['id'] = 'field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['table'] = 'field_data_field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['field'] = 'field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['field_api_classes'] = 0;
  /* Field: Content: Message Id */
  $handler->display->display_options['fields']['field_messageid']['id'] = 'field_messageid';
  $handler->display->display_options['fields']['field_messageid']['table'] = 'field_data_field_messageid';
  $handler->display->display_options['fields']['field_messageid']['field'] = 'field_messageid';
  $handler->display->display_options['fields']['field_messageid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_messageid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_messageid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_messageid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_messageid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_messageid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_messageid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_messageid']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 0;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Filter: Start Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = '';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+3';
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 0;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Filter: End Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value_1']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = '';
  $handler->display->display_options['filters']['field_date_value_1']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_date_value_1']['year_range'] = '-3:+3';
  /* Filter criterion: Content: Sent From (field_fromaddress) */
  $handler->display->display_options['filters']['field_fromaddress_value']['id'] = 'field_fromaddress_value';
  $handler->display->display_options['filters']['field_fromaddress_value']['table'] = 'field_data_field_fromaddress';
  $handler->display->display_options['filters']['field_fromaddress_value']['field'] = 'field_fromaddress_value';
  $handler->display->display_options['filters']['field_fromaddress_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fromaddress_value']['group'] = 0;
  $handler->display->display_options['filters']['field_fromaddress_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['operator_id'] = 'field_fromaddress_value_op';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['label'] = 'Filter: Sent From';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['operator'] = 'field_fromaddress_value_op';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['identifier'] = 'field_fromaddress_value';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Original Recipient (field_original_recipient) */
  $handler->display->display_options['filters']['field_original_recipient_value']['id'] = 'field_original_recipient_value';
  $handler->display->display_options['filters']['field_original_recipient_value']['table'] = 'field_data_field_original_recipient';
  $handler->display->display_options['filters']['field_original_recipient_value']['field'] = 'field_original_recipient_value';
  $handler->display->display_options['filters']['field_original_recipient_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_original_recipient_value']['group'] = 0;
  $handler->display->display_options['filters']['field_original_recipient_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_original_recipient_value']['expose']['operator_id'] = 'field_original_recipient_value_op';
  $handler->display->display_options['filters']['field_original_recipient_value']['expose']['label'] = 'Filter: Original Recipient ';
  $handler->display->display_options['filters']['field_original_recipient_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_original_recipient_value']['expose']['operator'] = 'field_original_recipient_value_op';
  $handler->display->display_options['filters']['field_original_recipient_value']['expose']['identifier'] = 'field_original_recipient_value';
  $handler->display->display_options['filters']['field_original_recipient_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['group'] = 0;
  $handler->display->display_options['filters']['field_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_value']['expose']['operator_id'] = 'field_type_value_op';
  $handler->display->display_options['filters']['field_type_value']['expose']['label'] = 'Filter: Type';
  $handler->display->display_options['filters']['field_type_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_type_value']['expose']['operator'] = 'field_type_value_op';
  $handler->display->display_options['filters']['field_type_value']['expose']['identifier'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'feedback_loop_report' => 'feedback_loop_report',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'socketlabs/feedback_loop';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Feedback Loop';
  $handler->display->display_options['menu']['weight'] = '10';
  $export['feedback_loop_view'] = $view;

  $view = new view;
  $view->name = 'open_click_messages_view';
  $view->description = 'View for SocketLabs report on open/click messages.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Open/Click Messages View';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Report Type */
  $handler->display->display_options['fields']['field_report_type']['id'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['table'] = 'field_data_field_report_type';
  $handler->display->display_options['fields']['field_report_type']['field'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_report_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_report_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_report_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_report_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_report_type']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_report_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_report_type']['field_api_classes'] = 0;
  /* Field: Content: Account Id */
  $handler->display->display_options['fields']['field_accountid']['id'] = 'field_accountid';
  $handler->display->display_options['fields']['field_accountid']['table'] = 'field_data_field_accountid';
  $handler->display->display_options['fields']['field_accountid']['field'] = 'field_accountid';
  $handler->display->display_options['fields']['field_accountid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_accountid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_accountid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_accountid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_accountid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_accountid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_accountid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_accountid']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Original Recipient */
  $handler->display->display_options['fields']['field_original_recipient']['id'] = 'field_original_recipient';
  $handler->display->display_options['fields']['field_original_recipient']['table'] = 'field_data_field_original_recipient';
  $handler->display->display_options['fields']['field_original_recipient']['field'] = 'field_original_recipient';
  $handler->display->display_options['fields']['field_original_recipient']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_original_recipient']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_original_recipient']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_original_recipient']['field_api_classes'] = 0;
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_eventtype']['id'] = 'field_eventtype';
  $handler->display->display_options['fields']['field_eventtype']['table'] = 'field_data_field_eventtype';
  $handler->display->display_options['fields']['field_eventtype']['field'] = 'field_eventtype';
  $handler->display->display_options['fields']['field_eventtype']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_eventtype']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_eventtype']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_eventtype']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_eventtype']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_eventtype']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_eventtype']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_eventtype']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_eventtype']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_eventtype']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_eventtype']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_eventtype']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_eventtype']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_eventtype']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_eventtype']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_eventtype']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_eventtype']['field_api_classes'] = 0;
  /* Field: Content: Remote IP */
  $handler->display->display_options['fields']['field_remote_ip']['id'] = 'field_remote_ip';
  $handler->display->display_options['fields']['field_remote_ip']['table'] = 'field_data_field_remote_ip';
  $handler->display->display_options['fields']['field_remote_ip']['field'] = 'field_remote_ip';
  $handler->display->display_options['fields']['field_remote_ip']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_remote_ip']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_remote_ip']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_remote_ip']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_remote_ip']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_remote_ip']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_remote_ip']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_remote_ip']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_remote_ip']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_remote_ip']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_remote_ip']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_remote_ip']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_remote_ip']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_remote_ip']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_remote_ip']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_remote_ip']['field_api_classes'] = 0;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
  /* Field: Content: Mailing Id */
  $handler->display->display_options['fields']['field_mailingid']['id'] = 'field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['table'] = 'field_data_field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['field'] = 'field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['field_api_classes'] = 0;
  /* Field: Content: Message Id */
  $handler->display->display_options['fields']['field_messageid']['id'] = 'field_messageid';
  $handler->display->display_options['fields']['field_messageid']['table'] = 'field_data_field_messageid';
  $handler->display->display_options['fields']['field_messageid']['field'] = 'field_messageid';
  $handler->display->display_options['fields']['field_messageid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_messageid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_messageid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_messageid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_messageid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_messageid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_messageid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_messageid']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 0;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Filter: Start Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = '';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+3';
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 0;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Filter: End Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value_1']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = '';
  $handler->display->display_options['filters']['field_date_value_1']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_date_value_1']['year_range'] = '-3:+3';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'messages_open_click_node' => 'messages_open_click_node',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Original Recipient (field_original_recipient) */
  $handler->display->display_options['filters']['field_original_recipient_value']['id'] = 'field_original_recipient_value';
  $handler->display->display_options['filters']['field_original_recipient_value']['table'] = 'field_data_field_original_recipient';
  $handler->display->display_options['filters']['field_original_recipient_value']['field'] = 'field_original_recipient_value';
  $handler->display->display_options['filters']['field_original_recipient_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_original_recipient_value']['group'] = 0;
  $handler->display->display_options['filters']['field_original_recipient_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_original_recipient_value']['expose']['operator_id'] = 'field_original_recipient_value_op';
  $handler->display->display_options['filters']['field_original_recipient_value']['expose']['label'] = 'Filter: Original Recipient';
  $handler->display->display_options['filters']['field_original_recipient_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_original_recipient_value']['expose']['operator'] = 'field_original_recipient_value_op';
  $handler->display->display_options['filters']['field_original_recipient_value']['expose']['identifier'] = 'field_original_recipient_value';
  $handler->display->display_options['filters']['field_original_recipient_value']['expose']['multiple'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'socketlabs/openclick_messages';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Open/Click Messages';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Open/Click Messages';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['open_click_messages_view'] = $view;

  $view = new view;
  $view->name = 'processed_messages_view';
  $view->description = 'View for SocketLabs report on processed messages.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Processed Messages View';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_report_type' => 'field_report_type',
    'field_accountid' => 'field_accountid',
    'field_datetime' => 'field_datetime',
    'field_toaddress' => 'field_toaddress',
    'field_fromaddress' => 'field_fromaddress',
    'field_messagesize' => 'field_messagesize',
    'field_disposition' => 'field_disposition',
    'field_localip' => 'field_localip',
    'field_mailingid' => 'field_mailingid',
    'field_messageid' => 'field_messageid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_report_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_accountid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_datetime' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_toaddress' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_fromaddress' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_messagesize' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_disposition' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_localip' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_mailingid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_messageid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Report Type */
  $handler->display->display_options['fields']['field_report_type']['id'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['table'] = 'field_data_field_report_type';
  $handler->display->display_options['fields']['field_report_type']['field'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_report_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_report_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_report_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_report_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_report_type']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_report_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_report_type']['field_api_classes'] = 0;
  /* Field: Content: Account Id */
  $handler->display->display_options['fields']['field_accountid']['id'] = 'field_accountid';
  $handler->display->display_options['fields']['field_accountid']['table'] = 'field_data_field_accountid';
  $handler->display->display_options['fields']['field_accountid']['field'] = 'field_accountid';
  $handler->display->display_options['fields']['field_accountid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_accountid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_accountid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_accountid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_accountid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_accountid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_accountid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_accountid']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Sent To */
  $handler->display->display_options['fields']['field_toaddress']['id'] = 'field_toaddress';
  $handler->display->display_options['fields']['field_toaddress']['table'] = 'field_data_field_toaddress';
  $handler->display->display_options['fields']['field_toaddress']['field'] = 'field_toaddress';
  $handler->display->display_options['fields']['field_toaddress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_toaddress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_toaddress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_toaddress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_toaddress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['field_api_classes'] = 0;
  /* Field: Content: Sent From */
  $handler->display->display_options['fields']['field_fromaddress']['id'] = 'field_fromaddress';
  $handler->display->display_options['fields']['field_fromaddress']['table'] = 'field_data_field_fromaddress';
  $handler->display->display_options['fields']['field_fromaddress']['field'] = 'field_fromaddress';
  $handler->display->display_options['fields']['field_fromaddress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['field_api_classes'] = 0;
  /* Field: Content: Message Size */
  $handler->display->display_options['fields']['field_messagesize']['id'] = 'field_messagesize';
  $handler->display->display_options['fields']['field_messagesize']['table'] = 'field_data_field_messagesize';
  $handler->display->display_options['fields']['field_messagesize']['field'] = 'field_messagesize';
  $handler->display->display_options['fields']['field_messagesize']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_messagesize']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_messagesize']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_messagesize']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_messagesize']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_messagesize']['field_api_classes'] = 0;
  /* Field: Content: Disposition */
  $handler->display->display_options['fields']['field_disposition']['id'] = 'field_disposition';
  $handler->display->display_options['fields']['field_disposition']['table'] = 'field_data_field_disposition';
  $handler->display->display_options['fields']['field_disposition']['field'] = 'field_disposition';
  $handler->display->display_options['fields']['field_disposition']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_disposition']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_disposition']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_disposition']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_disposition']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_disposition']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_disposition']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_disposition']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_disposition']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_disposition']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_disposition']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_disposition']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_disposition']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_disposition']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_disposition']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_disposition']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_disposition']['field_api_classes'] = 0;
  /* Field: Content: Local IP */
  $handler->display->display_options['fields']['field_localip']['id'] = 'field_localip';
  $handler->display->display_options['fields']['field_localip']['table'] = 'field_data_field_localip';
  $handler->display->display_options['fields']['field_localip']['field'] = 'field_localip';
  $handler->display->display_options['fields']['field_localip']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_localip']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_localip']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_localip']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_localip']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_localip']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_localip']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_localip']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_localip']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_localip']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_localip']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_localip']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_localip']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_localip']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_localip']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_localip']['field_api_classes'] = 0;
  /* Field: Content: Mailing Id */
  $handler->display->display_options['fields']['field_mailingid']['id'] = 'field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['table'] = 'field_data_field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['field'] = 'field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['field_api_classes'] = 0;
  /* Field: Content: Message Id */
  $handler->display->display_options['fields']['field_messageid']['id'] = 'field_messageid';
  $handler->display->display_options['fields']['field_messageid']['table'] = 'field_data_field_messageid';
  $handler->display->display_options['fields']['field_messageid']['field'] = 'field_messageid';
  $handler->display->display_options['fields']['field_messageid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_messageid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_messageid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_messageid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_messageid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_messageid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_messageid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_messageid']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 0;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Filter: Start Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = '';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+3';
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 0;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Filter: End Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value_1']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = '';
  $handler->display->display_options['filters']['field_date_value_1']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_date_value_1']['year_range'] = '-3:+3';
  /* Filter criterion: Content: Sent From (field_fromaddress) */
  $handler->display->display_options['filters']['field_fromaddress_value']['id'] = 'field_fromaddress_value';
  $handler->display->display_options['filters']['field_fromaddress_value']['table'] = 'field_data_field_fromaddress';
  $handler->display->display_options['filters']['field_fromaddress_value']['field'] = 'field_fromaddress_value';
  $handler->display->display_options['filters']['field_fromaddress_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fromaddress_value']['group'] = 0;
  $handler->display->display_options['filters']['field_fromaddress_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['operator_id'] = 'field_fromaddress_value_op';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['label'] = 'Filter: Sent From';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['operator'] = 'field_fromaddress_value_op';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['identifier'] = 'field_fromaddress_value';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Sent To (field_toaddress) */
  $handler->display->display_options['filters']['field_toaddress_value']['id'] = 'field_toaddress_value';
  $handler->display->display_options['filters']['field_toaddress_value']['table'] = 'field_data_field_toaddress';
  $handler->display->display_options['filters']['field_toaddress_value']['field'] = 'field_toaddress_value';
  $handler->display->display_options['filters']['field_toaddress_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_toaddress_value']['group'] = 0;
  $handler->display->display_options['filters']['field_toaddress_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['operator_id'] = 'field_toaddress_value_op';
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['label'] = 'Filter: Sent To';
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['operator'] = 'field_toaddress_value_op';
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['identifier'] = 'field_toaddress_value';
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'messages_processed_node' => 'messages_processed_node',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'socketlabs/processed_messages';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Processed Messages';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Processed Messages';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['processed_messages_view'] = $view;

  $view = new view;
  $view->name = 'queued_messages_block';
  $view->description = 'View for SocketLabs report on queued messages.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Queued Messages View';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Report Type */
  $handler->display->display_options['fields']['field_report_type']['id'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['table'] = 'field_data_field_report_type';
  $handler->display->display_options['fields']['field_report_type']['field'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_report_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_report_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_report_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_report_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_report_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_report_type']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_report_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_report_type']['field_api_classes'] = 0;
  /* Field: Content: Account Id */
  $handler->display->display_options['fields']['field_accountid']['id'] = 'field_accountid';
  $handler->display->display_options['fields']['field_accountid']['table'] = 'field_data_field_accountid';
  $handler->display->display_options['fields']['field_accountid']['field'] = 'field_accountid';
  $handler->display->display_options['fields']['field_accountid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_accountid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_accountid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_accountid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_accountid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_accountid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_accountid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_accountid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_accountid']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Sent To */
  $handler->display->display_options['fields']['field_toaddress']['id'] = 'field_toaddress';
  $handler->display->display_options['fields']['field_toaddress']['table'] = 'field_data_field_toaddress';
  $handler->display->display_options['fields']['field_toaddress']['field'] = 'field_toaddress';
  $handler->display->display_options['fields']['field_toaddress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_toaddress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_toaddress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_toaddress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_toaddress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_toaddress']['field_api_classes'] = 0;
  /* Field: Content: Sent From */
  $handler->display->display_options['fields']['field_fromaddress']['id'] = 'field_fromaddress';
  $handler->display->display_options['fields']['field_fromaddress']['table'] = 'field_data_field_fromaddress';
  $handler->display->display_options['fields']['field_fromaddress']['field'] = 'field_fromaddress';
  $handler->display->display_options['fields']['field_fromaddress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fromaddress']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fromaddress']['field_api_classes'] = 0;
  /* Field: Content: Message Size */
  $handler->display->display_options['fields']['field_messagesize']['id'] = 'field_messagesize';
  $handler->display->display_options['fields']['field_messagesize']['table'] = 'field_data_field_messagesize';
  $handler->display->display_options['fields']['field_messagesize']['field'] = 'field_messagesize';
  $handler->display->display_options['fields']['field_messagesize']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_messagesize']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_messagesize']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_messagesize']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_messagesize']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_messagesize']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_messagesize']['field_api_classes'] = 0;
  /* Field: Content: Mailing Id */
  $handler->display->display_options['fields']['field_mailingid']['id'] = 'field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['table'] = 'field_data_field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['field'] = 'field_mailingid';
  $handler->display->display_options['fields']['field_mailingid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_mailingid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mailingid']['field_api_classes'] = 0;
  /* Field: Content: Message Id */
  $handler->display->display_options['fields']['field_messageid']['id'] = 'field_messageid';
  $handler->display->display_options['fields']['field_messageid']['table'] = 'field_data_field_messageid';
  $handler->display->display_options['fields']['field_messageid']['field'] = 'field_messageid';
  $handler->display->display_options['fields']['field_messageid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_messageid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_messageid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_messageid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_messageid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_messageid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_messageid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_messageid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_messageid']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 0;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Filter: Start Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = '';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+3';
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 0;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Filter: End Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value_1']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = '';
  $handler->display->display_options['filters']['field_date_value_1']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_date_value_1']['year_range'] = '-3:+3';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'messages_queued_node' => 'messages_queued_node',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Sent From (field_fromaddress) */
  $handler->display->display_options['filters']['field_fromaddress_value']['id'] = 'field_fromaddress_value';
  $handler->display->display_options['filters']['field_fromaddress_value']['table'] = 'field_data_field_fromaddress';
  $handler->display->display_options['filters']['field_fromaddress_value']['field'] = 'field_fromaddress_value';
  $handler->display->display_options['filters']['field_fromaddress_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fromaddress_value']['group'] = 0;
  $handler->display->display_options['filters']['field_fromaddress_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['operator_id'] = 'field_fromaddress_value_op';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['label'] = 'Filter: Sent From';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['operator'] = 'field_fromaddress_value_op';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['identifier'] = 'field_fromaddress_value';
  $handler->display->display_options['filters']['field_fromaddress_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Sent To (field_toaddress) */
  $handler->display->display_options['filters']['field_toaddress_value']['id'] = 'field_toaddress_value';
  $handler->display->display_options['filters']['field_toaddress_value']['table'] = 'field_data_field_toaddress';
  $handler->display->display_options['filters']['field_toaddress_value']['field'] = 'field_toaddress_value';
  $handler->display->display_options['filters']['field_toaddress_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_toaddress_value']['group'] = 0;
  $handler->display->display_options['filters']['field_toaddress_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['operator_id'] = 'field_toaddress_value_op';
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['label'] = 'Filter: Sent To';
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['operator'] = 'field_toaddress_value_op';
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['identifier'] = 'field_toaddress_value';
  $handler->display->display_options['filters']['field_toaddress_value']['expose']['multiple'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'socketlabs/queued_messages';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Queued Messages';
  $handler->display->display_options['menu']['weight'] = '4';
  $export['queued_messages_block'] = $view;

  return $export;
}
