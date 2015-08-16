//
//  calc.cpp
//  Calc
//
//  Created by Hiroyuki Sano on 8/16/15.
//  Copyright (c) 2015 Hiroyuki Sano. All rights reserved.
//

#include "calculator.h"

calculator::calculator(int a, int b){
	this->a = a;
	this->b = b;
}

int calculator::add(){
	int c = a + b;
	return c;
}