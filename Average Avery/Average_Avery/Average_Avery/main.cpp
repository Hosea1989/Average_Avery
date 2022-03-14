//
//  main.cpp
//  Average_Avery
//
//  Created by Damien Hosea on 3/13/22.
//

//This program caluculates Average
#include <iostream>
using namespace std;
int main() {
/* Here I will declare some variables that I will need for this program I will also be using (cin) in order to accept input.
*/
float input1, input2, input3, input4, input5 ;
float Average ;
cout << "Hello, my name is Avery. I was programmed to produce an Average \n"; cout << "Please Give me a Number \n" ;
cin >>input1 ;
cout << "Please Give Me Another Number \n" ;
cin >> input2 ;
cout << "Please Give Me Another Number \n" ;
cin >> input3 ;
cout << "Please Give Me Another Number \n" ;
cin >> input4 ;
cout << "Please Give Me One More Number \n" ;
cin >> input5 ;
/*
Now I will be adding up all of the number and dividing by 5, in order to get an Average of the 5 inputs */
Average = (input1 + input2 + input3 + input4 + input5)/5 ; cout << "Your Average is " << Average << endl ;
}
