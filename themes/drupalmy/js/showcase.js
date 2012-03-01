(function ($){
  Drupal.behaviors.showcaseHover = {
    attach: function(context, settings) {
      $('.views-field-body').css('opacity', 0.8);
      $('.view-showcase li', context).once('li', function() {
        $(this).hover(function() {
          $('.views-field-body', this).stop(false, true).slideDown('fast');
        }, function() {
          $('.views-field-body', this).stop(false, true).slideUp('fast');
        });
      });
    }
  }
})(jQuery);