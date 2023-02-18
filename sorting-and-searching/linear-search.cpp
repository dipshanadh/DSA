#include <iostream>

using std::cin;
using std::cout;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

    return -1;
}

int main()
{
    int n, key;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the key to serach for: ";
    cin >> key;

    cout << "The index of the entered key is " << linearSearch(arr, n, key);

    return 0;
}