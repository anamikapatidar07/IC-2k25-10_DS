

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int largest = arr[0];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element = " << largest;

    return 0;
}
    
    OUTPUT
    
    Enter number of elements: 5
Enter array elements: 87 67 58 78 49
Largest element = 87
    
    
