  /* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 13, 2015, 11:27  AM
 * Purpose: Savings Account balance
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
    
    float intRate,strtbln,months,dptAmt,witdrwl,mnthInt,multiply,num;
        num=1;
        //inputting interest
        cout<< "Enter the annual interest rate:";
    cin>>intRate;
    
    //Input starting balance
    
    cout<< "Enter the starting balance:";
    cin>> strtbln;
    
    cout<< "Enter number of months since account was opened:";
    cin>>months;
    
    for (num=1; num<=months;num++)
    {
        cout <<"Enter the deposited amount of the month" <<num <<":";
        cin>>dptAmt;
                //Calculating the balance
        strtbln=strtbln +dptAmt;
        //inputting withdrawal amount
        cout<<"Enter amount withdrawn from account:";
        cin>>witdrwl;
        //Updating balance
        strtbln=strtbln-witdrwl;
        
        mnthInt=(intRate/12);
        multiply=(mnthInt*strtbln)/100;
        strtbln=strtbln=multiply;
        
        //outputting all data
        
        cout<<"Ending balance:"<< strtbln <<endl;
        cout<<"Total amount of deposits:"<<dptAmt<< endl;
        cout<<"Total amount of withdrawals: "<<witdrwl<< endl;
        cout<<"Total interest earned:"<<mnthInt<< endl;
        
        
                
    }
    
    
    
    return 0;
}
