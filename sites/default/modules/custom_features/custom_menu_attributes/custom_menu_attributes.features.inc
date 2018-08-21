<?php
/**
 * @file
 * custom_menu_attributes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_menu_attributes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
