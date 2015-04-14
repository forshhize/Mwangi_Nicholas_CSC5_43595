 /* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 13 2015,4:00 PM
 * Purpose: Display the projected rates for Gym membership for the next 
  * six years.
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
    // Declare variables
    
    int year =1;  // Initialize the counter
    
    float rate; // The current gym membership
    
    float increse =0.04;
     
    rate = 2500;// initial rate per year
    
    
     cout<<fixed<< setprecision(2)<<endl;      
    
    cout << " Year  Projected rates"  << endl;
    cout<< "-----------------------" << endl;
    
    for (year =1; year <=6; year++){
        
        rate+=rate*0.04;
        
        cout<< year << "\t\t"<< rate << endl;
    }
        
    
    return 0;
}
