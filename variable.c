/* C programing
 * Variables.
 * Date: 26th January 2021
 * 
 * Author: Justfier
 */

#include <stdio.h> //Include input/output header file.

//global variable initialization.
int number = 2;

void main ()
{
    //Local variable initialization.
    char letter = 'A';
    
    /*
     * global variables are declared outside the main funtion block.
     * Local varibles are declared inside the function block.
     * When variable declaration and defination is done at the same time,
     * this is is called variable initialization.
     */

	//Output
	printf("The number you entered is: %d \n", number);
    printf("The letter is: %c \n\n", letter);
    
}