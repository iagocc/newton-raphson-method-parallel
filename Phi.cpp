//
//  Phi.cpp
//  Newton-Raphson
//
//  Created by Iago Chaves on 30/11/12.
//  Copyright (c) 2012 Iago Chaves. All rights reserved.
//

#include "Phi.h"
#include <cmath>
#include "HeightEquation.h"
#include "DerivatedHeightEquation.h"

double Phi::function(double x) {
	HeightEquation *fn = new HeightEquation();
	DerivatedHeightEquation *fdash = new DerivatedHeightEquation();

	return std::abs((x - ( fn->function(x) / fdash->function(x) ) )) ;
}
