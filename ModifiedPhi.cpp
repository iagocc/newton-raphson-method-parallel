//
//  ModifiedPhi.cpp
//  Newton-Raphson
//
//  Created by Iago Chaves on 07/12/12.
//  Copyright (c) 2012 Iago Chaves. All rights reserved.
//

#include "ModifiedPhi.h"
#include <cmath>
#include "HeightEquation.h"
#include "DerivatedHeightEquation.h"

ModifiedPhi::ModifiedPhi(double x0) {
	this->x0 = x0;
}

double ModifiedPhi::function(double x) {
	HeightEquation *fn = new HeightEquation();
	DerivatedHeightEquation *fdash = new DerivatedHeightEquation();
	
	return (x - ( fn->function(x) / fdash->function(this->x0) ) ) ;
}