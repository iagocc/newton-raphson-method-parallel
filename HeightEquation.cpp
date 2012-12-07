//
//  HeightEquation.cpp
//  Newton-Raphson
//
//  Created by Iago Chaves on 30/11/12.
//  Copyright (c) 2012 Iago Chaves. All rights reserved.
//

#include "HeightEquation.h"
#include <math.h>

double HeightEquation::function(double x) {
	return ( pow(x, 3) - (9*x) + (3) );
}