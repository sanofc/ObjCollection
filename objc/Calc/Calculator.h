//
//  Calculator.h
//  Calc_objc
//
//  Created by Hiroyuki Sano on 8/16/15.
//  Copyright (c) 2015 Hiroyuki Sano. All rights reserved.
//

#ifndef Calc_objc_Calculator_h
#define Calc_objc_Calculator_h

#import <Foundation/Foundation.h>

@interface Calculator : NSObject{
@private
	int a,b;
}
-(id)initWithNum:(int)a b: (int)b;
-(int)add;
@end
#endif
