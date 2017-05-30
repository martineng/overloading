# overloading-cpp
This is a simple calculator console program builded with Xcode to demonstrate the implementation of method overloading.

# What is Method Overloading?
Overloading is a programming implementation which given server functions/methods with a same name with different parameter. This implementation will often being seen in Object Orientated Programming Design, which we usually have a Null Constructor, Copy Constructor and zero or multiple Alternate Constructor. An example of non-object orientated implementation from this sample program is the multiple methods named 'calculate()'.

The calculate method in this program consist of:
1) calculate()
2) calculate(bool)
3) calculate(int)
4) calculate(int, int)

# What is this console program going to do?
This program will randomly generate 10 numbers, when the method 'calculate()' is called, the program will execute methematic calculation to find the sum, the multiplication, the sum with a maximum range or the sum within a specific range.

# calculate()
This method is the base form with no parameters. It will simply totaling up 10 random numbers.

# calculate(bool)
This method accept a boolean as parameter. When a ture is received, the program will multiply all 10 random numbers.

# calculate(int)
This method take an int as parameter. The imported parameter indicated the maximum position. The program will up all the random number up to position of the imported parameter.

# calculate(int, int)
This method take two int as parameters. The program will sum up the total number from position of the first int until the second int.
