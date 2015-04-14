/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Calculating pennis for pay
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
    
    float pennies,total,payAmt,salary,totalPD;
    
    int days; // Number of days worked
    
    int maxDay;  //total days worked
    
    int count=1; //The beginning of the working days
    
    total=0 ; //Accumulator, initialized to 0
    
    salary= 0.01;
    
    cout<< fixed<< showpoint << setprecision (2);
    
    // Get the number of days
    cout << "Enter the number of days you got paid." << endl;
    cin>> days;
    
    cout << "Days  Salary for Each Day"<< endl;
    cout<<"---------------------------------"<< endl;
    
    //Get the salary for each day and accumulate a total
    
    for( count=1; count<= days; count++)
    {
        salary+=salary;
        
        cout<< count << "\t\t" << salary << endl;
        
        
        
        
      
    }
    
    total+=salary/100;
    
    cout<< "The total salary is: $" << total << endl;
    
    
 
    
    
    
    
    
    return 0;
}
