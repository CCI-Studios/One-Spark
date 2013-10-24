<?php
/**
 * @file
 * onespark.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function onespark_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function onespark_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function onespark_image_default_styles() {
  $styles = array();

  // Exported image style: carousel_background.
  $styles['carousel_background'] = array(
    'name' => 'carousel_background',
    'label' => 'Carousel Background',
    'effects' => array(
      3 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1600,
          'height' => 535,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'carousel_background',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: widget_pinhole_thumbnail.
  $styles['widget_pinhole_thumbnail'] = array(
    'name' => 'widget_pinhole_thumbnail',
    'label' => 'Widget Pinhole Thumbnail',
    'effects' => array(
      4 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 64,
          'height' => 64,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'widget_pinhole_thumbnail',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function onespark_node_info() {
  $items = array(
    'blog_article' => array(
      'name' => t('Blog article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'carousel_item' => array(
      'name' => t('Carousel Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'partners' => array(
      'name' => t('Partners'),
      'base' => 'node_content',
      'description' => t('A company that appears in the Partners and Supporters section'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'widget_item' => array(
      'name' => t('Widget Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
