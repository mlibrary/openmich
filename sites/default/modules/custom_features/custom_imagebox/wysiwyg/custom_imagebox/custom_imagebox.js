/**
 * @file
 *
 * This is a fairly generic WYSIWYG plugin that inserts markup from the plugin
 * definition's settings array.
 *
 * @see custom_imagebox.inc
 */

(function ($) {

// Both of the imagebox buttons use the same plugin code.
var insertTemplate = {

  /**
   * Insert the markup template when the WYSIWYG toolbar button is clicked.
   */
  invoke: function(data, settings, instanceId) {
    // Get a range object for the current selection.
    var range;
    if (tinymce) {
      range = tinymce.activeEditor.selection.getRng(true);
    }
    else {
      // Dummy range object.
      range = { startOffset: 0, endOffset: 0, endContainer: {length: 0}};
    }

    // Add empty paragraphs so that the user can add text before and after the
    // template markup if this is the first or last item in the WYSIWYG.
    var prefix = suffix = '<p>&nbsp;</p>';
    if (range.startOffset > 0 || $(data.node).prev().length) {
      prefix = '';
    }

    if (range.endContainer.length > range.endOffset || $(data.node).next().length) {
      suffix = '';
    }

    // Wrap and insert the template.
    var content = prefix + settings.template + suffix;
    Drupal.wysiwyg.instances[instanceId].insert(content);
  }

};

// Assign the plugin to both imagebox buttons.
Drupal.wysiwyg.plugins.custom_imagebox_left = insertTemplate;
Drupal.wysiwyg.plugins.custom_imagebox_right = insertTemplate;
Drupal.wysiwyg.plugins.custom_imagebox_left_small = insertTemplate;
Drupal.wysiwyg.plugins.custom_imagebox_right_small = insertTemplate;
Drupal.wysiwyg.plugins.custom_imagebox_full = insertTemplate;

})(jQuery);
