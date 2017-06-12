//
//  Adder.cpp
//  Adder - Return the sum of any number of parameters.
//
//  Created by Remel Kabir on 6/6/17.
//
//


//Using Variadic Templates to get the sum of the parameters.

#include <iostream>
using namespace std;

//base case function, if only one parameter then just return the value
template <class Param>
double sum (Param param){
    return param;
}//end of base case

//recursive function to go though the rest of the parameter till it hit the base case.
//Variadic template to take a variable number of arguments regardless of the datatype
template <class Param, class... RestParam>
double sum (Param param, RestParam... restParam){
    return param + sum (restParam...); // adding the sum
}//end of recursion

//Main Thread
int main() {
    //testing
    cout << sum (1, 2, 3) <<endl;
    cout << sum (10, 20) <<endl;
    cout << sum (1, 2, 3.0987, 4.12) <<endl;
    cout << sum (20, 25, 55) <<endl;
    cout << sum (1,2,4,5,645,1334, 2435) <<endl;
}
