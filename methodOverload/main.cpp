//
//  main.cpp
//  methodOverload
//
//  Created by Martin ENG on 9/05/2017.
//  Copyright © 2017 Martin ENG. All rights reserved.
//

#include <iostream>
#include "time.h"
#include "Calculator.hpp"

using namespace std;

void initializeProgram();
void outputArray();
void freeNumberArray();
int generateRandomNumber(int, int);
int calculate();
int calculate(bool);
int calculate(int);
void runOperatorOverloading();
int requestMax();
void printMenu();
int processSelection();


int* numberArray;

int main()
{
    srand(time(NULL));
    initializeProgram();
    
    do
    {
        printMenu();
    } while (processSelection() != 0);
    
    return 0;
}// END main()

void initializeProgram()
{
    numberArray = new int[10];
    
    for (int index = 0; index < 10; index++)
    {
        numberArray[index] = generateRandomNumber(1,100);
    }// END for
}// END initializeProgram()

void outputArray()
{
    for (int index = 0; index < 10; index++)
    {
        cout << "[ "<<numberArray[index] << " ]" << endl;
    }// END for
    
    cout << endl;
}// END outputArray()

void freeNumberArray()
{
    delete[] numberArray;
}//END freeNumberArray()

int generateRandomNumber(int inMin, int inMax)
{
    return (rand()% inMax + inMin);
}// END generateRandomNumber()


int calculate()
{
    int sum = 0;
    
    for (int index = 0; index <= 10; index++)
    {
        sum = sum + numberArray[index];
    } // END for
    
    return sum;
}

int calculate(bool inIsMultiplication)
{
    int total = 1;
    
    if (inIsMultiplication)
    {
        for (int index = 0; index <= 10; index++)
        {
            total = total * numberArray[index];
        }// END for
    }// END if
    
    return total;
}

int calculate(int inMax)
{
    int total = 0;
    
    for (int index = 0; index != inMax; index++)
    {
        total = total + numberArray[index];
    }// END for
    
    return total;
}

void runOperatorOverloading()
{
    int inputNum;
    
    cout << "Please enter a number for the 1st object: " << endl;
    cin >> inputNum;
    
    Calculator Calc_1st(inputNum);
    
    cout << "Please enter a number for the 2nd object: " << endl;
    cin >> inputNum;
    
    Calculator Calc_2nd(inputNum);
    
    Calculator Calc_final;
    
    //Operator Overloading.
    // Eliminating: [ Calc_final = Calc_1st.add(Calc_2nd) ]
    Calc_final = Calc_1st + Calc_2nd;
    
    cout << Calc_1st.getNum() << " + " << Calc_2nd.getNum() << " = " << Calc_final.getNum() << endl;
}


int requestMax()
{
    int max = 0;
    
    cout << "Please enter your maximum range (<= 10)" << endl;
    cin >> max;
    cout << endl << "MAX RANGE : " << max << endl;
    
    return max;
}

void printMenu()
{
    cout << "_______________________________________" << endl;
    cout << " (1) Generate 10 random numbers" << endl;
    cout << " (2) Calculate the total" << endl;
    cout << " (3) Calculate the sum of multiplication" << endl;
    cout << " (4) Calculate the total with maximum range (2 ~ 10)" << endl;
    cout << " (5) Operator overloading with +" << endl;
    cout << " (0) Exit" << endl;
    cout << " Please choose: ";
}// END printMenu()

int processSelection()
{
    int selection = 0;
    
    cin >> selection;
    
    switch (selection)
    {
        case 1:
            freeNumberArray();
            initializeProgram();
            outputArray();
            break;
        case 2:
            outputArray();
            cout << "TOTAL SUM = " << calculate() << endl;
            cout << endl;
            break;
        case 3:
            outputArray();
            cout << "TOTAL MULTIPLICATION = " << calculate(true) << endl;
            break;
        case 4:
            outputArray();
            cout << "TOTAL SUM WITH RANGE = " << calculate(requestMax()) << endl;
            break;
        case 5:
            runOperatorOverloading();
            break;
        case 0:
            break;
        default:
            cout << "INVALI INPUT" << endl;
            selection = 0;
            break;
    } // END switch()
    
    return selection;
}// END processSelection()
