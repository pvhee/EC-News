<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _ec_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'news_feed' => array(
      'name' => t('News Feed'),
      'module' => 'features',
      'description' => t('Feed which generates nodes of type "news". It is created by the "master" importer and contains a link to the remote news feed at the Master Template.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
