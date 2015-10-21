<?php
/**
 * @file
 * ddc_anonymous_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ddc_anonymous_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-anonymous-user-menu.
  $menus['menu-anonymous-user-menu'] = array(
    'menu_name' => 'menu-anonymous-user-menu',
    'title' => 'Anonymous User menu',
    'description' => 'The <em>Anonymous User</em> menu contains links related to the user\'s ability to login, as well as the \'Register\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Anonymous User menu');
  t('The <em>Anonymous User</em> menu contains links related to the user\'s ability to login, as well as the \'Register\' link.');


  return $menus;
}
