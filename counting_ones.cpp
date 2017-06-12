//
//  Couting_ones.cpp
//  Counting 1's of a Given Number.
//  For example: 12312, in this given number there are two 1's.
//
//  Created by Remel Kabir on 6/12/17.
//  Copyright © 2017 Remel Kabir. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    long int givenNumber, counter = 0;
    cout << "Please enter a number: ";
    cin >> givenNumber;
    while( givenNumber > 0 ){
        if( givenNumber % 10 == 1 ){ //returns the last digit of the integer
            counter++;
        }
        givenNumber = givenNumber/10; //removes the last digit of the integer
    }
    cout << "Total Number of 1's: " << counter <<endl;
}
