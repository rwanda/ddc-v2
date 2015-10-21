<?php
/**
 * @file
 * ddc_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ddc_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_last_optimize';
  $strongarm->value = 1445373632;
  $export['search_api_solr_last_optimize'] = $strongarm;

  return $export;
}
