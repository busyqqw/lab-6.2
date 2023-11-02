#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void create(int arr[], int n, int lower, int upper) {
    for (int i = 0; i < n; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        arr[i] = num;
    }
}

void displayArray(const int arr[], int n) {
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

int findSmallestPairedElement(const int arr[], int n) {
    bool hasEven = false;
    int smallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            hasEven = true;
            if (arr[i] < smallest) {
                smallest = arr[i];
            }
        }
    }

    if (!hasEven || smallest % 2 != 0) {
        cout << "There are no even numbers in the array." << endl;
        return smallest;
    }

    return smallest;
}

int main() {
    srand(time(0));

    int lower, upper, n;
    cout << "Enter the lower bound of the range: ";
    cin >> lower;
    cout << "Enter the upper bound of the range: ";
    cin >> upper;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];
    create(arr, n, lower, upper);
    displayArray(arr, n);

    int smallestPaired = findSmallestPairedElement(arr, n);

    if (smallestPaired % 2 == 0) {
        cout << "The smallest paired element in the array is: " << smallestPaired << endl;
    }

    delete[] arr;
    return 0;
}
