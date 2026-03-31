#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksiumum panjang array yang dapat dimaukkan adalah 20" << endl;
        }
    }
    cout << endl;
    cout << "=============================================" << endl;
    cout << "=============Masukkan elemnt Array===========" << endl;
    cout << "=============================================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void insertionSort() {
    int i, temp, j;
    for (i = 1; i <= n - 1; i++) { // i adalah pass
        temp = arr[i]; // step 1
        j = i - 1; // step 2
        while (j >= 0 && arr[j] > temp) { // step 3
            arr[j + 1] = arr[j]; // step 4
            j--; // step 5
        }
        arr[j + 1] = temp; // step 6
    }
}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl;
    }
    cout << endl;
}

int main() {
    input();
    insertionSort();
    display();
    return 0;
}