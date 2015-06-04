/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Quarterly Sales
 */

//System Libraries

#include <iostream>//I/O standard
#include <iomanip>


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    
    const int NUM_FISH=20; //Array size
    int fish [NUM_FISH], count; // Array size with 20 elements
    
    // get fish caught by fishermen.
    cout<<"Enter the number of fish caught by each fisherman:" <<endl;
    
    for (count=0;count<20;count++)
    {//Display the values in the array.
        
        cout<<"fisherman"<<(count+1) <<":";
        cin>>fish [count];
    }
    return 0;
    }

