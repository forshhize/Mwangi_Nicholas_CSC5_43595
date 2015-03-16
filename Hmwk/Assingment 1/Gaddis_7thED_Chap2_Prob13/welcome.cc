/*
 * File:   Welcome.cpp
 * Author: Nicholas Mwangi
 *
 * Created on March 15, 2015, 5:30 PM
 * Purpose: To calculate selling price of a circuit Board at a 40% profit. 
 * 
 */
//System Libraries
 

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Execution begins Here!!



int main(int argc, char**argv) {
    
    float perPrft,brdPrcs,salePrc;
    
    perPrft = 1.4;
    
    brdPrcs =12.67;
    
    salePrc = perPrft * brdPrcs;
    
    cout<< " The selling price of a circuit board that costs $12.67 at a "
            "40 % profit is $" << salePrc << endl;
    
    
    
    return 0;
}
