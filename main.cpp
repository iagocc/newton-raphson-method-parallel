//
//  main.cpp
//  Newton-Raphson
//
//  Created by Iago Chaves on 30/11/12.
//  Copyright (c) 2012 Iago Chaves. All rights reserved.
//

#include <iostream>
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
	cout << "Result: " << endl << nr->run() << endl << endl;
	
	cout << "Modified Method ";
	NewtonRaphson *nrModified = new NewtonRaphson(eq, modifiedPhi, epsilon1, epsilon2, x0);
	cout << "Result: " << endl << nrModified->run() << endl;
	
	return 0;
}

