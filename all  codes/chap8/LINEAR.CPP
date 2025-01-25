#include <iostream>
using namespace std;

int linsearch(int x[], int size, int target) {
    for (int i = 0; i < size; i++) { // Fix loop condition
        if (x[i] == target) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int target = 10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size dynamically

    int result = linsearch(arr, size, target); // Call the function

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found" << endl;
    }

    return 0;
}
