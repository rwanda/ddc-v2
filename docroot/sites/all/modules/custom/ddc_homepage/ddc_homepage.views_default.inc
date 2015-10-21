<?php
/**
 * @file
 * ddc_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ddc_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Articles';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list-unstyled list-articles clearfix';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Author Image */
  $handler->display->display_options['fields']['field_author_image']['id'] = 'field_author_image';
  $handler->display->display_options['fields']['field_author_image']['table'] = 'field_data_field_author_image';
  $handler->display->display_options['fields']['field_author_image']['field'] = 'field_author_image';
  $handler->display->display_options['fields']['field_author_image']['label'] = '';
  $handler->display->display_options['fields']['field_author_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_author_image']['settings'] = array(
    'image_style' => 'teaser',
    'image_link' => '',
  );
  /* Field: Content: Special Article */
  $handler->display->display_options['fields']['field_special_article']['id'] = 'field_special_article';
  $handler->display->display_options['fields']['field_special_article']['table'] = 'field_data_field_special_article';
  $handler->display->display_options['fields']['field_special_article']['field'] = 'field_special_article';
  $handler->display->display_options['fields']['field_special_article']['label'] = '';
  $handler->display->display_options['fields']['field_special_article']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_special_article']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_special_article']['type'] = 'list_key';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<article class="special-article-[field_special_article]">
<div class="pull-left">[field_author_image]</div>
  <h3><a href="[path]">[title]</a></h3>
  [body]
</article>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $export['homepage_listing'] = $view;

  return $export;
}
