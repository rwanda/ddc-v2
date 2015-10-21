<?php
/**
 * @file
 * ddc_article_list.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ddc_article_list_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-article_list-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-article_list-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ddc_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'ddc_theme',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
