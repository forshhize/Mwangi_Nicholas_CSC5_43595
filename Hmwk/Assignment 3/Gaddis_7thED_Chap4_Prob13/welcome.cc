/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 7 , 2015, 11:56 AM
 *      Purpose: Shiiping Charges
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
    
    float pktWght, distnce, wghtChg,milesChg,ttlChg;
    
    cout<< "What is the weight of the package?" <<endl;
    cin>>pktWght;
    
    cout<< fixed<<showpoint<< setprecision (2);
    
    if (pktWght <=0 || pktWght >=20){
        cout<< "The weight has to be more than 0kg and less than 20kg to be shipped" << endl;
    }
    
    else 
    {
        cout<<"What is the distance to be shipped ?" << endl;
        cin>> distnce;
    }
        if (distnce <10 || distnce >3000){
        cout<<"The distance has to be between 10 miles and 3000 miles."<<endl;
    }
    if(pktWght<=2){
        milesChg=(1.1/500)*distnce;
    }
    else if (pktWght >2 && pktWght<=6)
    {
        milesChg=(2.2/500)*distnce;
    }
        else if (pktWght >6 && pktWght<=10)
        {
        milesChg=(3.7/500)*distnce;
    }
    else if (pktWght >10 && pktWght<=20)
        {
        milesChg=(4.8/500)*distnce;
    }
    
    cout<< "The charges for shipping based upon your weight and distance is " << milesChg<< endl;
        
    
        
    
        
    
    
        
    
    
    
    
    return 0;
}
