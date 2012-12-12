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
	this->currentX = x0;
	this->counter = 0;
}

double NewtonRaphson::actual() {
	return currentX;
}

double NewtonRaphson::next() {
	if(hasNext()) {

		this->currentX = this->phi->function(this->currentX);
		counter++;

	} else {
		cout << "###ERROR####################"<< endl;
	}
	
	return currentX;
}

bool NewtonRaphson::hasNext() {
	if((abs(this->function->function(this->currentX)) > this->epsilon1) &&
	   (abs(this->function->function(this->currentX) - currentX ) > this->epsilon2)) {
		
		if(counter == MAX_ITERATIONS) {
			cout << "Number of iterations overstepped the limit." << endl;
			return false;
		}
		
		return true;
	}
	return false;
}

int NewtonRaphson::numberOfIterations() {
	return counter;
}
