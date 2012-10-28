#include <vector>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
// Find all prime numbers under n.
// Something strange is happening here. Too tired to fix right now.
double n = 50000;
double square = std::ceil(std::sqrt(n));
std::vector<int> numbers(n,1);
for (int k=2; k<square; k++) {
//Check to make sure this isn't a composite.
if (numbers.at(k) == 1) {
//2m, 3m, 4m, 5m, ... nm
for (int m=k; m<square; m++) {
int l = m*k;
// l is a composite. Mark as composite (0).
numbers.at(l) = 0;
}

//K is a prime. Print.
printf ("%d \n",k);
}
}
char str [80];
scanf("%s",str); 
}