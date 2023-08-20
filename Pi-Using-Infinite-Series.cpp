#include <iostream>

using namespace std;

//Leibniz formula to calculate the approximation of pi
double piValue(int num) {
	
	int k = 1; //Initialize numerator with positive value
	double total = 0; // Initialize total sum
	for (int i = 0; i < num; ++i) {
		
		// Add the next term in the Leibniz series to the total
		// The formula calculates 4 divided by (2 * i + 1), with alternating signs
		total += k * (4.0 / (2 * i + 1)); // Accumulate the sum of terms

		// Change the sign for the next term (alternating signs)
		k = -k;
	}
	// Return the calculated approximation of pi
	return total;
}

int main() {
	// Loop through values from 10 to 1000 (inclusive)
	for (int i = 10; i <= 1000; ++i) {
		cout << setprecision(10)<< i << "\t" << piValue(i) << endl;
	}
	system("pause");
	return 0;
}
