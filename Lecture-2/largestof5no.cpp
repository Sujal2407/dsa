#include <iostream>
#include <climits> // INT_MIN, INT_MAX
using namespace std;

int main() {
	// INT_MIN : -2147483648, INT_MAX : +2147483647
	int  no;
	int lar = INT_MIN;
	

	int i = 1;
	while (i <= 3) {
		cin >> no;

		if (no > lar) {
			lar = no;
		}

		i = i + 1;
	}

	cout << "Largest: " << lar << endl;


	return 0;
}