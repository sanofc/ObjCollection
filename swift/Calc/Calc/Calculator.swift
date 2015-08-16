//
//  Calculator.swift
//  Calc_swift
//
//  Created by Hiroyuki Sano on 8/16/15.
//  Copyright (c) 2015 Hiroyuki Sano. All rights reserved.
//

class Calculator:CalculatorProtocol{
	var a: Int
	var b: Int
	
	init(a: Int, b: Int){
		self.a = a
		self.b = b
	}
	func add() -> Int{
		let c = a + b
		return c
	}
}