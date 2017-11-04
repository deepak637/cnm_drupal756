<?php
/**
 * @file
 * course.features.inc
 */

/**
 * Implements hook_node_info().
 */
function course_node_info() {
  $items = array(
    'course_' => array(
      'name' => t('Course_'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
