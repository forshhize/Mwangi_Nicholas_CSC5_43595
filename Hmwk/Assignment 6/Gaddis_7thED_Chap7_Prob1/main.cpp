/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Largest and smallest array values
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
    
    const int size=10;
    int small, large;
    int numArray[size];
    
    cout<<"Enter values of array; "<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>numArray[i];
    }
    small=numArray[0];
    large=numArray[0];
    
    //to find largest and smallest
    for(int j=0;j<size;j++)
    {
        if (numArray[j]>large)
            large=numArray[j];
        if(numArray[j]<small)
            small=numArray[j];
    }
    //Displaying the smallest and largest values
    cout<<"The smallest value is ;" <<small<<endl;
    cout<<"The largest value is :"<<large<<endl;
    
    return 0;
}
    
