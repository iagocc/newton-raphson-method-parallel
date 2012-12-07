//
//  Phi.h
//  Newton-Raphson
//
//  Created by Iago Chaves on 30/11/12.
//  Copyright (c) 2012 Iago Chaves. All rights reserved.
//

#ifndef __Newton_Raphson__Phi__
#define __Newton_Raphson__Phi__

#include <iostream>
#include "Equation.h"

class Phi : public Equation {
	
public:
	double function(double x);
};


#endif /* defined(__Newton_Raphson__Phi__) */
