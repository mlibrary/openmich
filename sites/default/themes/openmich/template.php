<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function openmich_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  openmich_preprocess_html($variables, $hook);
  openmich_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function openmich_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tags classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function openmich_preprocess_page(&$variables, $hook) {
  // Add the external typekit js
  drupal_add_js('//use.typekit.com/tyx6qbr.js', 'external');
  // Add the inline typekit js to actually load typekit.
  drupal_add_js('try{Typekit.load({ async: true });}catch(e){}', 'inline');
}


/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
function openmich_preprocess_node(&$variables, $hook) {

  // Optionally, run node-type-specific preprocess functions, like
  // openmich_preprocess_node_page() or openmich_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['view_mode'];

  if ($variables['node']->type == 'course') {
    drupal_add_library ('system', 'ui.tabs');
    drupal_add_library ('system', 'ui.accordion');
    module_load_include('inc','pathauto','pathauto');
    drupal_add_js ( 'jQuery(document).ready(function(){jQuery("#course-tabs").tabs();});' , 'inline' );
  }

}

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function openmich_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function openmich_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
function openmich_preprocess_block(&$variables, $hook) {
	if ($variables['elements']['#block']->region === 'footer') {
		$variables['content'] = str_replace('?year?', date("Y"), $variables['content']);
	}
}
/**
* Process variables for search-result.tpl.php.
*
* @see search-result.tpl.php
*/
function openmich_preprocess_search_result(&$variables) {
  // Remove user name and modification date from search results
  $variables['info'] = '';
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function openmich_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  $form['actions']['submit'] = array(
    '#type' => 'image_button',
    '#title' => t('Search'),
    '#value' => t('Search'),
    '#src' => base_path() . drupal_get_path('theme', 'openmich') . '/images/searchicon.png',
  );

  $form['search_block_form']['#default_value'] = t('Site Search');

    // Add extra attributes to the text box
    $form['search_block_form']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Site Search';}";
    $form['search_block_form']['#attributes']['onfocus'] = "if (this.value == 'Site Search') {this.value = '';}";
    // Prevent user from searching the default text
    $form['#attributes']['onsubmit'] = "if(this.search_block_form.value=='Site Search'){ alert('Please enter a search'); return false; }";
}

function custom_menu_block_tree_alter(&$tree, &$config) {
  if ($config['delta'] == 'sidebar_menu'){
    $config['showTitle'] = false;
    $config['follow'] = '0';
    $m = (menu_get_active_trail());
    if (isset($m[1]) && isset($m[1]['mlid'])) {
      if ($m[1]['mlid'] == 522 /*find*/) {
        $config['showTitle'] = true;
        $config['follow'] = 'active';
      }

    }

  }

}