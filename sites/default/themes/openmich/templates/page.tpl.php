<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div id="page">
    <div id="back-to-top-courses"></div>
  <div class="header-wrapper">
  	<header class="header" id="header" role="banner">
  	  <div class="top-bar-wrapper">
  	  	<?php print render($page['top_bar']); ?>
  	  </div>
      <div class="header-inner-wrapper">
    	<?php if ($logo): ?>
      		<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    	<?php endif; ?>
    	<?php print render($page['header']); ?>
      </div>
  </header>
</div>
<div id="top-navbar-wrapper" class="top-navbar-wrapper">
     	<?php print render($page['top_navbar']); ?>
</div>

  <div id="main">

    <div id="content" class="column" role="main">
      <?php if ($is_front): ?>
      <?php else: ?>
      	<?php print $breadcrumb; ?>
      <?php endif; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>

    <?php
      // Render the sidebars to see if there iss anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      //$sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
      </aside>
    <?php endif; ?>

  </div>

  <?php print render($page['footer']); ?>

</div>

<?php print render($page['bottom']); ?>
