#include "PID.h"
#include <iostream>
using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	PID::Kp = Kp;
	PID::Ki = Ki;
	PID::Kd = Kd;
	p_error = 0;
	i_error = 0;
	d_error = 0;
}

void PID::UpdateError(double cte) {
	// Proportional error.
	p_error = cte;

	// Integral error.
	i_error = i_error + cte;

	// Diferential error.
	d_error = cte - prev_cte;
	prev_cte = cte;

	errorSum = errorSum + cte;
}

double PID::TotalError() {
	double total_error = p_error * Kp + i_error * Ki + d_error * Kd;
	
	return total_error;
}

