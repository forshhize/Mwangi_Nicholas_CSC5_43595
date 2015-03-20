/*
 /* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 18, 2015, 11:27  AM
 * Purpose: Calculating Insurance to buy a property
 */

//System Libraries

#include <iostream>//I/O standard
#include <iomanip>//Formatting
#include <fstream>//I/O File
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    float replCst,insRate,insrnce;
    
    
    insRate= 0.8;
    replCst ;
    insrnce;
    
    cout<< "What is the replacement cost of the building $ ?" <<endl;
    cin>> replCst;
    
    
    //Calculate the minimum insurance for property
    
    insrnce= insRate * replCst;
    
    cout<< "The minimum insurance to be bought for the property is $" << insrnce<< "." << endl;
    
    
    
    
    
   
    
    
    return 0;
}
