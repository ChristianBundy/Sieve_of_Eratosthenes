#include <vector>
#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  using namespace std;
  // Find all prime numbers under n
  double n;
  cout<<"How high do you want to get? ";
  cin>>n;

  // All composites will have factors < x
  double x = ceil(sqrt(n));

  // Vector holds property of primality for each int
  // Composite: FALSE
  // Prime:     TRUE (default)
  vector<bool> numbers(n,true);
  for (int i=2; i<x; i++) {
    // Check to see if integer is composite.
    if (numbers.at(i) == true) {
      // Integer is a prime. Find multiples < n
      for (int j=i; j<(n/i); j++) {
        numbers.at(j*i) = false;
      }
    }
  }

  // Print integers marked as primes > 2
  for (int k = 2; k<n; k++) {
    if (numbers.at(k) == true) {
      printf("%d\n", k);
    }
  }
}
