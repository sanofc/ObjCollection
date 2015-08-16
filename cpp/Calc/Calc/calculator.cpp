//
//  calc.cpp
//  Calc
//
//  Created by Hiroyuki Sano on 8/16/15.
//  Copyright (c) 2015 Hiroyuki Sano. All rights reserved.
//

#include <stdio.h>
#include "calculator.h"

calculator::calculator(int a, int b){
	this->a = a;
	this->b = b;
}

int calculator::add(){
	int c = this->a + this->b;
	return c;
}