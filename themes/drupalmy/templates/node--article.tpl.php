<?php
  $user = user_load($node->uid);
?>
<article<?php print $attributes; ?>>

  <?php if (!$page && $title): ?>
  <header>
    <?php print render($title_prefix); ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
    <?php print render($title_suffix); ?>
  </header>
  <?php endif; ?>
  
  <?php if ($display_submitted): ?>
    <div class="submitted-wrapper clearfix">
      <?php if (!empty($user->picture)): ?>
        <div class="submitted-pic"><?php print theme('image_style', array('style_name' => 'node_pic', 'path' => $user->picture->uri)); ?></div>
      <?php endif; ?>

	    <div class="submitted-name"><?php print $name; ?></div>
      <div class="submitted-created">posted <?php print format_interval(REQUEST_TIME - $node->created) . t(' ago'); ?></div>
    </div>
  <?php endif; ?>  
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>
  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>

  <div class="node-end-wrapper">
    <div class="node-end-line"></div>
    <div class="node-end-line-icon"></div>
  </div>
</article>
