/*
 /* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 18, 2015, 11:27  AM
 * Purpose: Cost of operating an automobile
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
    
    float loanPmt,insrnce,gas,oil,tires,mntnace;
    float annlExp;
    
    cout<< "What is the monthly loan payment $ ?" << endl;
    cin>> loanPmt;
    
    cout<< "What is the monthly insurance payment $ ?" << endl;
    cin>> insrnce;
    
    cout<< "What is the monthly cost for gas $ ?" << endl;
    cin>> gas;
    
    cout<< "What is the monthly cost for tires $ ?" << endl;
    cin>> tires;
    
    cout<< "What is the monthly cost for maintenance $ ?" << endl;
    cin>> mntnace;
    
    //Calculate the annual cost of these expenses
    
    annlExp= loanPmt + insrnce + gas + oil + tires + mntnace;
    
    cout<< "The total annual cost of automobile expenses is $" <<annlExp<< "." <<endl;
    
    
    
    
    
    
            
    
    return 0;
}
