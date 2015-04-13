  /* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 13, 2015, 1:23  PM
 * Purpose: Calories burned 
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
    
    int Time=10; //initialize the counter
    
    float Total, caloris;
    
     caloris = 3.9; // Amount of calories per minute
    
    cout << "Time        calories"  << endl;
    cout << "------------------"<< endl;
    
    
    for (Time=10; Time<=30; Time+=5)
    {
        cout<< Time << "\t\t"<< (Time * 3.9)<< endl;
        
    }
    
   
    return 0;
}