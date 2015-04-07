/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 25, 2015, 11:27  AM
 *      Purpose: Time calculator
 */

//System Libraries

#include <iostream>//I/O standard
#include <iomanip>//Formatting


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    float seconds, minutes, hours,days;
    
    cout<< "Enter number of seconds" << endl;
    cin>> seconds;
    
   minutes= seconds/60;
    
    if (seconds >= 60)
    
        cout<< "The number of minutes in those seconds is " <<minutes<< endl;
   
   hours= seconds/3600;
    
        if (seconds >=3600)
            cout<< "The number of hours in those seconds is " << hours << endl;
    
    days= seconds/86400;
            
            if (seconds >=86400)
                cout <<"The number of days in those seconds is " <<days << endl;
    
      
    
    return 0;
}
