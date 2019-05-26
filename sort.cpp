#include <iostream>
using namespace std;
#define LEN 8

int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};

void insertionSort() {
    int tmp;
    for (int i = 1; i < LEN; i++) {
        for (int j = i-1; j >= 0; j--) {
            if (arr[j+1] < arr[j]) {
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < LEN; i++) {
        cout << arr[i] << " ";
    }
}


void bubbleSort() {
    int tmp;
    for (int i = 0; i < LEN; i++) {
        for (int j = 0; j < LEN-1; j++) {
            if (arr[i] > arr[j+1]) {
                tmp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = tmp;
            }
        }

        for (int k = 0; k < LEN; k++) {
            cout << arr[k] << ", "; 
        }
        cout << endl;
    }
}

void selectionSort() {
    int tmp, min_idx;
    for (int i = 0; i < LEN-1; i++) {
        min_idx = i;
        for (int j = i; j < LEN; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        tmp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = tmp;
    }
}


int main() {
    insertionSort();

    return 0;
}
