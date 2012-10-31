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

	system("PAUSE");	
}