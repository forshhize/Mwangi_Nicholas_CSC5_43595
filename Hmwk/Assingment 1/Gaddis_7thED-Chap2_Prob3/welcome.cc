/*
 File: welcome.cc
 * Author: Nicholas Mwangi
 * 
 * Created on March 13, 2015, 3:08 PM
 * Purpose: To calculate total sales tax
 * 
 */

//system libraries
//Global constants
//Function Prototypes
//Execution starts here!



#include <iostream>

using namespace std;

int main(int argc, char**argv) {
    
    float puchase,StTax,Stotal, Ctotal,CntyTax,tax ;
    
    
    puchase = 52;
    
    StTax = 0.04;
    
    CntyTax = 0.02;
    
    tax;
    
    
    
    
    //calculate state tax
    
    Stotal = puchase * StTax;
    
    //Calculate County tax
    
    Ctotal = puchase * CntyTax;
    
    //Calculate total tax
    
    tax = Stotal+Ctotal;
    
    //Display state tax
    cout<<" State tax is $" << Stotal << endl;
    
    //Display County tax
    cout<< "County tax is $" << Ctotal << endl;
    
    //Display total sales tax
    cout<<"tax $"<< tax <<endl;
    
 
            
           return 0;
}
