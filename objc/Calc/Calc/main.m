//
//  main.m
//  Calc
//
//  Created by Hiroyuki Sano on 8/16/15.
//  Copyright (c) 2015 Hiroyuki Sano. All rights reserved.
//

#import "Calculator.h"

int main(int argc, const char * argv[]) {
	@autoreleasepool {
		Calculator * calc = [[Calculator alloc]initWithNum: 1 b:2];
		int result = [calc add];
		NSLog(@"%d",result);
	}
    return 0;
}
