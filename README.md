Views Flexbox provides a style plugin for Drupal 8 views, allowing a view to be presented in Flex format.

## Usage

After installation, select "Flexbox Grid" as your views Format.

For responsive flexbox, set the number of columns for each breakpoint that requires its own setting. Views Flexbox assumes a 12-column layout. The default column number is 1 - that is, for smallest screen size a single 100% width column will be presented.

For a flexbox that autofills available space, leave the Number of Columns selection blank (and the individual breakpoint numbers too).

### CSS Requirements

The project makes available a comprehensive style sheet, adapting work done by Lee Jordan in the [Reflex project](https://github.com/leejordan/reflex).

For responsive flex grids based on unit (percentage) column width, Views Flexbox follows similar conventions to Bootstrap, with .grid__ prepended to familiar classes. So for example: .grid__col-12 .grid__col-xs-12 .grid__col-sm-6.

Copy the contents views-reflex.css to a stylesheet in your Drupal theme, or copy the entire file and include it via your theme library. Either way, you can use the Flexbox .grid properties both for flexed Views, and for your site layout in general.

To-do: allow option of including views-flexbox.css only on relevant views pages.

### Disclaimers and Limitations

Not all flexbox properties are currently accounted for in the Settings for a Flexbox view.

This is a preliminary commit. Pre-1.x versioning follows a convention x.Y.z whereby "Y" indicates how many sites we have tested Views Flexbox with.

## Installation

Install as usual for a drupal module, see [Drupal.org](https://www.drupal.org/docs/8/extending-drupal-8/installing-contributed-modules-find-import-enable-configure-drupal-8) for further information.

## License

GNU General Public License

## References

For explanations and demos of Flex container and item properties:

[Codrops](https://tympanus.net/codrops/css_reference/flexbox/)
[Philip Walton](https://philipwalton.github.io/solved-by-flexbox/)

The [Reflex project by Lee Jordan](https://github.com/leejordan/reflex)