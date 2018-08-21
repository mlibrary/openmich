<?php
/**
 * @file field--fences-div.tpl.php
 * Wrap each field value in the <div> element.
 *
 * @see http://developers.whatwg.org/grouping-content.html#the-div-element
 */
// was not putting colon for funding but for the moment disabling and showing the colon as default
$print_colon = $element['#bundle'] == 'funding' ? ':' : ':';

?>
<?php if ($element['#label_display'] == 'inline'): ?>
  <span class="field-label label-<?php print $element['#field_name'];?>"<?php print $title_attributes; ?>>
    <?php print $label;?><?php print $print_colon;?></span>
<?php elseif ($element['#label_display'] == 'above'): ?>
  <h3 class="field-label label-<?php print $element['#field_name'];?>"<?php print $title_attributes; ?>>
    <?php print $label; ?>
  </h3>
<?php endif; ?>

<?php foreach ($items as $delta => $item): ?>
  <div class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <?php print render($item); ?>
  </div>
<?php endforeach; ?>
