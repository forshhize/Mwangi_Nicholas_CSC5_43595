/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 13 2015,4:00 PM
 * Purpose: Distance traveled
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
    
    float speed,distnce,time,distance;
    int hours;
    

    hours=1; //initialize the counter
    
   // Request for speed of vehicle in miles per hour
    cout<< "What is the speed of the vehicle in mph?" << endl;
    cin>> speed;
    
    cout<< "How many hours has it traveled?" <<endl;
    cin>> time;
    
    
     cout << "Hour  Distance Traveled" << endl;
    cout<< "----------------------------"<< endl;
    
    
    for (hours =1; hours<=time; hours++){
        
         distnce += (speed *time);
         
        cout<< hours << "\t\t" << distnce <<endl;
    }
            
    if ( speed <1 && time <1)
    {
     
    cout<< "Error." << endl;
    cout << "Enter a positive number for speed and minimum of an hour for time traveled." << endl;
    
    }
    
    
    
   
    
    
       
    
    
    return 0;
}
