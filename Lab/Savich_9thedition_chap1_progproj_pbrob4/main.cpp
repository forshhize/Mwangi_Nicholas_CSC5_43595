/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 *
 * Created on March 2, 2015, 9:26 AM
 * Purpose: Free fall problem from Savich
 * 
 *System Libraries
 * */

#include <iostream>

using namespace std;
     
     //user Libraries
     //Global Constants
     const float G=32.174e1f;//Acceleration in ft/sec^2 on earth
     const float CNVFTMT=3.048e-1f; //conversion from feet to meters
     //Function Prototypes
     //Execution Begins here!


int main(int argc, char** argv) {
         //Declare Variables
         float time,dstnce;
         //Prompt floor time
         cout<<"free fall problem"<<endl;
         cout<<"input the time to drop x.xx (seconds)";
         cin>>time;
         //calculate the distance
         //dstnce=1/2*G*time*time; //Does not Work!!!!
         //dstbce=stattic_cast<Float<
         dstnce=0.5*G*time*time;
         //output the results
         cout<<"distance fallen="<<dstnce<<"(feet)"<<endl;
         cout<<"Distance Fallen="<<dstnce*CNVFTMT<<"(meters"<<endl;
                 //Exit stage right;
                 

    return 0;
}

