<?php
/**
 * @file
 * Template file for article full view.
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <article>
    <div class="media">
      <div class="pull-right col-md-3">
        <?php print render($content['field_author']); ?>
        <?php print render($content['field_author_image']); ?>
        <?php print render($content['field_author_description']); ?>
      </div>
      <div class="media-body col-md-8">
        <h1><?php print $title; ?></h1>
        <h2><?php print render($content['field_subtitle']); ?></h2>
        <div class="article-date"><?php print format_date($node->created, 'article'); ?></div>
        <!--render value output for testing-->
        <?php print render($content['body']); ?>
        <?php print render($content['field_image']); ?>
      </div>
    </div>
  </article>
</div>
