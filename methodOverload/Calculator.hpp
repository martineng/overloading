//
//  calculator.hpp
//  methodOverload
//
//  Created by Martin ENG on 21/06/2017.
//  Copyright © 2017 Martin ENG. All rights reserved.
//

#ifndef calculator_hpp
#define calculator_hpp

#include <stdio.h>

#endif /* calculator_hpp */

class Calculator
{
private:
    int number;
    
public:
    Calculator();
    Calculator(int);
    Calculator operator+(Calculator);
    void setNum(int);
    int getNum();
};
