//
//  Calculator.m
//  Calc_objc
//
//  Created by Hiroyuki Sano on 8/16/15.
//  Copyright (c) 2015 Hiroyuki Sano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Calculator.h"

@implementation Calculator

-(id)initWithNum:(int)_a b:(int)_b{
	if(self = [super init]){
		self->a = _a;
		self->b = _b;
	}
	return self;
}
-(int)add{
	int c = a + b;
	return c;
}
		  
@end
