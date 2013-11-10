//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Yang Feng on 13-11-10.
//  Copyright (c) 2013年 Yang Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject
- (void)pushOprand:(double)operand;
- (double)performOperation:(NSString *)operation;
@end
