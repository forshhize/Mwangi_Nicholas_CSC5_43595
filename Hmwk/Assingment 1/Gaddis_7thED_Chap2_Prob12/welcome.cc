/*
 * File: welcome.cc
 * Author: Nicholas Mwangi
 * 
 * Created on March 15, 2015, 3:08 PM
 * Purpose: Number of acres in a tract of land
 */

//System libraries

#include <iostream>

using namespace std;

//User Libraries
//Global Constants
//Execution begins here!!


int main(int argc, char**argv) {
    
    float oneAcre, trtLnd, trtAcre,acres;
    
    oneAcre = 43560 ;
    
    trtLnd = 389767 ;
    
    trtAcre;
    
    //calculate the acres in tract land
    
    trtAcre=trtLnd/oneAcre;
    
    cout<< "Number of acres in a tract of land with 389,767 sqft is " << trtAcre << " acres" << endl;
    
    
    
    
            
    
    
    
    
    
    return 0;
}
