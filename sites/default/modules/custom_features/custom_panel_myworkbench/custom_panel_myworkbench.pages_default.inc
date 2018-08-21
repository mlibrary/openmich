<?php
/**
 * @file
 * custom_panel_myworkbench.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function custom_panel_myworkbench_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'myworkbench_panel_context';
  $handler->task = 'myworkbench';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'MyWorkbench',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->title = 'My Workbench';
  $display->uuid = 'c9ff3445-41ed-4c44-ad74-dee49ef92fff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7c5dbd92-abd5-45d7-9066-b600c4d7c189';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'workbench_recent_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'admin/workbench',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c5dbd92-abd5-45d7-9066-b600c4d7c189';
    $display->content['new-7c5dbd92-abd5-45d7-9066-b600c4d7c189'] = $pane;
    $display->panels['middle'][0] = 'new-7c5dbd92-abd5-45d7-9066-b600c4d7c189';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7c5dbd92-abd5-45d7-9066-b600c4d7c189';
  $handler->conf['display'] = $display;
  $export['myworkbench_panel_context'] = $handler;

  return $export;
}
