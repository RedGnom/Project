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
		cout << arr[i] << endl;
	}
	

}

int main() {
	srand(time(NULL));
	int size;
	cin >> size;
	int* arr = new int;
	fillarr(arr, size);
	showarr(arr, size);
	delete[] arr;
}