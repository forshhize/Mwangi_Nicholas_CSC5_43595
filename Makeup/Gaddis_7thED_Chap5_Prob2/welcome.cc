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
 
int main(int argc, char**argv){
    // Declare variables
    
    //Loop for 127 characters
    
    for(int i=1; i<=127;i++)
    {
        //condition for 16 characters 
        if (i%16==0)
        {
            cout<<endl;
            //Display Number  and its ASCII value
            cout<<i<<static_cast<char>(i)<<" ";
            
        }
        else
            //Display number and its ASCII value
            cout<<i<<static_cast<char>(i)<<" ";
    }
    cout<<"\n";
    
    return 0;
}
