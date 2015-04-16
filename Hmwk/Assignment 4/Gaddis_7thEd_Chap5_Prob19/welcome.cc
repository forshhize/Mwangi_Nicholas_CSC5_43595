/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 13, 2015, 11:27  AM
 * Purpose: Budget Analysis
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
    
    float budget,expense;
    float total=0; //accumaltor to keep a running total
    
    //inputting budget
    
    cout<< "Enter what you have budgeted for the month:";
    cin>>budget;
    
    cout<<"Enter all expenses:" ;
     cin >>expense;
    
    // utilize a do-while since its a post test to see how much is spent first
    do
    { 
     
        total=total + expense;
        
    }while (expense=0);
    
    if (total<=budget)
    
        cout<< "Expenses are under budget" <<endl;
    
    else
        cout<<"Expenses are over budget" <<endl;
    
    
    
    return 0;
}
