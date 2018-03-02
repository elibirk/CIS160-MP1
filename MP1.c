/* ========================================================
Leah Perry								  CIS 160 Fall 2014
MP1				   						  Submitted: 9/9/14
										  Revised on: -----
Hello World Type Function With User-Input

Data Dictionary 
Variable		Used To
char name		Store user's name

Functions Called				What They Do
scanf							Scans variable from keyboard
printf							Prints words or variables

C:\User\Owner\My Documents\Visual Studio 2013\Projects\MP1
==========================================================*/

//precompiler directives
#include <stdio.h>

//function prototypes go here

//main function
int main (void)
{
	/* ====================================================
	Leah Perry							  CIS 160 Fall 2014
	Function name						  Submitted: 9/9/14
	Takes Input, Prints Result			  Revised on: -----

	Variable		Used To
	char name		Store user's name

	Functions Called		What They Do
	scanf					Scans variable from keyboard
	printf					Prints words or variables
	=====================================================*/
	//insert function definitions then code here

	char name[50]; //space for name string
	printf("What is your name? ");//prompt for name
	scanf_s("%s", name, 50); //scan user's name

	printf("Hello "); //print hello
	printf(name); //print user's name
	printf(". This is an assignment for CIS 160 \nThis is assignment number 1 \n \nThe instructor is Dr. Albert Carlson at \n \nFONTBONNE University"); //print info

	scanf_s("%s", name, 50); //only here to hold open console window

	return 0;

} //end main function
