//TNBD ver.

#ifndef TURTLEBOT3_WAFFLE_H_
#define TURTLEBOT3_WAFFLE_H_

#define NAME                             "Waffle or Waffle Pi"

#define WHEEL_RADIUS                     0.0775          // meter
#define WHEEL_SEPARATION                 0.309           // meter (BURGER : 0.160, WAFFLE : 0.287)
#define TURNING_RADIUS                   0.1545          // meter (BURGER : 0.080, WAFFLE : 0.1435)
#define ROBOT_RADIUS                     0.234           // meter (BURGER : 0.105, WAFFLE : 0.220)
#define ENCODER_MIN                      -3.14159265     // raw
#define ENCODER_MAX                      3.14159265      // raw

#define MAX_LINEAR_VELOCITY              (WHEEL_RADIUS * 2 * 3.14159265359 * 77 / 60) // m/s  (BURGER : 61[rpm], WAFFLE : 77[rpm])
#define MAX_ANGULAR_VELOCITY             (MAX_LINEAR_VELOCITY / TURNING_RADIUS)       // rad/s

#define MIN_LINEAR_VELOCITY              -MAX_LINEAR_VELOCITY  
#define MIN_ANGULAR_VELOCITY             -MAX_ANGULAR_VELOCITY 

#endif  //TURTLEBOT3_WAFFLE_H_
