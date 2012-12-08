//
//  main.cpp
//  Newton-Raphson
//
//  Created by Iago Chaves on 30/11/12.
//  Copyright (c) 2012 Iago Chaves. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include "Equation.h"
#include "HeightEquation.h"
#include "Phi.h"
#include "ModifiedPhi.h"
#include "NewtonRaphson.h"

using namespace std;

int main(int argc, const char * argv[])
{
	
	double epsilon1 = 0.0;
	double epsilon2 = 0.0;
	double x0 = 0.0;
	
	cout << "Enter with Epsilon 1:" << endl;
	cout << "# ";
	scanf("%lf", &epsilon1);
	cout << endl;
	
	cout << "Enter with Epsilon 2:" << endl;
	cout << "# ";
	scanf("%lf", &epsilon2);
	cout << endl;
	
	cout << "Enter with initial h:" << endl;
	cout << "# ";
	scanf("%lf", &x0);
	cout << endl;
	
	HeightEquation *eq = new HeightEquation();
	Phi *phi = new Phi();
	ModifiedPhi *modifiedPhi = new ModifiedPhi(x0);
	
	cout << "Traditional Method ";
	NewtonRaphson *nr = new NewtonRaphson(eq, phi, epsilon1, epsilon2, x0);
	double nrResult = nr->run();
	cout << "Result: " << endl << nrResult << endl << endl;
	
	cout << "Modified Method ";
	NewtonRaphson *nrModified = new NewtonRaphson(eq, modifiedPhi, epsilon1, epsilon2, x0);
	double nrResultModifies = nrModified->run();
	cout << "Result: " << endl << nrResultModifies << endl << endl;
	
	cout << "Result:" << endl
		 << " Traditional: " << nrResult << endl
		 << " Modified: " << nrResultModifies << endl
		 << " Traditional - Modified = " << (nrResult - nrResultModifies) << endl;
	cout << "Number of iterations:" << endl
		 << " Traditional: " << nr->numberOfIterations() << endl
		 << " Modified: " << nrModified->numberOfIterations() << endl;
	
	return 0;
}

