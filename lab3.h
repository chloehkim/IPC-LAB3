/***************************************************************** 

    File: lab3.h
    Author: [Your Name]
    Student Number: [Your Student Number]

	The function prototypes for every function you write go
	into the header file.
        
***************************************************************/

/*
Function returns a 1 if letter is a lower case alphabetic character, 0 otherwise.
*/
int isLower(char letter);
/*
Function returns the upper case version of letter if letter is a lower case 
alphabetic character.  Otherwise, function returns letter
*/
char toUpper(char letter);

/*
This function is passed three(3) values and returns the biggest number of the three
*/
int biggest(int first, int second, int third);

/*
This function is passed the age of a customer and whether or not they have a coupon
and the day of the week as an integer (0 is Sunday, 1 is Monday, 2 is Tuesday and
so on...). See specs for details on pricing and rules.  
The function returns the price of the movie ticket
*/
double ticketPrice(int age, int hasCoupon,int dayOfWeek);

