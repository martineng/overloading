//
//  calculator.cpp
//  methodOverload
//
//  Created by Martin ENG on 21/06/2017.
//  Copyright © 2017 Martin ENG. All rights reserved.
//

#include "calculator.hpp"
#include <iostream>
#include "time.h"

using namespace std;

Calculator::Calculator()
{
}

Calculator::Calculator(int inNum)
{
    setNum(inNum);
}

Calculator Calculator::operator+(Calculator inCalc)
{
    /* This is Operator Overloading
     * It takes an int from Object A + an int from Object B.
     * Result is stored in Object C which will be returned.
     */
    
    Calculator theCalc;
    
    // Similar to [ C.num = A.num + B.num ] OR
    // [ exportObject.num = currentObject.num + importObject.num ]
    theCalc.setNum(getNum() + inCalc.getNum());
    
    return theCalc;
}

void Calculator::setNum(int inNum)
{
    number = inNum;
}

int Calculator::getNum()
{
    return number;
}
