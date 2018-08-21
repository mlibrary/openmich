<?php
/**
 * @file
 * custom_mini_panels_searchmenu.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function custom_mini_panels_searchmenu_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_navigation_and_search';
  $mini->category = 'Mini Panels';
  $mini->admin_title = 'Header: navigation and search';
  $mini->admin_description = 'Contains the main navigation menu block and the site search form.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8ebe1d85-4d80-4a4d-baf5-0b790130d60f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-78da8534-cc61-4e28-8d34-0421da80c640';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-mobile_header_navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Menu',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '78da8534-cc61-4e28-8d34-0421da80c640';
    $display->content['new-78da8534-cc61-4e28-8d34-0421da80c640'] = $pane;
    $display->panels['middle'][0] = 'new-78da8534-cc61-4e28-8d34-0421da80c640';
    $pane = new stdClass();
    $pane->pid = 'new-b0461b1d-acf9-4c8d-9e00-25d552347e65';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b0461b1d-acf9-4c8d-9e00-25d552347e65';
    $display->content['new-b0461b1d-acf9-4c8d-9e00-25d552347e65'] = $pane;
    $display->panels['middle'][1] = 'new-b0461b1d-acf9-4c8d-9e00-25d552347e65';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-78da8534-cc61-4e28-8d34-0421da80c640';
  $mini->display = $display;
  $export['header_navigation_and_search'] = $mini;

  return $export;
}
