//
//  NewtonRaphson.h
//  Newton-Raphson
//
//  Created by Iago Chaves on 30/11/12.
//  Copyright (c) 2012 Iago Chaves. All rights reserved.
//

#ifndef __Newton_Raphson__NewtonRaphson__
#define __Newton_Raphson__NewtonRaphson__

#include <iostream>
#include "Equation.h"

#define MAX_ITERATIONS 10000

class NewtonRaphson {
private:
	Equation *function;
	Equation *phi;
	double epsilon1;
	double epsilon2;
	double x0;
	double currentX;
	int counter;
public:
	NewtonRaphson(Equation *function, Equation *phi, double e1, double e2, double x0);
	double run();
	int numberOfIterations();
};

#endif /* defined(__Newton_Raphson__NewtonRaphson__) */
