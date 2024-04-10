#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int arr[100], n = 0;
    cout << "Enter integers to be sorted (enter 0 to stop):" << endl;
    while (true) {
        int num;
        cin >> num;
        if (num == 0) {
            break;
        }
        arr[n++] = num;
    }
    insertionSort(arr, n);
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
