<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

    <?php if ($title_prefix || $title_suffix || $unpublished || !$page && $title): ?>
        <header>
            <?php print render($title_prefix); ?>
            <?php if (!$page && $title): ?>
                <h2 class="node-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
            <?php endif; ?>
            <?php print render($title_suffix); ?>

            <?php if ($unpublished): ?>
                <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
            <?php endif; ?>
        </header>
    <?php endif; ?>

    <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    $course_image = render($content['field_course_image']);
    hide($content['field_course_image_caption']);
    ?>
    <?php if ($course_image): ?>
        <div class="course-image-wrapper">
            <?php print $course_image;
            print render($content['field_course_image_caption']); ?>
        </div>
    <?php endif; ?>

    <?php
    print render($content);
    ?>

    <?php print render($content['links']); ?>

</article>