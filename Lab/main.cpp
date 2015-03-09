/* 
 * File:   main.cpp
 * Author: Nicholas mwangi
 *
 * Created on March 9, 2015, 10:21 AM
 * Purpose: To see how manu snickers it takes to survive
 * 
 */
//System Librarries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Execution begins Here!!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    unsigned short wtlbs,htin,ageyrs;
    char mf;
    unsigned char cBar=230;
    float BMRFem,BMRMale,nCbars;
    //Prompt the user for input
    cout<< "How many candy bars will it take to maintain"<<endl;
    cout<<"input your weight in lbs"<<endl;
    cout<<"All input are intergers!!";
    cin>>wtlbs;
    cout<<"input your height in inches"<<endl;
    cin>>htin;
    cout<<"Input your age in yrs"<<endl;
    cin>>ageyrs;
    cout<<"Are you male or female m/f/?one character input"<<endl;
            cin>>mf;
    //calculates
    BMRFem=655+4.3*wtlbs+4.7*htin-4.7*ageyrs;
    BMRMale=66+6.3*wtlbs+12.9*htin-6.8*ageyrs;
    //Ques if male if female
    nCbars=((mf=='m')?BMRMale/cBar:(BMRFem/cBar));
    //output the results
    cout<<"Your weight="<<wtlbs<<"(lbs)"<<endl;
    cout<<"your height="<<htin<<"(inches)"<<endl;
    cout<<"Your age="<<ageyrs<<"(years)"<<endl;
    cout<<"Your sex="<<((mf=='m')?"Male":"Female")<<endl;
    cout<<"You can eat"<<nCbars<<"candy bars per/day"<<endl;
            
            
        
    

    return 0;
}

