/*
 File: main.cpp
 * Author Nicholas Mwangi
 * Purpose; Energy Dringk
 * Created on 03/07/2015
 */
// System Libraries

#include <iostream>

Using namespace std;
//User Libraries
//Global constants
Unsigned char CNVPCT=100;
//Function Prototypes
//Excecution starts here !!!

int main(int argc, char**argv) {
  //Declare Variables
    unsigned short nCust,nEDrnks,nCDrnks;
    unsigned char PEDrnks,PCDrnks;
    

    //Input/Assigned Values
    nCust=16500;//Number of Customers
    PEDrnks=15;//Percentage of Energy Drinkers
    PCDrnks=58;//Percentage out of Energy Drinkers that are citrus drinkers
    //Process/Calculate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*PEDrnks;
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*PCDrnks;
    //Output Everything
    cout<<"Number of customers="<<nCust<<endl;
    cout<<"Percentage Energy Drinkers="
            <<static_cast<int>(PEDrnks)<<"%"<<endl;
    cout<<"Percentage of citrus Drinkers="
           
    <<static_cast<int>(PCDrnks)<<"%"<<endl;
    cout<<"Number of Energy Drinkers + "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers= "<<nCDrnks<<endl;
            //Exit stage right'  
    }
    
    return 0;
}
