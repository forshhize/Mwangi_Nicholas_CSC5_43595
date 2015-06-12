


/*
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Lottery Application
 */
//System Libraries

#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    int winDits [10],player [5];
    int count=0;
    
    //generating random numbers
    
    for(int i=0;i<5;i++)
    {
        winDits[i]=1+rand()%9;
        
    }
    
    //input from user each digit of his lottery number giving space after each digit
            
    cout<<"Enter number guessed by user";
    
    for(int i=0;i<5; i++)
    {
        cin>>player[i];
        
        if(player [i]>9||player[i]<0)
        {
            cout<<"Invalid value Re-Enter";
            cin>>player[i];
    }
}
//display lottery number

 cout<< "Lottery number " << endl;

 for(int i=0;i<5; i++)
    
    cout<<winDits[i]<<"";
 
 cout<<""
         "Matched digits:";
 for(int i=0;i<5;i++)
 {
     if(winDits[i]==player[i])
         
     {
         cout<<winDits[i]<<"";
 
 count++;
 }
 }
 cout<<endl;
 if(count==0)
     cout<<"No Matches!!"<<endl;
 else
     cout<<count<<"digits matched"<<endl;
 }
 



    