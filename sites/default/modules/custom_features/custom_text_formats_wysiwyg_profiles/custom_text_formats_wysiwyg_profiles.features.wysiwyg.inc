<?php
/**
 * @file
 * custom_text_formats_wysiwyg_profiles.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function custom_text_formats_wysiwyg_profiles_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: basic_filter
  $profiles['basic_filter'] = array(
    'format' => 'basic_filter',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'link' => 1,
          'unlink' => 1,
          'formatselect' => 1,
          'code' => 1,
          'removeformat' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
        'drupal' => array(
          'linebreaks' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: filtered_html
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'outdent' => 1,
          'indent' => 1,
          'link' => 1,
          'unlink' => 1,
          'anchor' => 1,
          'formatselect' => 1,
          'styleselect' => 1,
          'code' => 1,
          'removeformat' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
        'advlist' => array(
          'advlist' => 1,
        ),
        'drupal' => array(
          'custom_imagebox_left' => 1,
          'custom_imagebox_right' => 1,
          'custom_imagebox_left_small' => 1,
          'custom_imagebox_right_small' => 1,
          'custom_imagebox_full' => 1,
          'custom_twocolumns' => 1,
          'media' => 1,
          'linebreaks' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => 'Serif font=font-serif
Sans serif font=font-sans-serif',
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'outdent' => 1,
          'indent' => 1,
          'link' => 1,
          'unlink' => 1,
          'anchor' => 1,
          'formatselect' => 1,
          'styleselect' => 1,
          'code' => 1,
          'removeformat' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
        'advlist' => array(
          'advlist' => 1,
        ),
        'drupal' => array(
          'custom_imagebox_left' => 1,
          'custom_imagebox_right' => 1,
          'custom_imagebox_left_small' => 1,
          'custom_imagebox_right_small' => 1,
          'custom_imagebox_full' => 1,
          'custom_twocolumns' => 1,
          'media' => 1,
          'linebreaks' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => 'Serif font=font-serif
Sans serif font=font-sans-serif',
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
