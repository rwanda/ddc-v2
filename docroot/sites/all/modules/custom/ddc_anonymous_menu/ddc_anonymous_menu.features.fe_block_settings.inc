<?php
/**
 * @file
 * ddc_anonymous_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ddc_anonymous_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-anonymous-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-anonymous-user-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'ddc_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'ddc_theme',
        'weight' => 0,
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
