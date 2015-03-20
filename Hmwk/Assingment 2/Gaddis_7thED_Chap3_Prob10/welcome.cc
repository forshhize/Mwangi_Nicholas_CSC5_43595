/*
  
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 18, 2015, 11:27  AM
 * Purpose: Celsius to Fahrenheit
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
    
    float farheit,celsus,c;
    
    
    
    cout<< " What is the temperature in Celsius? "<<endl;
    cin>> c;
    
    //convert the temperature from celsius to fahrenheit
    
    farheit= 9/5.0 * c + 32 ;
    
    cout<< "The celsius temperature converted into Fahrenheit is " << farheit << endl;
    
    
            
    
    return 0;
}
