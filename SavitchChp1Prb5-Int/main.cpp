/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 3, 2014, 9:29 PM
 */

#include <iostream>

//Global Constants
//Function Prototypes

using namespace std;


//Execution
int main(int argc, char** argv) {
    //Declare variables
    
    int int1, int2, intSum, intPro;
    cout<<"Input an integer"<<endl;
    cin>>int1;
    cout<<"Input another integer"<<endl;
    cin>>int2;
    intSum=int1+int2;
    intPro=int1*int2;
    cout<<"The sum of these is "<<intSum<<endl;
    cout<<"and the product is "<<intPro<<endl;
        
    //Exit Stage Right
    return 0;
}

