#include <iostream>
#include "dice.h"            //user defined class
using namespace std;

int main()              //main begins
{
	int r;      //loop condition variable
	line:
cout << "press 1 to roll the dice /press any charector to quit:" << endl;      //prompt the user to input the value to begin tossing the dice
cin >> r;                                                         // stores the condition variables input data
	while (r == 1)                                                     //while loop begins
	{
		dice a;
       cout << a;
		r = 0;
		goto line;                    //go to statement that sends the excution to the label to reprompt the user to roll the dice
	}         //while ends
	
	system("pause");
	
		
} //main ends