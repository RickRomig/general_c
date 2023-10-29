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

### t-convert
Converts temperatures from either Celsius to Fahrenheit or Fahrentheith to Celsius.

### Feedback
* [GitHub](https://github.com/RickRomig/FnLoC)
* [Rick's Tech Stuff](https://ricktech.wordpress.com)
* [Twitter (@ludditegeek)](https://twitter.com/ludditegeek)
* Email: [rick.romig@gmail.com](mailto:rick.romig@gmail.com) or [rick.romig@mymetronet.net](mailto:rick.romig@mymentronet.net)

Rick Romig (*The Luddite Geek*)

15 October 2023

### DISCLAIMER
THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL I BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS AND SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
