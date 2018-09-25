#include <iostream>

using namespace std;

double piValue(int num) {
	int k = 1; //set numerator
	double total = 0;
	for (int i = 0; i < num; ++i) {
		total += k * (4.0 / (2 * i + 1));
		k = -k;
	}
	return total;
}

int main() {
	for (int i = 10; i <= 1000; ++i) {
		cout << setprecision(10)<< i << "\t" << piValue(i) << endl;
	}
	system("pause");
	return 0;
}
