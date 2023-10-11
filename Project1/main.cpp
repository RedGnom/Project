#include <iostream>
#include <ctime>
using namespace std;

void fillarr(int* const arr, int const size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20;
	}
	

}
void showarr(int* const arr, int const size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	

}
void addback(int *&arr, int &size, int const value)
{
	int *newarr = new int[size+1];
	for (int i = 0; i < size; i++) {
		newarr[i] = arr[i];
	}
	newarr[size] = value;
	size++;
	delete[] arr;
	arr = newarr;


}

int main() {
	srand(time(NULL));
	int size;
	cin >> size;
	int *arr = new int[size];
	fillarr(arr, size);
	showarr(arr, size);
	addback(arr, size, 111);
	showarr(arr, size);
	delete[]arr;
}