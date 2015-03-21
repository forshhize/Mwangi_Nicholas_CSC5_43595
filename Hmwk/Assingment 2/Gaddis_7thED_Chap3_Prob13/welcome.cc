/*
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 18, 2015, 11:27  AM
 * Purpose: Property Tax
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
    
    float actValu; //actual value of a property
    
    float assValu; //Assessed Value
    
    float prtpTax; //Property Tax
    
    float assRate;
    
    float prtTaxRe; //Property tax rate
    
    prtTaxRe =0.64/100;
    
    assRate= 0.6;
    
    cout<< "What is the value of the property  ? " <<endl;
    cin>> actValu;
    
    //calculate assessment value
    
    assValu= actValu * assRate;
    
    cout<< "The assessment value of the property " << "$" << assValu << "."<<endl;
    
    prtpTax= assValu* prtTaxRe;
    
    
    cout<< "The property tax is " << "$"<< prtpTax<< "." <<endl;
    
    
            
            
    
    return 0;
}
