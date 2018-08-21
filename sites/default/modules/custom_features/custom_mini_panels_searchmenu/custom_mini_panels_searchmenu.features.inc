<?php
/**
 * @file
 * custom_mini_panels_searchmenu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_mini_panels_searchmenu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
