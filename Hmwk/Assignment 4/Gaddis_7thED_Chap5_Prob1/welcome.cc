/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 18, 2015, 11:27  AM
 * Purpose: Sum of numbers
 */

//System Libraries

#include <iostream>//I/O standard


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    int minValue=1 ; // Loop counter variable
    int maxNum; // Number that user enters
    int sum=0; //to hold the sum of the numbers
    
    // Ask user to enter a number
    
    cout<< "Enter a positive integer value :" <<endl;
    cin>> maxNum;
    
    for (minValue; minValue<=maxNum; minValue++){
        
       
        
        sum= sum + minValue;
    }
    
    cout << "The sum of the integers upto maxValue is " << sum << endl; 
            
            
    
    
    
            
    
    
   
    
    
    return 0;
}
