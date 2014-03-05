/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 2, 2014, 10:57 PM
 */

#include <iostream>

using namespace std;

//Global Constants
//Function Prototypes

//Execution
int main(int argc, char** argv) {
    
    short quar, dime, nick, total;
    
    cout<<"Lets find out how many cents you have?"<<endl;
    cout<<"How many quarters do you have?"<<endl;
    cin>>quar;
    cout<<"How many dimes do you have"<<endl;
    cin>>dime;
    cout<<"How many nickels do you have?"<<endl;
    cin>>nick;
    total = (quar * 25) + (dime * 10) + (nick * 5);
            cout<<"You have ";
    cout<< total;
    cout<<" cents!"<<endl;
    cout<<"Enter any key to close program."<<endl;
    cin.get();
    cin.get();
    
    return 0;
}


