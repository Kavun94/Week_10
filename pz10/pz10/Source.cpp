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
		int max = 0, min = 0, index_max, index_min=0,count=0,max2,index_max2=0, nullelem = -1;
		int m[10], a;
		bool re;
		for (int i = 0;i < 10;i++) {
			a = rand() % 10 + 0;
			m[i] = a;		
		}
		display(m);
		//task 3
		cout << endl << "Task 3"<<endl;
		min = m[0];
		for (int i = 0;i < 10;i++) {
			if (max < m[i]) {
				max = m[i];
				index_max = i;}
			if (min > m[i]) {
				min = m[i];
				index_min = i;
			}
		}
		//swap min and max
		m[index_min] = max;
		m[index_max] = min;
		display(m);
		m[index_max] = max;
		m[index_min] = min;
		//task 4
		//int A;
		//cout << endl <<"Task 4"<< endl << "Enter A: ";
		//cin >> A;
		//for (int i = 0;i < 10;i++) {
		//	if (m[i] > A) count++;
		//}
		//cout << "elemets in array>" << A << ": " << count<<endl;
		//task 5
		cout << endl << "Task 5"<<endl;
		max2 = max - m[0];
		for (int i = 1;i < 10;i++) {
			/*re = i != index_min;
			cout <<"MAX2 " << max2<<endl;
			cout << "max - m[i] " << max - m[i]<<endl;
			cout << re << endl;*/
			if (max2 > (max - m[i]) &&  m[i] != max) {//if dont active task 3 (index_min swap on index_max)
				/*cout << "    yes   " << endl;*/
				max2 = (max - m[i]);
				index_max2 = i;
			}
		}
		cout<<"max2 = "<< m[index_max2] << endl;
		//task 6 
		//cout <<endl<< "task 6" << endl;
		//for (int i = 0; i < 10; i++) {
		//	if (m[i] == 0) {
		//		nullelem = i;
		//		break;
		//}}
		//if (nullelem != -1) cout << nullelem;
		//else cout << "Its array dont have null elemnts";
		return 0;
}