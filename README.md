# c_general

## code snippets and libraries

### mymath

1. Uses `math.h` so linking with `-lm` flag will be necessary with some compilers such as GCC.
2. A library of various and sundry math functions:
   * double findCylVolume(int cylinder_diameter, int cylinder_height)
     * Calculates the volume of a cylinder.
   * double findCubeEdge(double cylinder_volume)
     * Calculates the edge of a cube necessary to hold the same volume of a given cylinder.
   * long forFactorial(int number)
     * Calculates the factorial of a given number using a for loop.
   * long doFactorial(int number)
     * Calculates the factorial of a given number using a do loop.
   * long whileFactorial(int number)
     * Calculates the factorial of a given number using a while loop.
   * void fibonacci(int terms)
     * Prints a Fibonacci sequence for a given number of terms.
   * int isPrime(int number)
     * Determines if a number is prime.
   * double findAverage(int arr[], int size)
     * Finds the average for a set of numbers in an array.
   * int isPowerOfTwo(unsigned int x)
     * Determines if a number is a power of 2 (up to 2^31),
   * int calcExponent(unsigned int x)
     * If a number is a pwoer of 2, calculates its exponent.
   * double c2f(double c)
     * Converts a Celsius temperature to Fahrenheit.
   * double f2c(double f)
     * Converts a Fahrenheit temperature to Celsius.
   * double circleArea(double radius)
     * Calculatess the area of a circle.
   * double circumference(double radius)
     * Calculates the circumference of a circle

Rick Romig
