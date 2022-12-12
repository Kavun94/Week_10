#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int display(int array[]) {
	for (int i = 0;i < 10;i++) cout << array[i] << " ";
	cout << endl;
	return 0;
}

int main() {
	srand(time(0));
	int max = 0, max2=0;
	int m[10],a;
	for (int i = 0;i < 10;i++) {
		a = rand() % 10 + 1;
		m[i] = a;
		if (a > max) max = a;
	}
	display(m);
	for (int i = 1;i < 10;i++) {
		if (max2 < m[i] && m[i] != max) {
			max2 = m[i];	
		}
	}
	cout << "the second largest = " << max2 << endl;

	return 0;
}