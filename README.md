# Project 4 PID Controller
Self-Driving Car Engineer Nanodegree Program, Project 4

## Overview
In this project you will implement a PID controller in C++ to control a car in Udacity's simulator. 

## Basic Build Instructions
The project has the following dependencies (from Udacity's seed project):

cmake >= 3.5
make >= 4.1
gcc/g++ >= 5.4

To build the project:
1. Clone this repo.

2. Make a build directory: `mkdir build && cd build`

3. Compile: `cmake .. && make` 

   * On windows, you may need to run: `cmake .. -G "Unix Makefiles" && make`
   
4. Run it: ` ./pid '

To run the code:

Set the build directory as current directory, then run  ./pid.

The following words will be shown on screen: Listening to port 4567.

Then run the simulator. In the main menu screen select Project 4: PID Controller

## Describe the effect each of the P, I, D components had in your implementation.

A PID(proportional–integral–derivative) controller is a control loop feedback controller which is widely used in industry control systems.

Cross-track error(cte) is calculated continuously by the PID controller:

cte = desired point - measured point

The proportional term P is proportional to the current value of cte. In this project, the steer value is adjusted by the P controller to keep the car drive toward the reference trajectory. But P will overshoot and cause oscillations.

The integral term I accounts for the past value of cte and integrates them over time. If there is a residual error after the application of proportional control P, the integral term I seeks to eliminate the bias.

The differential term D helps to reduce the oscillations. It is effectively seeking to reduce the effect of the error by applying a control influence based on the rate of error change. The more rapid the error change, the greater the controlling or dampening effect.


## Describe how the final hyperparameters were chosen.

If using P, I, D controller seperately, the car will go out of the road quickly. The parameters of P, I, and D are tuned manually. Start from the PD controller, set Kp = 1, Ki = 0, Kd =1; then the values of Kp and Kd are tuned to make the car go long the road. If chosing kp - 0.2 and kd = 2, the car can go along the road smoothly. Then the value of Ki is tuned. The final selected parameters are:

Kp = 0.2, Ki = 0.001, Kd = 2.0



