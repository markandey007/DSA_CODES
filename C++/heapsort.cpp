Heap sort in C++
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
	int largest = i; 
	int l = 2 * i + 1; //left
	int r = 2 * i + 2; //right

	// If left child > root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child > largest 
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest != root
	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n)
{

	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	
	for (int i = n - 1; i >= 0; i--) {
		// Move current root to end
		swap(arr[0], arr[i]);

		
		heapify(arr, i, 0);
	}
}
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}


int main()
{
	int arr[] = { 23,24,56,8,6,13,67,2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	heapSort(arr, n);

	cout << "Sorted array is \n";
	printArray(arr, n);
}
