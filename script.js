(function ($, Drupal, window, document, undefined) {
	Drupal.behaviors.reservationFormDefaultEndTime = {
    attach: function (context) {
      var $start_hour_control = $('.node-webform form .webform-component--start-time select.hour');
	  var $end_hour_control = $('.node-webform form .webform-component--end-time select.hour');
	  var $start_minute_control = $('.node-webform form .webform-component--start-time select.minute');
	  var $end_minute_control = $('.node-webform form .webform-component--end-time select.minute');
	  $start_hour_control.on("change", setTime);
	  $start_minute_control.on("change", setTime);
	  $('#edit-submitted-start-time-ampm-am').on("change", setTime);
	  $('#edit-submitted-start-time-ampm-pm').on("change", setTime);
	  function setTime() {
		var isAm = false;
		if ($('#edit-submitted-start-time-ampm-am').is(':checked')) {
		  isAm = true;
		}
		var end_hour = parseInt($start_hour_control.val()) + 1;
		if (end_hour == 13) {
		  end_hour = 1;
		} else if (end_hour == 12) {
		  isAm = !isAm; // toggle bool
		}
		$end_hour_control.val(end_hour);
		var end_minute = parseInt($start_minute_control.val()) + 0;
		$end_minute_control.val(end_minute);
		// setting am/pm
		if (isAm) {
		  $('#edit-submitted-end-time-ampm-am').prop("checked", true); 
		} else {
		  $('#edit-submitted-end-time-ampm-pm').prop("checked", true);
		}
	  }
    }
  };	
})(jQuery, Drupal, this, this.document);