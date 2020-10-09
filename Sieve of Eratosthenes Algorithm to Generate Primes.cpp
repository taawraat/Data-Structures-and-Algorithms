#include <stdio.h>
#define pf printf
#define MAX 20000001
char prime[MAX];

// check if n is prime
bool isPrime(int n){
  if(n == 2) return true;
  else if(!(n & 1)) return false;
  else if(!prime[n]) return true;
  else return false;
}

// prime function using sieve
void primeGen(){
  prime[1] = 1;
  for(int i = 3; i*i <= MAX ; i += 2)
    if(isPrime(i))
      for(int j = i+i; j <= MAX; j += i)
        prime[j] = 1;
}

int main(){
  primeGen();

  int N; scanf("%d", &N);

  // printing prime numbers 1 to N
  for(int i = 1; i <= N; i++)
    if(isPrime(i))
      pf("%d\n", i);
}
