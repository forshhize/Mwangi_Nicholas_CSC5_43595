/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 25, 2015, 10:10  AM
 *      Purpose: Cable Payment
 */

//System Libraries

#include <iostream>//I/O standard
#include <iomanip>//Formatting
#include <fstream>//I/O File

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    ofstream out;
    float vwdHrs;
    char package;
    const int SIZE=40;//max size of name =39 characters
    char name[SIZE];
    float bill;
    
    //open the file
    out.open("cable.dat");
    //Promp the user for inputs
    cout<<"How many hours did you view this month?" <<endl;
    cin>>vwdHrs;
    cout<<"What is your package A,B,C" <<endl;
    cin>>package;
    cout<<"What is the customers name ?" <<endl;
    cin.ignore();
    cin.getline(name,SIZE);
    
    switch (package){
        case 'A':
        case 'a':{
            bill=9.95;
            if(vwdHrs>10)bill+=2*(vwdHrs-10);
            break;
        }
        case 'B':
        case 'b':{
            bill=14.95;
            if(vwdHrs>20)bill+=(vwdHrs-20);
            break;
            
    }
        case 'C':
        case 'c':{
            bill=19.95;
            
            break;
        }
        default: cout <<"Wrong package chosen"<<endl;
    };    
        //out the results to the file
        out<<fixed<<setprecision (2)<<showpoint;
        out<<"Your cable bill from CSC5 RCC Programming class " <<endl;
        out <<"Customer Name: " <<name<< endl;
        out<< "Package : "<< package<< endl;
        out<< "Hours views: " << vwdHrs << endl;
        out<< "Amout owed: "<<bill<< endl;
        out.close ();
    
            
            
    return 0;
}
