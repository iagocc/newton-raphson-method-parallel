//
//  ModifiedPhi.h
//  Newton-Raphson
//
//  Created by Iago Chaves on 07/12/12.
//  Copyright (c) 2012 Iago Chaves. All rights reserved.
//

#ifndef __Newton_Raphson__ModifiedPhi__
#define __Newton_Raphson__ModifiedPhi__

#include <iostream>
#include "Equation.h"

class ModifiedPhi : public Equation {
	double x0;
public:
	ModifiedPhi(double x0);
	double function(double x);
};


#endif /* defined(__Newton_Raphson__ModifiedPhi__) */
