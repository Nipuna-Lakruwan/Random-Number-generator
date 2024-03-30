#include <iostream>
using namespace std;

int main()
{
  // Seed the pseudo-random number generator with the current time
  srand(time(NULL));

  // Generate three pseudo-random numbers between 1 and 6 (inclusive)
  int num1 = (rand() % 6) + 1;
  int num2 = (rand() % 6) + 1;
  int num3 = (rand() % 6) + 1;

  // Output the generated numbers
  cout << num1 << '\n';
  cout << num2 << '\n';
  cout << num3 << '\n';

  // Return 0 to indicate successful program execution
  return 0;
}
