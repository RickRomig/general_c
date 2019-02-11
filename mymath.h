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
 *  	heder file for mymath.c, miscellaneous math functions
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

#ifndef MYMATH_H
#define MYMATH_H

double find_cyl_volume(int cylinder_diameter, int cylinder_height);
double find_cube_edge(double cylinder_volume);
long forFactorial(int number);
long doFactorial(int number);
long whileFactorial(int number);
void fibonacci(int terms);
int isPrime(int number);
double findAverage(int arr[], int size);
int isPowerOfTwo(unsigned int x);
int calcExponent(unsigned int x);
double c2f(double c);
double f2c(double f);
double circleArea(double radius);
double circumference(double radius);

#endif
