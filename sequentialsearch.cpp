#include <iostream>                                                                                                                                                                                                                                                             #include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30;   // element to search

    int index = -1;

    // Sequential Search
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }

    cout << "Array: [";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
        if(i != n-1) cout << ", ";
    }
    cout << "]\n";

    if(index != -1)
        cout << "Element " << key << " found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}
