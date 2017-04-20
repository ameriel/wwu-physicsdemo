<?php
/**
 * @file
 * wwu_physdemo_pieces.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wwu_physdemo_pieces_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access own webform submissions';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Relationship: Field collection item: Entity with the Reserved Dates (field_reserved_dates) */
  $handler->display->display_options['relationships']['field_reserved_dates_node']['id'] = 'field_reserved_dates_node';
  $handler->display->display_options['relationships']['field_reserved_dates_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_reserved_dates_node']['field'] = 'field_reserved_dates_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instructor_target_id']['id'] = 'field_instructor_target_id';
  $handler->display->display_options['relationships']['field_instructor_target_id']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['relationships']['field_instructor_target_id']['field'] = 'field_instructor_target_id';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['item_id']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_type'] = '0';
  $handler->display->display_options['fields']['item_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['item_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Demonstration Name */
  $handler->display->display_options['fields']['field_demonstration_name']['id'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['table'] = 'field_data_field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['field'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['label'] = '';
  $handler->display->display_options['fields']['field_demonstration_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_demonstration_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_demonstration_name']['alter']['path'] = 'reservation/[item_id]';
  $handler->display->display_options['fields']['field_demonstration_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Field collection item: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Instructor */
  $handler->display->display_options['fields']['field_instructor']['id'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['fields']['field_instructor']['field'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['label'] = '';
  $handler->display->display_options['fields']['field_instructor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instructor']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Field collection item: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Contextual filter: Field collection item: Instructor (field_instructor) */
  $handler->display->display_options['arguments']['field_instructor_target_id']['id'] = 'field_instructor_target_id';
  $handler->display->display_options['arguments']['field_instructor_target_id']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['arguments']['field_instructor_target_id']['field'] = 'field_instructor_target_id';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_instructor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Month (Staff) */
  $handler = $view->new_display('page', 'Month (Staff)', 'page_4');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access all webform results';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'reservation-calendar/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week (Staff) */
  $handler = $view->new_display('page', 'Week (Staff)', 'page_5');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access all webform results';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'reservation-calendar/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day (Staff) */
  $handler = $view->new_display('page', 'Day (Staff)', 'page_6');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access all webform results';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['item_id']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_type'] = '0';
  $handler->display->display_options['fields']['item_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['item_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Demonstration Name */
  $handler->display->display_options['fields']['field_demonstration_name']['id'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['table'] = 'field_data_field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['field'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['label'] = '';
  $handler->display->display_options['fields']['field_demonstration_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_demonstration_name']['alter']['path'] = 'reservation/[item_id]';
  $handler->display->display_options['fields']['field_demonstration_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Field collection item: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Instructor */
  $handler->display->display_options['fields']['field_instructor']['id'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['fields']['field_instructor']['field'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['label'] = '';
  $handler->display->display_options['fields']['field_instructor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instructor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'reservation-calendar/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year (Staff) */
  $handler = $view->new_display('page', 'Year (Staff)', 'page_7');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access all webform results';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'reservation-calendar/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['path'] = 'reservation-calendar/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  /* Contextual filter: Field collection item: Instructor (field_instructor) */
  $handler->display->display_options['arguments']['field_instructor_target_id']['id'] = 'field_instructor_target_id';
  $handler->display->display_options['arguments']['field_instructor_target_id']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['arguments']['field_instructor_target_id']['field'] = 'field_instructor_target_id';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_instructor_target_id']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'reservation-calendar/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['item_id']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_type'] = '0';
  $handler->display->display_options['fields']['item_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['item_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Demonstration Name */
  $handler->display->display_options['fields']['field_demonstration_name']['id'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['table'] = 'field_data_field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['field'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['label'] = '';
  $handler->display->display_options['fields']['field_demonstration_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_demonstration_name']['alter']['path'] = 'reservation/[item_id]';
  $handler->display->display_options['fields']['field_demonstration_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Field collection item: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Instructor */
  $handler->display->display_options['fields']['field_instructor']['id'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['fields']['field_instructor']['field'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['label'] = '';
  $handler->display->display_options['fields']['field_instructor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instructor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  /* Contextual filter: Field collection item: Instructor (field_instructor) */
  $handler->display->display_options['arguments']['field_instructor_target_id']['id'] = 'field_instructor_target_id';
  $handler->display->display_options['arguments']['field_instructor_target_id']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['arguments']['field_instructor_target_id']['field'] = 'field_instructor_target_id';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_instructor_target_id']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'reservation-calendar/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  /* Contextual filter: Field collection item: Instructor (field_instructor) */
  $handler->display->display_options['arguments']['field_instructor_target_id']['id'] = 'field_instructor_target_id';
  $handler->display->display_options['arguments']['field_instructor_target_id']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['arguments']['field_instructor_target_id']['field'] = 'field_instructor_target_id';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_instructor_target_id']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'reservation-calendar/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  /* Contextual filter: Field collection item: Instructor (field_instructor) */
  $handler->display->display_options['arguments']['field_instructor_target_id']['id'] = 'field_instructor_target_id';
  $handler->display->display_options['arguments']['field_instructor_target_id']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['arguments']['field_instructor_target_id']['field'] = 'field_instructor_target_id';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Date: Date (field_collection_item) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $translatables['calendar'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_reserved_dates'),
    t('User entity referenced from field_instructor'),
    t('.'),
    t('All'),
    t('Month (Staff)'),
    t('Week (Staff)'),
    t('Day (Staff)'),
    t('Comments'),
    t('Year (Staff)'),
    t('Month'),
    t('Week'),
    t('Day'),
    t('Year'),
    t('Block'),
    t('Upcoming'),
    t('Upcoming events block'),
  );
  $export['calendar'] = $view;

  $view = new view();
  $view->name = 'demonstration_catalog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Demonstration Catalog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Demonstration Catalog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_physdemo_image' => 'field_physdemo_image',
    'title' => 'title',
    'nothing' => 'nothing',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_physdemo_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_physdemo_image']['id'] = 'field_physdemo_image';
  $handler->display->display_options['fields']['field_physdemo_image']['table'] = 'field_data_field_physdemo_image';
  $handler->display->display_options['fields']['field_physdemo_image']['field'] = 'field_physdemo_image';
  $handler->display->display_options['fields']['field_physdemo_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_physdemo_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_physdemo_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Reserve this demonstration';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'reservation_form?demo_name=[title]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'demonstration' => 'demonstration',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = '!=';
  $handler->display->display_options['filters']['title']['value'] = 'Custom Demonstration';
  /* Filter criterion: Content: Equipment (field_equipment) */
  $handler->display->display_options['filters']['field_equipment_tid']['id'] = 'field_equipment_tid';
  $handler->display->display_options['filters']['field_equipment_tid']['table'] = 'field_data_field_equipment';
  $handler->display->display_options['filters']['field_equipment_tid']['field'] = 'field_equipment_tid';
  $handler->display->display_options['filters']['field_equipment_tid']['value'] = '';
  $handler->display->display_options['filters']['field_equipment_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_equipment_tid']['expose']['operator_id'] = 'field_equipment_tid_op';
  $handler->display->display_options['filters']['field_equipment_tid']['expose']['label'] = 'Equipment';
  $handler->display->display_options['filters']['field_equipment_tid']['expose']['description'] = 'Find demonstrations containing a specific piece of equipment.';
  $handler->display->display_options['filters']['field_equipment_tid']['expose']['operator'] = 'field_equipment_tid_op';
  $handler->display->display_options['filters']['field_equipment_tid']['expose']['identifier'] = 'field_equipment_tid';
  $handler->display->display_options['filters']['field_equipment_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_equipment_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_equipment_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['filters']['field_equipment_tid']['vocabulary'] = 'demonstration_equipment';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title_1']['expose']['description'] = 'Find demonstrations with names containing specific words.';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    1 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'catalog';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Catalog';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Reservation Link */
  $handler = $view->new_display('block', 'Reservation Link', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Reserve this demonstration';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'reservation_form?demo_name=[title]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'demonstration' => 'demonstration',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = '!=';
  $handler->display->display_options['filters']['title']['value'] = 'Custom Demonstration';
  $translatables['demonstration_catalog'] = array(
    t('Master'),
    t('Demonstration Catalog'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Image'),
    t('Name'),
    t('Reserve this demonstration'),
    t('Equipment'),
    t('Find demonstrations containing a specific piece of equipment.'),
    t('Find demonstrations with names containing specific words.'),
    t('Page'),
    t('Reservation Link'),
    t('All'),
  );
  $export['demonstration_catalog'] = $view;

  $view = new view();
  $view->name = 'reservation_archives';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Reservation Archives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reservation Archives';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access own webform submissions';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No reservations were found matching the criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Field collection item: Entity with the Reserved Dates (field_reserved_dates) */
  $handler->display->display_options['relationships']['field_reserved_dates_node']['id'] = 'field_reserved_dates_node';
  $handler->display->display_options['relationships']['field_reserved_dates_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_reserved_dates_node']['field'] = 'field_reserved_dates_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instructor_target_id']['id'] = 'field_instructor_target_id';
  $handler->display->display_options['relationships']['field_instructor_target_id']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['relationships']['field_instructor_target_id']['field'] = 'field_instructor_target_id';
  /* Field: Field collection item: Demonstration Name */
  $handler->display->display_options['fields']['field_demonstration_name']['id'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['table'] = 'field_data_field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['field'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['label'] = '';
  $handler->display->display_options['fields']['field_demonstration_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_demonstration_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field collection item: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['label'] = '';
  $handler->display->display_options['fields']['field_comments']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_comments']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Course Number */
  $handler->display->display_options['fields']['field_course_number']['id'] = 'field_course_number';
  $handler->display->display_options['fields']['field_course_number']['table'] = 'field_data_field_course_number';
  $handler->display->display_options['fields']['field_course_number']['field'] = 'field_course_number';
  $handler->display->display_options['fields']['field_course_number']['label'] = '';
  $handler->display->display_options['fields']['field_course_number']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Comments */
  $handler->display->display_options['fields']['field_comments_1']['id'] = 'field_comments_1';
  $handler->display->display_options['fields']['field_comments_1']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments_1']['field'] = 'field_comments';
  /* Filter criterion: Field collection item: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['description'] = 'View reservations from within a specific date range.';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    4 => '4',
    5 => '5',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-10:+1';
  /* Filter criterion: Field collection item: Course Number (field_course_number) */
  $handler->display->display_options['filters']['field_course_number_value']['id'] = 'field_course_number_value';
  $handler->display->display_options['filters']['field_course_number_value']['table'] = 'field_data_field_course_number';
  $handler->display->display_options['filters']['field_course_number_value']['field'] = 'field_course_number_value';
  $handler->display->display_options['filters']['field_course_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_number_value']['expose']['operator_id'] = 'field_course_number_value_op';
  $handler->display->display_options['filters']['field_course_number_value']['expose']['label'] = 'Course';
  $handler->display->display_options['filters']['field_course_number_value']['expose']['description'] = 'View reservations for a specific course (e.g. "P161").';
  $handler->display->display_options['filters']['field_course_number_value']['expose']['operator'] = 'field_course_number_value_op';
  $handler->display->display_options['filters']['field_course_number_value']['expose']['identifier'] = 'field_course_number_value';
  $handler->display->display_options['filters']['field_course_number_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_course_number_value']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    4 => '4',
    5 => '5',
    1 => 0,
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_instructor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Page (Staff) */
  $handler = $view->new_display('page', 'Page (Staff)', 'page_3');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access all webform results';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Demonstration Name */
  $handler->display->display_options['fields']['field_demonstration_name']['id'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['table'] = 'field_data_field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['field'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['label'] = '';
  $handler->display->display_options['fields']['field_demonstration_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_demonstration_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field collection item: Instructor */
  $handler->display->display_options['fields']['field_instructor']['id'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['fields']['field_instructor']['field'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['label'] = '';
  $handler->display->display_options['fields']['field_instructor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instructor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Course Number */
  $handler->display->display_options['fields']['field_course_number']['id'] = 'field_course_number';
  $handler->display->display_options['fields']['field_course_number']['table'] = 'field_data_field_course_number';
  $handler->display->display_options['fields']['field_course_number']['field'] = 'field_course_number';
  $handler->display->display_options['fields']['field_course_number']['label'] = '';
  $handler->display->display_options['fields']['field_course_number']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Comments */
  $handler->display->display_options['fields']['field_comments_1']['id'] = 'field_comments_1';
  $handler->display->display_options['fields']['field_comments_1']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments_1']['field'] = 'field_comments';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field collection item: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['description'] = 'View reservations from within a specific date range.';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    4 => '4',
    5 => '5',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-10:+1';
  /* Filter criterion: Field collection item: Course Number (field_course_number) */
  $handler->display->display_options['filters']['field_course_number_value']['id'] = 'field_course_number_value';
  $handler->display->display_options['filters']['field_course_number_value']['table'] = 'field_data_field_course_number';
  $handler->display->display_options['filters']['field_course_number_value']['field'] = 'field_course_number_value';
  $handler->display->display_options['filters']['field_course_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_number_value']['expose']['operator_id'] = 'field_course_number_value_op';
  $handler->display->display_options['filters']['field_course_number_value']['expose']['label'] = 'Course';
  $handler->display->display_options['filters']['field_course_number_value']['expose']['description'] = 'View reservations for a specific course (e.g. "P161").';
  $handler->display->display_options['filters']['field_course_number_value']['expose']['operator'] = 'field_course_number_value_op';
  $handler->display->display_options['filters']['field_course_number_value']['expose']['identifier'] = 'field_course_number_value';
  $handler->display->display_options['filters']['field_course_number_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_course_number_value']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    4 => '4',
    5 => '5',
    1 => 0,
  );
  $handler->display->display_options['path'] = 'reservation-archives';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'reservation-archives';

  /* Display: Single Reservation (Staff) */
  $handler = $view->new_display('page', 'Single Reservation (Staff)', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reservation Details';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access all webform results';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Demonstration Name */
  $handler->display->display_options['fields']['field_demonstration_name']['id'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['table'] = 'field_data_field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['field'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['label'] = '';
  $handler->display->display_options['fields']['field_demonstration_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_demonstration_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field collection item: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Instructor */
  $handler->display->display_options['fields']['field_instructor']['id'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['fields']['field_instructor']['field'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['label'] = '';
  $handler->display->display_options['fields']['field_instructor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instructor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Course Number */
  $handler->display->display_options['fields']['field_course_number']['id'] = 'field_course_number';
  $handler->display->display_options['fields']['field_course_number']['table'] = 'field_data_field_course_number';
  $handler->display->display_options['fields']['field_course_number']['field'] = 'field_course_number';
  $handler->display->display_options['fields']['field_course_number']['label'] = '';
  $handler->display->display_options['fields']['field_course_number']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  /* Field: Field collection item: Comments */
  $handler->display->display_options['fields']['field_comments_1']['id'] = 'field_comments_1';
  $handler->display->display_options['fields']['field_comments_1']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments_1']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments_1']['label'] = '';
  $handler->display->display_options['fields']['field_comments_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_comments_1']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_comments_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_comments_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_comments_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comments_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_comments_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_comments_1']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Copy this reservation';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'reservation_form?demo_name=[field_demonstration_name]&location=[field_location]&course=[field_course_number]&comments=[field_comments_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Cancel this reservation';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'cancel?reservation_id=[item_id]&demo_name=[field_demonstration_name]&reservation_date=[field_date]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'reservation/%';

  /* Display: Single Reservation */
  $handler = $view->new_display('page', 'Single Reservation', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reservation Details';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Demonstration Name */
  $handler->display->display_options['fields']['field_demonstration_name']['id'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['table'] = 'field_data_field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['field'] = 'field_demonstration_name';
  $handler->display->display_options['fields']['field_demonstration_name']['label'] = '';
  $handler->display->display_options['fields']['field_demonstration_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_demonstration_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field collection item: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Instructor */
  $handler->display->display_options['fields']['field_instructor']['id'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['fields']['field_instructor']['field'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['label'] = '';
  $handler->display->display_options['fields']['field_instructor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instructor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  /* Field: Field collection item: Course Number */
  $handler->display->display_options['fields']['field_course_number']['id'] = 'field_course_number';
  $handler->display->display_options['fields']['field_course_number']['table'] = 'field_data_field_course_number';
  $handler->display->display_options['fields']['field_course_number']['field'] = 'field_course_number';
  $handler->display->display_options['fields']['field_course_number']['label'] = '';
  $handler->display->display_options['fields']['field_course_number']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Copy this reservation';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'reservation_form?demo_name=[field_demonstration_name]&location=[field_location]&course=[field_course_number]&comments=[field_comments]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Cancel this reservation';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'cancel?reservation_id=[item_id]&demo_name=[field_demonstration_name]&reservation_date=[field_date]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field collection item: Instructor (field_instructor) */
  $handler->display->display_options['arguments']['field_instructor_target_id']['id'] = 'field_instructor_target_id';
  $handler->display->display_options['arguments']['field_instructor_target_id']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['arguments']['field_instructor_target_id']['field'] = 'field_instructor_target_id';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_instructor_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instructor_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'reservation/%';
  $translatables['reservation_archives'] = array(
    t('Master'),
    t('Reservation Archives'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No reservations were found matching the criteria.'),
    t('field_reserved_dates'),
    t('User entity referenced from field_instructor'),
    t('Comments'),
    t('Date'),
    t('View reservations from within a specific date range.'),
    t('Course'),
    t('View reservations for a specific course (e.g. "P161").'),
    t('Page (Staff)'),
    t('Page'),
    t('Single Reservation (Staff)'),
    t('Reservation Details'),
    t('.'),
    t('Copy this reservation'),
    t('Cancel this reservation'),
    t('All'),
    t('Single Reservation'),
  );
  $export['reservation_archives'] = $view;

  return $export;
}
