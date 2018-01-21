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

cte = desired_point - measured_point

The proportional term P is proportional to the current value of cte. In this project, the steer value is adjusted by the controller to keep the car drive along the center line. If used along, the car overshoots the central line very easily and go out of the road very quickly. 

The integral portion tries to eliminate a possible bias on the controlled system that could prevent the error to be eliminated. If used along, it makes the car to go in circles. In the case of the simulator, no bias is present. 

The differential portion helps to counteract the proportional trend to overshoot the center line by smoothing the approach to it. 

## Describe how the final hyperparameters were chosen.

