  /* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on May 20, 2015, 11:00 PM
 *      Purpose: area and perimeter of a triangle
  */

//System Libraries

#include <iostream>



using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

float avgArray (int []);


//Execution Begins Here!
 
int main(int argc, char**argv) {
    
    const int size=10;
    int userNums [size];
    
    //get numbers from the user
    cout<<"Enter 10 numbers:";
            for (int count=0; count <10; count++)
            {
                cout<< "#" << (count + 1)<< " ";
                cin >> userNums[count];
                
                //Display average of numbers.
                cout<<"The average of those numbers is";
                cout<<avgArray(userNums)<< endl;
                return 0;
                
            }
    
    //Function avgArray
    float avgArray (int array [])
    {
        float total =0.0, average;
        for (int count=0; count,10; count++)
            total += array[count];
        average= total/10;
        return average;
    
    
    

