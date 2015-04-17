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
    int num =1;
    
    //inputting budget
    cout<< "Enter what you have budgeted for the month:" << endl;
    cin>>budget;
    
    cout<< "Enter all your expenses and when done enter a -1 to indicate "
                "finished."<<endl;
    
    // utilize a do-while since its a post test to see how much is spent first
    do
    {
        
    cout<<"Enter expense "<< num <<endl;
    cin >> expense;
    num++;
     
        total+=expense;
      
    }
    while (expense!= -1);
    
    if (total<=budget)
    
        cout<< "Expenses are under budget" <<endl;
    
    else
        cout<<"Expenses are over budget" <<endl;
    
    
    
    return 0;
}
