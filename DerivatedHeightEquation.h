//
//  HeightEquation.h
//  Newton-Raphson
//
//  Created by Iago Chaves on 30/11/12.
//  Copyright (c) 2012 Iago Chaves. All rights reserved.
//

#ifndef __Newton_Raphson__DerivatedHeightEquation__
#define __Newton_Raphson__DerivatedHeightEquation__

#include <iostream>
#include "Equation.h"

class DerivatedHeightEquation : public Equation {
	
public:
	double function(double x);
};

#endif /* defined(__Newton_Raphson__DerivatedHeightEquation__) */
