<?php
/**
 * @file
 * left_hand_sidebar_for_profile.features.inc
 */

/**
 * Implements hook_views_api().
 */
function left_hand_sidebar_for_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function left_hand_sidebar_for_profile_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorites".
  $flags['favorites'] = array(
    'entity_type' => 'node',
    'title' => 'Favorites',
    'global' => 0,
    'types' => array(
      0 => 'advertising_305x215',
      1 => 'advertising',
      2 => 'page',
      3 => 'blog',
      4 => 'event',
      5 => 'post',
      6 => 'resource',
      7 => 'website_file',
    ),
    'flag_short' => 'Add to My Favorites list',
    'flag_long' => 'Add this to your Favorites',
    'flag_message' => '',
    'unflag_short' => 'Remove from My Favorites list',
    'unflag_long' => 'Remove this from your Favorites',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'email_plain' => 0,
      'email_html' => 0,
      'email_textalt' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'left_hand_sidebar_for_profile',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Friends".
  $flags['friends'] = array(
    'entity_type' => 'user',
    'title' => 'Friends',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Add to My Friends List',
    'flag_long' => 'Add this member to your Friends list',
    'flag_message' => '',
    'unflag_short' => 'Remove from My Friends List',
    'unflag_long' => 'Remove this member from your Friends list',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'left_hand_sidebar_for_profile',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function left_hand_sidebar_for_profile_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('Community-submitted posts'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'private_group' => array(
      'name' => t('Private Group'),
      'base' => 'node_content',
      'description' => t('Group for private posts, resources, and other members-only information'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
