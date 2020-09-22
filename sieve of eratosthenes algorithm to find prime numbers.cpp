#include <bits/stdc++.h>
int primes[] = {};
using namespace std;

// Solver function
void primeNum(long long int max)
{
  primes[1] = 1;
  for(long long int i = 2; i <= sqrt(max); i++)
    if(!primes[i])
      for(long long int j = 2; i * j <= max; j++)
        primes[i*j] = 1;
}



// Driver function
int main() 
{
  long long int max; cin >> max;

  primeNum(max);  
  
  // printing prime numbers 1 to max
  for(long long int i = 2; i <= max; i++)
    if(!(primes[i]))
      cout << i << endl;
}
