/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 27, 2015, 11:27  AM
 *      Purpose: To confirm if certain dates are magic dates
 */

//System Libraries

#include <iostream>//I/O standard
#include <iomanip>//Formatting
#include <fstream>//I/O File

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    int month,date,year;
    
    //Ask the user to input the month, day and two digit year
    
    cout<< " What is the month ? " <<endl;
    cin>> month;
    cout<< "what is the date ?" << endl;
    cin>> date;
    cout<< "what is the year in two digit format ?" << endl;
    cin>> year;
    
    //Determine the qualification for magic date
    if (year==month*date)
        
        cout<< "These are magic dates"<< "." <<endl;
    else
        cout<< "The date is not magic" << "." <<endl;
    
    return 0;
}
