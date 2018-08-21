<?php if($view_mode == 'license_term'): ?>
	<?php if(!empty($content['field_license_image']) && !empty($content['field_license_link']) ): ?>
      <div class='link-wrapper'>
		<a target="_blank" href="<?php print $content['field_license_link']['#items'][0]['url']; ?>">
      	<?php print render($content['field_license_image'])?>
      	</a>
      </div>
  <?php elseif (!empty($content['field_license_image'])): ?>
      <div class='link-wrapper'>
      	<?php print render($content['field_license_image'])?>
      </div>
  <?php else: ?>
      <h2><?php print $term_name; ?></h2>
  <?php endif; ?>

<?php else: ?>
<div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?>">
  <?php if (!$page): ?>
    <h2><a href="<?php print $term_url; ?>"><?php print $term_name; ?></a></h2>
  <?php endif; ?>
  <div class="content">
    <?php print render($content); ?>
  </div>
</div>

<?php endif; ?>
