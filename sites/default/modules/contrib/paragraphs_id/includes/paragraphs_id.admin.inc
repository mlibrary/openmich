<?php

/**
 * @file
 * Admin include file for Paragraphs ID.
 */

/**
 * Menu callback function for settings form.
 */
function paragraphs_id_settings_form($form, &$form_state) {
  $form[PI_PARAGRAPHS_ITEM_ID_PREFIX] = array(
    '#type' => 'textfield',
    '#title' => t('Paragraphs ID class prefix'),
    '#description' => t('Prefix that is used for paragraphs item class IDs. Default prefix is "@default"', array('@default' => PI_PARAGRAPHS_ITEM_ID_PREFIX_DEFAULT)),
    '#default_value' => variable_get(PI_PARAGRAPHS_ITEM_ID_PREFIX, PI_PARAGRAPHS_ITEM_ID_PREFIX_DEFAULT),
  );
  return system_settings_form($form);
}
