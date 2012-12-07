//
//  HeightEquation.cpp
//  Newton-Raphson
//
//  Created by Iago Chaves on 30/11/12.
//  Copyright (c) 2012 Iago Chaves. All rights reserved.
//

#include "DerivatedHeightEquation.h"
#include <math.h>

double DerivatedHeightEquation::function(double x) {
	return ( 3*pow(x,2) - 9 );
}