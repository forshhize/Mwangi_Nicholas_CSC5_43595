
    /* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 13, 2015, 11:27  AM
 * Purpose: Ocean Level
 */

//System Libraries

#include <iostream>//I/O standard


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    int num =1; //Initialize the counter
    
    cout<< "Number of Years    Rise in water" <<endl;
    cout<< "------------------------------"  <<endl;
    while (num <=25)
    {
        cout<< num << "\t\t\t"<< (num * 1.5) << endl;
        num++; // increment the counter
    }
    
    
   
        
   
    return 0;
}
