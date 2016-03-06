//implementation
#include "dice.h"           //user-defined class
#define size 100             //define the array size
using namespace std;

int dice::rollcount = 0;                 //at start the roll counter set to zero
dice::dice()                             //constructor 
{
	
	if (rollcount == 0)
	{
		for (int i = 0; i < size; ++i)         //initialize the content of the array to zeros at the begining
		{
			diearray[i] = 0;
		}
		
	}
	setdie_face();                          //call to setdie_face function
}


dice::~dice()                               // destructor
{

}
void dice::setdie_face()                     //function to set the dice face and the dice array
{
    diearray[rollcount] = 1+rand() % 6;
	die_face =diearray[rollcount];
}
int dice::roll()                              //returns the die face
{
	
	return die_face;
}
float dice::die_array_avr(int arr[], int lenght)          // compute and return the avarage of the elements in the array
{   float sum=0.0;                // initializes the summ to 0.0
    for (int i = 0; i < lenght; ++i)
	{
		if (arr[i] != 0)
		{
           sum +=arr[i];
		}
            
		
	}
	return (sum /2);


}
float dice::rollavr(dice a, int b)        //compute the average of rolls and return it
{
	float sum = 0.0;
	for (int i = 0; i <=b; ++i)
	{
		if (a.diearray[i] != 0)
		{
			sum += a.diearray[i];
		}
}
	return (sum / 2);;
}
ostream&operator<<(ostream&output,dice a)          //overloads the stream extraction operator
{
	if (a.rollcount <= size)
	{
      output << "roll is  : " << a.roll() << "array average is :  " << a.die_array_avr(a.diearray,size)<<"rolls average :  "<< a.rollavr(a,a.rollcount) << "counter is :  " << a.rollcount << endl;
	   a.rollcount++;          //increament the counter
	}
	else
	{
		exit(1);   //when the size of the array is exceeded this terminates the program execution
	}
	
	return output;           //returns the overloaded operator
}
