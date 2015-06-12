/*
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Characters for the Ascii codes
 */
//System Libraries

#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    //Declare variables
    float cost,quatity,totCost;
    
    cout<<"Enter Quantity:";
    cin>>quatity;
    
    //validating input
    if(quatity<=0)
    { cout<<"Invalid input|nRe-EnterQuantity:";
    cin>>quatity;
    }
    cost=99;
    if(quatity<10)
        totCost=cost;
    else if (quatity<=19)
        totCost=cost-((cost*20)/100);
    else if (quatity<=49)
        totCost=cost-((cost*30)/100);
    else if (quatity<=99)
        totCost=cost-((cost*40)/100);
    else
        totCost=cost-((cost*50)/100);
    
    //outputting cost
    cout<<"Total cost Purchase: $"<<quatity*totCost<<endl;
    
    return 0;
}
