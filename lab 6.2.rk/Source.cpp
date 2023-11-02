#include <iostream>
#include <ctime>

using namespace std;

void create(int* arr, int lower, int upper, int n, int index) {
    if (index == n) {
        return;
    }
    int num = (rand() % (upper - lower + 1)) + lower;
    arr[index] = num;
    create(arr, lower, upper, n, index + 1);
}

void displayArray(const int* arr, int n, int i) {
    if (i == n) {
        cout << endl;
        return;
    }
    cout << arr[i];
    if (i != n - 1) {
        cout << ", ";
    }
    displayArray(arr, n, i + 1);
}

int findSmallestPairedElement(const int* arr, int n, int smallest, int i) {
    if (i == n) {
        if (smallest % 2 != 0) {
            cout << "There are no even numbers in the array." << endl;
        }
        return smallest;
    }

    if (arr[i] % 2 == 0 && arr[i] < smallest) {
        smallest = arr[i];
    }

    return findSmallestPairedElement(arr, n, smallest, i + 1);
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
    create(arr, lower, upper, n, 0);

    cout << "Array: ";
    displayArray(arr, n, 0);

    int smallestPaired = findSmallestPairedElement(arr, n, arr[0], 0);

    if (smallestPaired % 2 == 0) {
        cout << "The smallest paired element in the array is: " << smallestPaired << endl;
    }

    delete[] arr;
    return 0;
}
