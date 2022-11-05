#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	// 1.
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	for(int i = 0; i < n; i++){
		mas[i] = rand() % 51 - 20;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i -= 2) {
		cout << mas[i] << ' ';
	}*/
	// 2.
	/*const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			k++;
		}
	}
	cout << "k (<0) = " << k << endl;*/
	//Сам2 Дан массив целых чисел размера N. Заполнить его случайными числами из диапазона от - 10 до 20. 
	//Вывести на экран только те элементы, которые делятся на 3
	const int size = 20;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 31 - 20;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 3 == 0);
	}
	cout << arr[i] << endl;      //неуверен, но время сдавать так что буду читать тиорию.





}