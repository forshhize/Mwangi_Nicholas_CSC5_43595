/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Payroll
 */

//System Libraries

#include <iostream>//I/O standard
#include <cmath>


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    int empID[7]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    
    int hours[7];
    float payRate [7],wage[7];
    //inputting hours,pay rate wage
    for(int i=0;i<7;i++)
    {
        wage[i]=hours[i]*payRate[i];
    }
    for(int i=0; i<7;i++)
    {
        cout<<"Employee ID:" <<i+1<<"\nWage;'"
                <<wage[i]<<endl;
                
    
    }
    return 0;
    
}
