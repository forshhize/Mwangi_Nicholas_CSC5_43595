/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Chips and salsa
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
    
    const int SALSA_TYPES =5;
    const int JARS_SOLD=5;
    string salsa[SALSA_TYPES]=
    {"Mild","Medium","Sweet","Hot", "Zesty"};
    int jars [JARS_SOLD];
    int totalSales;
    int highestSales;
    int lowestSalse;
    string highestSoldProduct;
    string lowestSoldProduct;
    
    //Prompt the user for the number of jars sold for each salsa type.  Get only positive intergers.
            
            //repeat the loop for all types of salsa
            
            for(int i=0;i<SALSA_TYPES;i++)
                
            {
                /*prompt the user for the number of jars sold for each salsa*/
                
                cout<<"Enter the number of jars sold for the salsa" <<salsa[i]<<":";
                cin>>jars[i];
                /*verify whether the number of jars sold is negative*/
                
                while(jars[i])<0
                {
                    cout<< "Enter positive number of jars sold for the salsa"<<salsa[i]<<":";
                    
                    cin>>jars[i];
                }
                        
                
                /*verify whether the number of jars sold is negative*/
            }
