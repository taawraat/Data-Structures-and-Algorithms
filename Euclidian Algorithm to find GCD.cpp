#include <iostream>
using namespace std;

// findGCD function to find GCD
int findGCD(int first, int second)
{ 
  if(!second)
    return first;
  
  return findGCD(second, first % second);
}

// Driver function
int main() 
{
  // example: first number must be bigger
  cout << findGCD(3768, 1701) << endl;
}
