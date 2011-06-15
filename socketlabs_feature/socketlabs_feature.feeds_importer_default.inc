<?php
/**
 * @file
 * socketlabs_feature.feeds_importer_default.inc
 */

/**
 * Implementation of hook_feeds_importer_default().
 */
function socketlabs_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'failed_mail_importer';
  $feeds_importer->config = array(
    'name' => 'failed mail importer',
    'description' => 'importer for failed mail nodes',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:1' => 'DateTime',
          'xpathparser:2' => 'MessageId',
          'xpathparser:3' => 'MailingId',
          'xpathparser:4' => 'ToAddress',
          'xpathparser:5' => 'FromAddress',
          'xpathparser:6' => 'FailureType',
          'xpathparser:7' => 'FailureCode',
          'xpathparser:8' => 'Reason',
          'xpathparser:9' => 'AccountId',
        ),
        'rawXML' => array(
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
        ),
        'context' => '//item',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:3' => 'xpathparser:3',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:6' => 'xpathparser:6',
            'xpathparser:7' => 'xpathparser:7',
            'xpathparser:8' => 'xpathparser:8',
            'xpathparser:9' => 'xpathparser:9',
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'failed_mail_node',
        'expire' => '300',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_datetime',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_messageid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_mailingid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_toaddress',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_fromaddress',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_failtype',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_failcode',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_reason',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_accountid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => 'xml_failed_feed',
    'update' => 0,
    'import_period' => '300',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['failed_mail_importer'] = $feeds_importer;

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'feedback_loop_importer';
  $feeds_importer->config = array(
    'name' => 'feedback loop importer',
    'description' => 'Importer for Feedback Loop report nodes',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:1' => 'MessageId',
          'xpathparser:2' => 'DateTime',
          'xpathparser:3' => 'FromAddress',
          'xpathparser:4' => 'MailingId',
          'xpathparser:5' => 'OriginalRecipient',
          'xpathparser:6' => 'Type',
          'xpathparser:7' => 'UserAgent',
          'xpathparser:8' => 'AccountId',
        ),
        'rawXML' => array(
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
        ),
        'context' => '//item',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:3' => 'xpathparser:3',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:6' => 'xpathparser:6',
            'xpathparser:7' => 'xpathparser:7',
            'xpathparser:8' => 'xpathparser:8',
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'feedback_loop_report',
        'expire' => '300',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_messageid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_datetime',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_fromaddress',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_mailingid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_original_recipient',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_user_agent',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_accountid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => 'xml_feedback_loop_report',
    'update' => 0,
    'import_period' => '300',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['feedback_loop_importer'] = $feeds_importer;

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'messages_open_click_importer';
  $feeds_importer->config = array(
    'name' => 'messages open click importer',
    'description' => 'importer for messages open click node',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:1' => 'DateTime',
          'xpathparser:2' => 'MessageId',
          'xpathparser:3' => 'MailingId',
          'xpathparser:4' => 'OriginalRecipient',
          'xpathparser:5' => 'EventType',
          'xpathparser:6' => 'URL',
          'xpathparser:7' => 'RemoteIp',
          'xpathparser:8' => 'AccountId',
        ),
        'rawXML' => array(
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
        ),
        'context' => '//item',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:3' => 'xpathparser:3',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:6' => 'xpathparser:6',
            'xpathparser:7' => 'xpathparser:7',
            'xpathparser:8' => 'xpathparser:8',
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'messages_open_click_node',
        'expire' => '300',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_datetime',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_messageid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_mailingid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_original_recipient',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_eventtype',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_url',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_remote_ip',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_accountid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => 'xml_open_click',
    'update' => 0,
    'import_period' => '300',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['messages_open_click_importer'] = $feeds_importer;

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'messages_processed_importer';
  $feeds_importer->config = array(
    'name' => 'messages processed importer',
    'description' => 'Importer for messages processed nodes',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'AccountId',
          'xpathparser:1' => 'MessageId',
          'xpathparser:2' => 'DateTime',
          'xpathparser:3' => 'Disposition',
          'xpathparser:4' => 'FromAddress',
          'xpathparser:5' => 'LocalIp',
          'xpathparser:6' => 'MailingId',
          'xpathparser:7' => 'MessageSize',
          'xpathparser:8' => 'Response',
          'xpathparser:9' => 'ToAddress',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
        ),
        'context' => '//item',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:3' => 'xpathparser:3',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:6' => 'xpathparser:6',
            'xpathparser:7' => 'xpathparser:7',
            'xpathparser:8' => 'xpathparser:8',
            'xpathparser:9' => 'xpathparser:9',
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'messages_processed_node',
        'expire' => '300',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_messageid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_datetime',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_disposition',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_fromaddress',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_localip',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_mailingid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_messagesize',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_response',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_toaddress',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_accountid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => 'xml_messages_processed',
    'update' => 0,
    'import_period' => '300',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['messages_processed_importer'] = $feeds_importer;

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'messages_queued_importer';
  $feeds_importer->config = array(
    'name' => 'messages queued importer',
    'description' => 'Importer for messages queued nodes.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:1' => 'DateTime',
          'xpathparser:2' => 'MessageId',
          'xpathparser:3' => 'FromAddress',
          'xpathparser:4' => 'MailingId',
          'xpathparser:5' => 'MessageSize',
          'xpathparser:6' => 'ToAddress',
          'xpathparser:7' => 'AccountId',
        ),
        'rawXML' => array(
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
        ),
        'context' => '//item',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:3' => 'xpathparser:3',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:6' => 'xpathparser:6',
            'xpathparser:7' => 'xpathparser:7',
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'messages_queued_node',
        'expire' => '300',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_datetime',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_messageid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_fromaddress',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_mailingid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_messagesize',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_toaddress',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_accountid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => 'xml_messages_queued',
    'update' => 0,
    'import_period' => '300',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['messages_queued_importer'] = $feeds_importer;

  return $export;
}
