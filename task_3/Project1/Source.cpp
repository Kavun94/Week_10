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
	int max = 0, min = 0, index_max, index_min = 0;
	int m[10];
	for (int i = 0;i < 10;i++) {
		m[i] = rand() % 10 + 0;
	}
	display(m);
	min = m[0];
	for (int i = 0;i < 10;i++) {
		if (max < m[i]) {
			max = m[i];
			index_max = i;
		}
		if (min > m[i]) {
			min = m[i];
			index_min = i;
		}
	}
	//swap min and max
	m[index_min] = max;
	m[index_max] = min;
	display(m);
	
	return 0;
}