//
//  Equation.h
//  Newton-Raphson
//
//  Created by Iago Chaves on 30/11/12.
//  Copyright (c) 2012 Iago Chaves. All rights reserved.
//

#ifndef __Newton_Raphson__Equation__
#define __Newton_Raphson__Equation__

#include <iostream>

class Equation {

public:
	virtual double function(double x) = 0;
};

#endif /* defined(__Newton_Raphson__Equation__) */
