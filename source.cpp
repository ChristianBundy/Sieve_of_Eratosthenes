#include <vector>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  // Find all prime numbers under n 
	double n = 100; // <- CHANGE ME!

	// All composites will have factors < x
	double x = std::ceil(std::sqrt(n));

	// Vector holds property of primality for each int
	// Composite: FALSE
	// Prime:     TRUE (default)
	std::vector<bool> numbers(n,true);
	for (int i=2; i<x; i++) {
		// Check to see if integer is composite.
		if (numbers.at(i) == true) {
			// Integer is a prime. Find multiples < n
			for (int j=i; j<(n/i); j++) {
				int k = j*i;
				numbers.at(k) = false;
			}
		}
	}
	
	// Print integers marked as primes > 2
	for (int b = 2; b<n; b++) {
		if (numbers.at(b) == true) {
			printf("%d\n", b);
		}
	}

	// Keep console open
  system("PAUSE");
  // Output: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
	
}