<?php
/**
 * @file
 * humanitarianresponse_sitrep.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_sitrep_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_hr_sitrep';
  $strongarm->value = 1;
  $export['autosave_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_hr_sitrep';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_hr_sitrep';
  $strongarm->value = 'Cluster Update: [node:field_cluster]';
  $export['auto_entitylabel_pattern_node_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_hr_sitrep';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_hr_sitrep';
  $strongarm->value = 0;
  $export['comment_anonymous_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_hr_sitrep';
  $strongarm->value = '1';
  $export['comment_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_hr_sitrep';
  $strongarm->value = 1;
  $export['comment_default_mode_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_hr_sitrep';
  $strongarm->value = '50';
  $export['comment_default_per_page_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_hr_sitrep';
  $strongarm->value = 1;
  $export['comment_form_location_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_hr_sitrep';
  $strongarm->value = '1';
  $export['comment_preview_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_hr_sitrep';
  $strongarm->value = 1;
  $export['comment_subject_field_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_hr_sitrep';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_hr_sitrep';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_hr_sitrep';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_hr_sitrep';
  $strongarm->value = '1';
  $export['node_preview_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_hr_sitrep';
  $strongarm->value = 0;
  $export['node_submitted_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_hr_sitrep';
  $strongarm->value = 1;
  $export['show_diff_inline_hr_sitrep'] = $strongarm;

  return $export;
}
