# AVC_2015_TEMP
Temporary repository for AVC code until TGD's repository is set up.

This is the codebase for The Gizmo Dojo's 2015 Sparkfun AVC entry. Documentation will be sketchy,
but the basics should be here.

I've written the beginnings of a library for our very specific hardware setup. This is designed to prevent
damage to the control board.

The following commands can be used to move the car:

init_movement();&nbsp;&nbsp;&nbsp;&nbsp; // Please call this at the beginning of setup(). It prevents floating voltages.
move_forward(time_in_ms);&nbsp;&nbsp;&nbsp;&nbsp;         // This moves forward <time_in_ms> and coasts.
move_forward_stop(time_in_ms);&nbsp;&nbsp;&nbsp;&nbsp;    // This moves forward <time_in_ms> and stops.
move_reverse(time_in_ms);&nbsp;&nbsp;&nbsp;&nbsp;         // This moves backwards <time_in_ms> and coasts.
move_reverse_stop(time_in_ms);&nbsp;&nbsp;&nbsp;&nbsp;    // This moves backwards <tim_in_ms> and stops.
wheels_left();&nbsp;&nbsp;&nbsp;&nbsp;                    // This turns the wheels to the left position.
wheels_right();&nbsp;&nbsp;&nbsp;&nbsp;                   // This turns the wheels to the right position.
wheels_center();&nbsp;&nbsp;&nbsp;&nbsp;                  // This turns the wheels to the center (or straight) position.

More commands may be added if they are deemed useful.
