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
	double n1, n2;
	int i;
	
	cout.precision(10);
	
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
	
	NewtonRaphson *nr = new NewtonRaphson(eq, phi, epsilon1, epsilon2, x0);
	NewtonRaphson *nrModified = new NewtonRaphson(eq, modifiedPhi, epsilon1, epsilon2, x0);
	
	cout << "Iteration \tTraditional Method \tModified Method \tTM - MM" << endl;
	while(nr->hasNext() || nrModified->hasNext()) {
		
		if(nr->numberOfIterations() > nrModified->numberOfIterations()) {
			i = nr->numberOfIterations();
		} else {
			i = nrModified->numberOfIterations();
		}
		
		cout << i << "\t\t";
		
		if(nr->hasNext()) {
			cout << (n1 = nr->next()) << "\t\t";
		} else {
			cout << "# " << (n1 =nr->actual()) << " \t\t";
		}
		
		if(nrModified->hasNext()) {
			cout << (n2 = nrModified->next()) << "\t\t";
		} else {
			cout << "#" << (n2 = nrModified->actual()) << "\t\t";
		}
		
		cout << n1 - n2 << endl;
	}
	
	cout << "Traditional Method Result: " << n1 << " After " << nr->numberOfIterations() << " iterations." << endl;
	cout << "Modified Method Result: " << n2 << " After " << nrModified->numberOfIterations() << " iterations." << endl;
	
	return 0;
}

