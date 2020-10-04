#include <bits/stdc++.h>
#define ll long long
#define max 1000000
using namespace std;

// Prime function sieve
void primeGen()
{
  primes[1] = 1;
  for(ll i = 2; i * i <= max; i++)
    if(!primes[i])
      for(ll j = i; i * j <= max; j++)
        primes[i*j] = 1;
}




// Driver function
int main() 
{
  primeGum();  
  long long int max; cin >> max;


  
  // printing prime numbers 1 to max
  for(long long int i = 2; i <= max; i++)
    if(!(primes[i]))
      cout << i << endl;
}
