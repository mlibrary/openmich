<?php
/**
 * @file
 * custom_shortcuts.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function custom_shortcuts_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: shortcut-set-1:admin/content
  $menu_links['shortcut-set-1:admin/content'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Find content',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: shortcut-set-1:admin/structure/block
  $menu_links['shortcut-set-1:admin/structure/block'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: shortcut-set-1:admin/structure/pages
  $menu_links['shortcut-set-1:admin/structure/pages'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/structure/pages',
    'router_path' => 'admin/structure/pages',
    'link_title' => 'Pages',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: shortcut-set-1:admin/structure/types
  $menu_links['shortcut-set-1:admin/structure/types'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content Types',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: shortcut-set-1:admin/structure/views
  $menu_links['shortcut-set-1:admin/structure/views'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: shortcut-set-1:devel/cache/clear
  $menu_links['shortcut-set-1:devel/cache/clear'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'devel/cache/clear',
    'router_path' => 'devel/cache/clear',
    'link_title' => 'Clear Cache',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: shortcut-set-1:node/add
  $menu_links['shortcut-set-1:node/add'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Blocks');
  t('Clear Cache');
  t('Content Types');
  t('Find content');
  t('Pages');
  t('Views');


  return $menu_links;
}
