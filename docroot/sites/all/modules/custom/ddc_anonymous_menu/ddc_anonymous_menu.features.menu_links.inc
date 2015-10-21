<?php
/**
 * @file
 * ddc_anonymous_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ddc_anonymous_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-anonymous-user-menu_login:user/login
  $menu_links['menu-anonymous-user-menu_login:user/login'] = array(
    'menu_name' => 'menu-anonymous-user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-anonymous-user-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Login');

  return $menu_links;
}
