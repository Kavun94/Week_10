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
	int  count = 0;
	int m[10],A;
	for (int i = 0;i < 10;i++) {
		m[i] = rand() % 10 + 0;
	}
	display(m);
	cout << "Enter A: ";
	cin >> A;
	for (int i = 0;i < 10;i++) {
		if (m[i] > A) count++;
	}
	cout << "elemets in array>" << A << ": " << count<<endl;
	
	return 0;
}