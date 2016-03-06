//interface
#ifndef DICE_H
#define DICE_H //prevents multiple inclusion of the dice class

#include <iostream>
#define size 100
using namespace std;


class dice
{
	friend ostream&operator<<(ostream&,dice);    //overloading function ,since it its friend it can access the dice class private data
public:
	dice();                        //initialize the roll to one
	~dice();                            // destructor
	int roll();                         // returns the roll results
	void setdie_face();
	float rollavr(dice, int);            // returns the rolls avarage,parameters are dice object and the number of rolls
	float die_array_avr(int [], int);  // returns average of the rolls array,parameters are array of int and the size of the array
private:
	static int rollcount;                  // stores the number of rolls taken
	int die_face;                           // variable to use as the die
	int diearray[size];           // array of ints

};
#endif

