/*
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Characters for the Ascii codes
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
    
    float years, rainFall, average=0, ttlMnth=0;
    float ttlAvg=0,ttlRfll=0,total;
    
    //inputting number of years
    
    cout<<"Enter the number of years" <<endl;
    cin>>years;
    
    for (int i=0;i<years;i++)
    {
        total=0;
        for(int j=1; j<=12; j++)
        {
            cout<<"Enter"<<j<< "month of inches of rainfall"<<endl;
            cin>>rainFall;
            ttlMnth +=1; //totalling months
            total +=rainFall;
        }
        ttlRfll=ttlRfll+total;
        average=average+(total/12);
    }
    //outputting data
    cout<<"Total number of months:"<<ttlMnth<<endl;
    cout<<"Total Rainfall:"<<ttlRfll<<endl;
    cout<<"Average Rainfall over a period of "<<years<<"Years is:"<<average<<endl;


    return 0;
}
