 /* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on May 22, 2015, 11:27  AM
 * Purpose: Largest and Smallest Array Values
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
    
    const int size =10;
    int small, large;
    int numAray[size];
    
    //inputting elements of array
    
    cout<<"Enter Values of array:" <<endl;
    for(int i=0;i<size;i++)
    {
        cin>>numAray[i];
    }
    
    //Assigning the small and large
    small=numAray[0];
    large=numAray[0];
    
    //To find largest and smallest
    
    for (int j=0;j<size;j++)
    {
        if(numAray[j]>large)
            large=numAray[j];
        if (numAray[j]<small)
            small = numAray[j];
        
    }
    
    //Displaying the smallest and largest values
    cout<<"The smallest value is: "<<small<<endl;
    cout<<"The smallest value is: "<<large<<endl;
    
    return 0;
    
    
    }
    
    
