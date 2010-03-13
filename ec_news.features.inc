<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ec_news_content_default_fields() {
  module_load_include('inc', 'ec_news', 'ec_news.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_news_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ec_news_ctools_plugin_api() {
  module_load_include('inc', 'ec_news', 'ec_news.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_news_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_feeds_importer_default().
 */
function ec_news_feeds_importer_default() {
  module_load_include('inc', 'ec_news', 'ec_news.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_news_feeds_importer_default', $args);
}

/**
 * Implementation of hook_node_info().
 */
function ec_news_node_info() {
  module_load_include('inc', 'ec_news', 'ec_news.features.node');
  $args = func_get_args();
  return call_user_func_array('_ec_news_node_info', $args);
}
