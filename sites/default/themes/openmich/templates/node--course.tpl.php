<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
//drupal_add_library ( 'system' , 'ui.tabs' );
//print views_embed_view('course','panel_pane_courseoverview',$node->nid);
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

    <?php if ($view_mode == 'full'): ?>
        <?php $checkMaterials = views_get_view_result('course', 'panel_pane_coursematerials', $node->nid); ?>
        <?php $checkSessions = views_get_view_result('course','panel_pane_coursesessions', $node->nid); ?>

        <?php if (!empty($checkMaterials) || !empty($checkSessions)) : ?>

            <div id="course-tabs">
                <ul>
                    <li><a href="#overview"><span>Overview</span></a></li>
                    <?php if (!empty($checkMaterials)): ?>
                        <li><a href="#materials"><span>Materials</span></a></li>
                    <?php endif; ?>
                    <?php if (!empty($checkSessions)): ?>
                        <li><a href="#sessions"><span>Sessions</span></a></li>
                    <?php endif; ?>
                </ul>

                <div id="overview">
                    <?php if ($course_image): ?>
                        <div class="course-image-wrapper">
                            <?php print $course_image;
                            print render($content['field_course_image_caption']); ?>
                        </div>
                    <?php endif; ?>

                    <div class="course-date-wrapper">
                        <?php print render($content['field_course_term_date']);
                        print render($content['field_course_published_date']);
                        print render($content['field_course_revised_date']);
                        ?>
                    </div>
                    <div class="course-content-wrapper overview">
                        <a id="back-to-top"></a>
                        <?php print render($content['field_description']);
                        print render($content['field_course_overview']); ?>
                    </div>
                </div>
                <?php if (!empty($checkMaterials)): ?>
                <div id="materials">
                    <?php if ($course_image): ?>
                        <div class="course-image-wrapper">
                            <?php print $course_image;
                            print render($content['field_course_image_caption']); ?>
                        </div>
                    <?php endif; ?>

                    <div class="course-date-wrapper">
                        <?php print render($content['field_course_term_date']);
                        print render($content['field_course_published_date']);
                        print render($content['field_course_revised_date']);
                        ?>
                    </div>
                    <div class="material-anchors">
                        <h2 class="jump-link">Jump to:</h2>
                        <?php print views_embed_view('course','panel_pane_materialanchors',$node->nid); ?>
                    </div>
                    <div class="course-content-wrapper materials">
                        <?php print views_embed_view('course','panel_pane_coursematerials',$node->nid); ?>
                    </div>
                    <div class="section-link-to-top"><a href="#back-to-top-courses">Back to Top</a></div>
                    
                </div>
                <?php endif; ?>

                <?php if (!empty($checkSessions)): ?>
                    <div id="sessions">
                        <?php if ($course_image): ?>
                            <div class="course-image-wrapper">
                                <?php print $course_image;
                                print render($content['field_course_image_caption']); ?>
                            </div>
                        <?php endif; ?>

                        <div class="course-date-wrapper">
                            <?php print render($content['field_course_term_date']);
                            print render($content['field_course_published_date']);
                            print render($content['field_course_revised_date']);
                            ?>
                        </div>
                        <div class="session-anchors">
                            <h2 class="jump-link">Jump to:</h2>
                            <?php print views_embed_view('course','panel_pane_sessionanchors',$node->nid); ?>
                        </div>
                        <div class="course-content-wrapper sessions">
                            <?php print views_embed_view('course','panel_pane_coursesessions',$node->nid); ?>
                        </div>
                        <div class="section-link-to-top"><a href="#back-to-top-courses">Back to Top</a></div>
                    </div>
                <?php endif; ?>
            </div>

        <?php else: /* just overview */ ?>

            <?php if ($course_image): ?>
                <div class="course-image-wrapper">
                    <?php print $course_image;
                    print render($content['field_course_image_caption']); ?>
                </div>
            <?php endif; ?>

            <div class="course-date-wrapper">
                    <?php print render($content['field_course_term_date']);
                    print render($content['field_course_published_date']);
                    print render($content['field_course_revised_date']);
                    ?>
            </div>
            <?php print render($content['field_description']); ?>
            <div class="course-content-wrapper overview">
                <a id="back-to-top"></a>
                <?php if (isset($content['field_course_overview'])):
                    print render($content['field_course_overview']);
                endif; ?>
            </div>
        <?php endif ?>
    <?php else: /* all other view_modes */ ?>
        <?php print render($content); ?>
    <?php endif; ?>

    <?php print render($content['links']); ?>

</article>
