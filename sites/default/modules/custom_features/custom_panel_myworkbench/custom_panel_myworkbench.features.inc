<?php
/**
 * @file
 * custom_panel_myworkbench.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_panel_myworkbench_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
