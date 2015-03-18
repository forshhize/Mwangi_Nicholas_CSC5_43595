/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 *
 * Created on March 18, 2015, 9:38 AM
 * Purpose: Determine if Table created in Class
 *           agrees with logic of the computer
 */
//system Library

#include <iostream>

using namespace std;

//user libraries

//Global Constants

//Function prototypes

//Execution starts Here!


int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    //Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X "
        <<"!(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //Output the first row of the table
    x=true; y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<endl;
    //Output the second row of the table
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<endl;
    //Exit stage right!
    

    return 0;
}

