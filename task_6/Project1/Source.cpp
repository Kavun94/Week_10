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
	int nullelem = -1;
	int m[10];
	for (int i = 0;i < 10;i++) {
		m[i] = rand() % 10 + 0;
	}
	display(m);
	for (int i = 0; i < 10; i++) {
		if (m[i] == 0) {
			nullelem = i;
			break;
	}}
	if (nullelem != -1) cout << "Number null element " << nullelem;
	else cout << "Its array dont have null elemnts";
	return 0;
}