/*
 * File: welcome.cc
 * Author: Nicholas Mwangi
 * 
 * Created on March 13, 2015, 3:08 PM
 * Purpose: Display meal cost, tax amount,tip amount and total bill
 */

//System Libraries

#include <iostream>

using namespace std;


//User Libraries

//Global Constants

//Execution begins Here!!



int main(int argc, char**argv) {
    //Declare variables
    
    float MealTax,tipamt,tipcst,mealChg,mealCst,taxamt;
    
    
    mealChg = 44.50;
    
    MealTax=0.0675;
    
    tipcst= 0.15;
    
    taxamt;
    
    
    
    
    // calculate tax amount
     taxamt = mealChg * MealTax;      
            
      
    //Calculate tip amount
    tipamt= tipcst * (mealChg+taxamt);
    
    //Calculate total bill
    mealCst= tipamt+ taxamt+mealChg;
    
    //display meal cost
    cout<< "meal cost $"  << mealChg << endl;  
    
    //display tax amount
    cout<< "tax amount $"  << taxamt << endl;
    
    //display tip amount
    cout<< "tip amount $" << tipamt << endl;
    
    //display total bill
    cout<< "Total bill $" << mealCst << endl;
    
   
            
            
    
    return 0;
}
