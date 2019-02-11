/*
 * FILE
 * 	mymath.c
 * NAME
 * 	Copyright 2019 Richard Romig
 * EMAIL
 * 	rick.romig@gmail.com
 * DATE
 * 	01 February 2019
 * DESCRIPTION
 *  	miscellaneous math functions
 * LIMITATIONS
 *  	makes use of math.h. link with -lm flag with gcc
 * COMPILER INFO
 * 	gcc (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609 on Linux Mint 18.3
 *	MinGW gcc on Windows 7
 * MODIFICATION HISTORY
 *  	date of modification and a brief description
 *
 * GNU Public License, Version 2
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define MAXINT 2147483648

/*
 * FUNCTION:
 *     find_cyl_volume(int cylinder_diameter, int cylinder_height)
 * DESCRIPTION
 *     Computes the volume of a cylinder
 * PARAMETERS
 *	int cylinder_diameter
 *	int cylinder_height
 * RETURNS
 *     Returns the volume of a cylinder as type double
 * SIDE EFFECTS
 *     None known
 * LIMITATIONS
 *     None known
 * MODIFICATION HISTORY
 *     date of modification and a brief description
 */
double find_cyl_volume(int cylinder_diameter, int cylinder_height)
{
	double radius;

	radius = (double)cylinder_diameter/2.0;

	return (radius * radius * (double)cylinder_height * PI);
}

/*
 * FUNCTION:
 *     find_cube_edge(double cylinder_volume)
 * DESCRIPTION
 *     Computes the length of a cube's edge based on the volume of a cylinder
 * PARAMETERS
 *	int cylinder_diameter
 *	int cylinder_height
 * RETURNS
 *     Returns the end of a cube as type double
 * SIDE EFFECTS
 *     None known
 * LIMITATIONS
 *     None known
 * MODIFICATION HISTORY
 *     date of modification and a brief description
 */
double find_cube_edge(double cylinder_volume)
{
	return cbrt(cylinder_volume);
}

/*
 * FUNCTION:
 *     long factorial(int n)
 * DESCRIPTION
 *     Calculates a factorial using a for loop
 * PARAMETERS
 *     int number - user input number passed to the function
 * RETURNS
 *     the factorial of n as a long integer
 * SIDE EFFECTS
 *     none known
 * LIMITATIONS
 *     positive integer under 16
 * MODIFICATION HISTORY
 *     not applicable
 * NOTES
 *	Algorithm adapted from C: Step by Step by Mitchel Waite & Stephen Prata
 *	(c) 1989 by The Waite Group, Howard W. Sams & Company, page 300
 */
long forFactorial(int number)
{
	long factorial;

	for( factorial = 1; number > 1; number--)
		factorial *= number;

	return factorial;
}

/*
 * FUNCTION:
 *     long factorial(int number)
 * DESCRIPTION
 *     Calculates a factorial using a do-while loop
 * PARAMETERS
 *     int number - user input number passed to the function
 * RETURNS
 *     the factorial of n as a long integer
 * SIDE EFFECTS
 *     none known
 * LIMITATIONS
 *
 * MODIFICATION HISTORY
 *     not applicable
 * NOTES
 */
long doFactorial(int number)
{
	long factorial = 1;

	do
	{
		factorial *= number;
		--number;
	}
	while ( number > 0 );

	return factorial;
}

/*
 * FUNCTION:
 *     long factorial(int number)
 * DESCRIPTION
 *     Calculates a factorial using a do-while loop
 * PARAMETERS
 *     int number - user input number passed to the function
 * RETURNS
 *     the factorial of n as a long integer
 * SIDE EFFECTS
 *     none known
 * LIMITATIONS
 *
 * MODIFICATION HISTORY
 *     not applicable
 * NOTES
 */
long whileFactorial(int number)
{
	long factorial = 1;

	while ( number > 0 )
	{
		factorial *= number;
		--number;
	}

	return factorial;
}

/*
 * FUNCTION:
 *     void fibonacci(int terms)
 * DESCRIPTION
 *     Calculates and prints a Fibonacci sequence
 * PARAMETERS
 *     int terms - the number of terms to be calculated
 * RETURNS
 *     Returns nothing, prints, the sequence
 * SIDE EFFECTS
 *     info about changes of state and alterations to global variables
 * LIMITATIONS
 *     describe any known bugs, restrictions, or limitations
 * MODIFICATION HISTORY
 *     date of modification and a brief description
 */
void fibonacci(int terms)
{
	int i;
	int count = 0;
	int first = 0;
	int second = 1;
	int next;

	for ( i = 0; i < terms; i++ )
	{
        if ( i <= 1 )
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\t", next);
		count++;

		if ( count % 10 == 0 )
			printf("\n");
	}
	if ( count % 10 != 0 )
		printf("\n");
}

/*
 * FUNCTION:
 *     int isPrime(int number)
 * DESCRIPTION
 *	Tests if a number is prime
 *	sqrt() is in math.h, gcc compile with -lm flag
 *	Algorithm adapted from:
 * 	Discrete Mathematics, 3rd Edition by Richard Johnsonbaugh
 *	for loop is run up to the square root of n
 *	alt code: 	for ( i = 2, prime = 1; i * i <= number; i++ )f
 *	sqrt() is in math.h, gcc compile with -lm flag
 * PARAMETERS
 *     int number - number to be tested
 * RETURNS
 *     1 (true) if the number is prime, 0 (false) if it is not.
 * SIDE EFFECTS
 *     None known
 * LIMITATIONS
 *     None known
 * MODIFICATION HISTORY
 *     12 Jan 2018 - changed for loop
 */
