/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 9:18 AM
 * Purpose: Calculating the greatest and Least
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
    
    int number,large,small;
    
    
    small=large=number;
   
    
    while (number != -99)
    {
        
        cout<< " Enter a series of integers " <<endl;
        cin >> number;
        
        if (number>large)
                large=number;
                if (number>small)
                    small=number;
    }
    
    cout<< "Largest number is " <<large<< endl;
    
    cout<< "Smallest number is " << small<< endl;
    
    
        
    return 0;
}
