#include <iostream>
#include <string>

using namespace std;



void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n; i++) {
        swapped = false;
        for (j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) { // Use array size directly
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = { 4, 2, 5, 11, 23, 21, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}