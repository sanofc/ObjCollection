//
//  main.cpp
//  Calc
//
//  Created by Hiroyuki Sano on 8/16/15.
//  Copyright (c) 2015 Hiroyuki Sano. All rights reserved.
//

#include <iostream>
#include <memory>
#include "calculator.h"

using namespace std;

int main(int argc, const char * argv[]) {
	
	//calculator *calc = new calculator(1,2);
	unique_ptr<calculator> calc(new calculator(1,2));
	int result = calc->add();
	cout << result << endl;
	//delete calc;
	return 0;
	
}
