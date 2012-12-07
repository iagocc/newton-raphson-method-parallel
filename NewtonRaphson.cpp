//
//  NewtonRaphson.cpp
//  Newton-Raphson
//
//  Created by Iago Chaves on 30/11/12.
//  Copyright (c) 2012 Iago Chaves. All rights reserved.
//

#include "NewtonRaphson.h"
#include <cmath>

using namespace std;

NewtonRaphson::NewtonRaphson(Equation *function, Equation *phi, double epsilon1, double epsilon2, double x0) {
	this->function = function;
	this->phi = phi;
	this->epsilon1 = epsilon1;
	this->epsilon2 = epsilon2;
	this->x0 = x0;
	currentX = x0;
}

double NewtonRaphson::run() {

	int counter = 0;
	cout << "  x" << counter << " = " << currentX << endl;

	while((abs(this->phi->function(this->currentX)) > this->epsilon1) &&
		  (abs(this->phi->function(this->currentX) - currentX ) > this->epsilon2)) {

		if(counter == MAX_ITERATIONS) {
			cout << "Number of iterations overstepped the limit." << endl;
			return currentX;
		}

		currentX = this->phi->function(this->currentX);
		counter++;
		
		cout << "  x" << counter << " = " << currentX << endl;

	}
	return currentX;
}