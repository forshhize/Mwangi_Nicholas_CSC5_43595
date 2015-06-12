/*
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Book club points
 */
//System Libraries

#include <iostream>


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    //Declare variables
    
    int purcshd;
    
    cout<<"Enter the number of books purchased on this month" <<endl;
    cin>>purcshd;
    
    if(purcshd<=0)
        cout<<"You earn 0 points"<<endl;
    
    else if (purcshd ==1)
            cout<<"You earn 5 points"<<endl;
    else if (purcshd ==2)
            cout<<"You earn 15 points"<<endl;
    else if (purcshd ==3)
            cout<<"You earn 30 points"<<endl;
    else  
            cout<<"You earn 60 points"<<endl;
            
    
    return 0;
}