int isPrime(int number)
{
	int prime;
	long i;

	for ( i = 2, prime = 1; i < sqrt(number); i++ )
		if ( number % i == 0 )
			prime = 0;

	return prime;
}

/*
 * FUNCTION:
 *	double findAverage(int arr[], int size)
 *DESCRIPTION
 *     finds the average value of an array of integers
 * PARAMETERS
 *	int arr[] - an array of integers
 *	int size - the number of elements in the array(strlen(arr))
 * RETURNS
 *	double avg - the average of the integers
 * SIDE EFFECTS
 *	info about changes of state and alterations to global variables
 * LIMITATIONS
 *	describe any known bugs, restrictions, or limitations
 * MODIFICATION HISTORY
 *	date of modification and a brief description
 */
double findAverage(int arr[], int size)
{
 	int i;
 	double avg;
 	double sum = 0.0;

 	for(i = 0; i < size; ++i)
 		sum += arr[i];
 	avg = sum / size;

 	return avg;
}

/*
 * FUNCTION:
 *     int isPowerOfTwo(unsigned int x)
 * DESCRIPTION
 *     determines if a number is a power of two comparing x with its
 *	two's complement.
 * PARAMETERS
 *     (unsigned int x - number to be evaluated
 * RETURNS
 *     1 if a power of two, 0 if it is not
 * SIDE EFFECTS
 *     None known
 * LIMITATIONS
 *     x must be a positive inteter <= 2147483648
 * MODIFICATION HISTORY
 *     date of modification and a brief description
 */
int isPowerOfTwo(unsigned int x)
{
	return ((x != 0) && ((x & (~x + 1)) == x));
}

/*
 * FUNCTION:
 *     int calcExponent(unsigned int x)
 * DESCRIPTION
 *     determines the expoent of a number that is a power of two
 * PARAMETERS
 *     (unsigned int x - number to be evaluated
 * RETURNS
 *     int exponent - the exponent for the number
 * SIDE EFFECTS
 *     None known
 * LIMITATIONS
 *     x must be a positive inteter <= 2147483648 (2^31)
 * MODIFICATION HISTORY
 *     date of modification and a brief description
 */
int calcExponent(unsigned int x)
{
	unsigned int powersOfTwo[32] =
   	{1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,
    	65536,131072,262144,524288,1048576,2097152,4194304,8388608,
    	16777216,33554432,67108864,134217728,268435456,536870912,
    	1073741824,2147483648};

 	int exponent = 0;

 	while (powersOfTwo[exponent] != x && exponent < 31)
   		exponent++;

 	return exponent;
}

/*
 * FUNCTION:
 *     double c2f(double c)
 * DESCRIPTION
 *     convert Celsius temperature to Fahrenheit
 * PARAMETERS
 *     double c - Celsius temperature to be converted
 * RETURNS
 *     double - temperature in Fahrenheit
 * SIDE EFFECTS
 *     info about changes of state and alterations to global variables
 * LIMITATIONS
 *     describe any known bugs, restrictions, or limitations
 * MODIFICATION HISTORY
 *     date of modification and a brief description
 */
double c2f(double c)
{
	return (((1.8 * c) + 32.0));
}

/*
 * FUNCTION:
 *     double f2c(double f)
 * DESCRIPTION
 *     Converts Fahrenheit temperture to Celsius
 * PARAMETERS
 *     double f - Fahrenheit temperture to be converted
 * RETURNS
 *     double - temperture in Celsius
 * SIDE EFFECTS
 *     info about changes of state and alterations to global variables
 * LIMITATIONS
 *     describe any known bugs, restrictions, or limitations
 * MODIFICATION HISTORY
 *     date of modification and a brief description
 */
double f2c(double f)
{
 	return ((5.0/9.0) * (f - 32.0));
}

/*
 * FUNCTION:
 *     double circleArea(double radius)
 * DESCRIPTION
 *     Calculates the area of a circle
 * PARAMETERS
 *     double radius
 * RETURNS
 *     double - the area of the circle
 * SIDE EFFECTS
 *     info about changes of state and alterations to global variables
 * LIMITATIONS
 *     describe any known bugs, restrictions, or limitations
 * MODIFICATION HISTORY
 *     date of modification and a brief description
 */
double circleArea(double radius)
{
	return (PI * radius * radius);
}

/*
 * FUNCTION:
 *     double circumference(double radius)
 * DESCRIPTION
 *     Calculate the circumference of a circle
 * PARAMETERS
 *     double radius
 * RETURNS
 *     double - the circumference of the circle
 * SIDE EFFECTS
 *     info about changes of state and alterations to global variables
 * LIMITATIONS
 *     describe any known bugs, restrictions, or limitations
 * MODIFICATION HISTORY
 *     date of modification and a brief description
 */
double circumference(double radius)
{
	return (2.0 * PI * radius);
}
