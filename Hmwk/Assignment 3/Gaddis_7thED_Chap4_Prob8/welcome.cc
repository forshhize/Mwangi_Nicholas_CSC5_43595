/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 4 , 2015, 9:54 AM
 *      Purpose: Change for a dollar game
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
    
    float pennies, nickels,dimes,qurters,total;
    
     // concerts pennis entered
    
     
    //Ask user to enter the number of coins
    
  
    
    cout << "Enter number of pennis " <<endl;
    cin>> pennies;
    
    cout << "Enter number of nickels " <<endl;
    cin>> nickels;
    
    cout << "Enter number of dimes " <<endl;
    cin>> dimes;
    
    cout << "Enter number of qurters " <<endl;
    cin>> qurters;
    
     
    total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (qurters * 0.25);
    
    cout << "The sum of all coins entered is $" << total << endl;
    
    if (total== 1)
        cout<< "Congratulations for winning the game." << endl;
    
    else if (total<1)
        cout<< "The amount is less than a dollar." <<endl;
    
    else if (total>1)
        cout<< "The amount is more than a dollar." <<endl;
    
    
    
        
        
    
    
    
    
    
    
    
    
   
    
    return 0;
}

    
