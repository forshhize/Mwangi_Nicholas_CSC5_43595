/*
 File: welcome.cc
 * Author: Nicholas Mwangi
 * 
 * Created on March 15, 2015, 3:08 PM
 * Purpose: Average of Values
 */

//System Libraries

#include <iostream>

using namespace std;

//User Libraries
//Global Constants
//Execution begins here!!

int main(int argc, char**argv) {
    
    
    
    
    float one,two,three,four,five,sum,average;
    
    one = 28;
    two = 32;
    three = 37;
    four = 24;
    five =33;
    
    sum = one+two+three+four+five;
    
    average = sum/5;
    
    //display the sum
    cout<< "The sum of 28,32,37,24 and 33 is " << sum << "." <<endl;
    
    //display the average
    cout<< "The average of the sum of numbers is " << average <<"."<< endl;
    
    
            
            
            
    
    return 0;
}

