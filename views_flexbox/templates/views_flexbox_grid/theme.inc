<?php
/**
 * @file
 * Preprocessors and helper functions to make theming easier.
 */

use Drupal\Core\Template\Attribute;

/**
 * Prepares variables for views grid templates.
 *
 * Default template: views-flexbox-grid.html.twig.
 *
 * @param array $variables
 *   An associative array containing:
 *   - view: A ViewExecutable object.
 *   - rows: The raw row data.
 */
function template_preprocess_views_flexbox_grid(&$variables) {

  $variables['attributes']['class'][] = 'grid';
  $view = $variables['view'];
  $options = $view->style_plugin->options;
  $options['automatic_width'] = array('default' => TRUE);
  $horizontal = ($options['alignment'] === 'row');
  if (isset($options["columns"]) && $options["columns"] < 999) {
    $x =  12/$options["columns"];
    $variables["column_base"] = "grid__col-" . $x;

  }
  else {
    $variables["column_base"] = 'free-flex';
  }

  foreach (array('xs', 'sm', 'md', 'lg') as $size) {
    if (isset($options["col_" . $size])) {
      $variables["col_" . $size] = $options["col_" . $size];

      // Get the value from the size sting.
      $variables['sizes'][$size] = _views_flexbox_get_size($options["col_" . $size]);
    }

  }

  $variables['options'] = $options;
}

/**
 * Get the amount of items from the string.
 *
 * @param string $size
 *
 * @return int|FALSE
 */
function _views_flexbox_get_size($size) {
  if (preg_match('~col-[a-z]{2}-([0-9]*)~', $size, $matches)) {
    return 12 / $matches[1];
  }

  return FALSE;
}
