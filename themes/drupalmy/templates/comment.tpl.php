<article<?php print $attributes; ?>>
  <header>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <h3<?php print $title_attributes; ?>><?php print $title ?></h3>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php if ($new): ?>
      <em class="new"><?php print $new ?></em>
    <?php endif; ?>
    <?php if (isset($unpublished)): ?>
      <em class="unpublished"><?php print $unpublished; ?></em>
    <?php endif; ?>
  </header>

  <div class="submitted-wrapper clearfix">
    <?php if (isset($comment->picture->uri)): ?>
      <div class="submitted-pic"><?php print theme('image_style', array('style_name' => 'node_pic', 'path' => $comment->picture->uri)); ?></div>
    <?php endif; ?>

    <div class="submitted-name"><?php print $author; ?></div>
    <div class="submitted-created"><?php print t('posted on ') . format_date($comment->created, 'custom', 'F j, Y - g:ia'); ?></div>
  </div>

  <div<?php print $content_attributes; ?>>
    <?php
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php if ($signature): ?>
    <div class="user-signature"><?php print $signature ?></div>
  <?php endif; ?>

  <?php if (!empty($content['links'])): ?>
    <nav class="links comment-links clearfix"><?php print render($content['links']); ?></nav>
  <?php endif; ?>

</article>
