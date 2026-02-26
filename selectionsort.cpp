#include <iostream>                                                                                                                                                                                                                                                   #include <iostream>
using namespace std;

int main() {

    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    // Selection Sort
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted array: [";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
        if(i != n-1)
            cout << ", ";
    }
    cout << "]";

    return 0;
}
