/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Rain or Shine
 */

//System Libraries

#include <iostream>//I/O standard
#include <iomanip>
#include<fstream>


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    const int NUM_MONTHS =3;
    const int NUM_DAYS=30;
    const int NUM_TYPES=3;
    
    char forecast[NUM_MONTHS] [NUM_DAYS];
    int counts [NUM_MONTHS][NUM_TYPES];
    int rainyDays =0;
    ifstream datafile;
    datafile.open("RainOrShine.txt");
    if (!datafile)
        cout<< "Error opening data file.\n";
    else
    {
        //Read data and load array
        for (int month=0;month<NUM_MONTHS; MONTH++)
        {
            for (int day=0; day<NUM_DAYS; day++)
            {
                datafile>>forecast[month][day];
            }
            datafile.ignore();
        }
        for(int month=0;<NUM_MONTHS;month++)
        {
            for(int day=0; day<NUM_DAYS; day++)
            {
                cout<<forecast[month][day]<<'\t';
                
            }
            cout<<endl;
        // intialize count arrays to 0
            
            for(int month=0;<NUM_MONTHS;month++)
        {
            for(int type=0; day<NUM_TYPES; type++)
            {
                counts [month][type]=0;
    }
            }
            //count all data
            
            for (int month=0;month<NUM_MONTHS; month++)
            {
                for (int day=0;day<NUM_DAYS; day++)
                {
                    if (forecast [month] [day]=='R')
                    {
                        counts [month][0]++;
                    }
                    if (forecast [month][day]=='S')
                    {
                        counts [month][1]++;
                    }
                    if (forecast [month][day]=='C')
                    {
                        counts [month][2]++;
                    
                    }
                    }
                }
            for (int month =0;month <NUM_MONTHS; month++)
            
        for(int type =0; type <NUM_TYPES; type++)
        {
            cout<< counts[month][type]<< 't';
        }
        cout <<endl;
    }
    //Determine the month with the largest number of rainy days
    //output report
    cout<<"Three-Month Analysis\n\n";
        }

return 0;
}