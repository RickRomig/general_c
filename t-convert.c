/*
 * tconvert.c v 1.2
 * Richard Romig
 * 23 August 2018
 * Program to convert temperature between Celsius and Fahrenheit
 * Modified 24 August 2018 to use switch() to determine temp scale and
 * to accept a floating point number as an argument for the temperature.
 * Limitations: none known
 * Compiler:
 * gcc (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609 on Linux Mint 18.3
 * MinGW gcc on Windows 7
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>

double c2f(double c);
double f2c(double f);
void show_help(char p_name[]);

int main(int argc, char *argv[])
{
	double c;
	double f;
	const char *nptr = argv[1];
	char *endptr = NULL;
	char *tscale = argv[2];
	double t = 0.0;
	errno = 0;

	if ( argc < 3 )
	{
		fprintf(stderr, "Too few arguments passed.\n");
		show_help(argv[0]);
		exit(1);
	}

	t = strtod(nptr, &endptr);
	/* Check if return value is valid */
	if ( nptr == endptr )
	{
		fprintf(stderr, "\n\tInvalid input, expects an numerical value\n");
		show_help(argv[0]);
		exit(1);
	}
	else if ( errno != 0 && t == 0 )
	{
		fprintf(stderr, "\n\tInvalid input, expects an numerical value\n");
		show_help(argv[0]);
		exit(1);
	}

	switch(tscale[0])
	{
		case 'f':
		case 'F':
			c = f2c(t);
			printf("\n\t%.1f degrees Fahrenheit = %.1f degrees Celsius\n\n", t, c);
			break;
		case 'c':
		case 'C':
			f = c2f(t);
			printf("\n\t%.1f degrees Celsius = %.1f degrees Fahrenheit\n\n", t, f);
			break;
		default:
			fprintf(stderr, "\n\tInvalid input, expects F or C\n");
			show_help(argv[0]);
			exit(1);
			break;
	}

	return 0;
}

/*
 * Converts Celsius temperature to Fahrenheit.
 */
double c2f(double c)
{
	double f;

	f = ((1.8 * c) + 32.0);

	return f;
}

/*
 * Converts Fahrenheit temperature to Celsius.
 */
double f2c(double f)
{
	double c;

	c = ((5.0/9.0) * (f - 32.0));

	return c;
}

void show_help(char p_name[])
{
 	printf("\nUsage: %s temperature C/F\n", p_name);
 	printf("Where temperature is the Celsius or Fahrenheit ");
 	printf("temperature to be converted.\n");
 	printf("Temperature scale must be F, f, C, or c\n");
 	printf("Example: %s 20 F.\n\n", p_name);
}
