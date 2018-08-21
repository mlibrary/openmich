<?php
/**
 * @file
 * paragraphs_id_test.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function paragraphs_id_test_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pp_test_landing_page';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__pp_test_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pp_test_landing_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_pp_test_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pp_test_landing_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pp_test_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pp_test_landing_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_pp_test_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pp_test_landing_page';
  $strongarm->value = '1';
  $export['node_preview_pp_test_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pp_test_landing_page';
  $strongarm->value = 1;
  $export['node_submitted_pp_test_landing_page'] = $strongarm;

  return $export;
}
