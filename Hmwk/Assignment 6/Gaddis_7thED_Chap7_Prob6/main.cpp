/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Calculating pennis for pay
 */

//System Libraries

#include <iostream>//I/O standard
#include <fstream>
#include <string>


using namespace std;

int main(int argc, char**argv) 
{
    // Start main function
    
    int array [30], counter, num, total;
    int small, large;
    ifstream infile;
    //inputting file name
    //cout<<"Enter file name:');
    //cin>>filename;
    infile.open("numbers.txt");
    infile>>num;
    counter=0;
    while(infile)
    {
        array[counter]=num;
        infile>>num;
        counter++;
    }
    small=array[0];
    large=array [0];
    total=0;
    //to find largest and smalles
    
    for(int j=0;j<counter;j++)
        
    {
        if (array[j]>large)
            large=array [j];
        if (array[j]<small)
            small=array[j];
        total=total +array[j];
    }
    
    cout<<"The smallest value is:" <<small<<endl;
    cout<<"The largest value is: "<<large<<endl;
    cout<<"Total of numbers in array:"<<total<<endl;
    cout<<"Average of numbers in array:"
            <<total/counter<<endl;
    infile.close();
    
}
