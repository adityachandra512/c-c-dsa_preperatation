#include<iostream>
#define MAX 500
int element[MAX];

void quicksort(int element[], int left, int right) {
    int pivot, l, r;
    l = left;
    r = right;
    pivot = element[l];

    while (l != r) {  
        while (element[r] >= pivot && l < r) {  
            r--;
        }
        if (l != r) {
            element[l] = element[r];
            l++;
        }
        while (element[l] <= pivot && l < r) {
            l++;
        }
        if (l != r) {
            element[r] = element[l];
            r--;
        }
    }
    element[l] = pivot;
    pivot = l;
    l = left;
    r = right;

    if (l < pivot) {
        quicksort(element, l, pivot - 1);
    }
    if (r > pivot) {
        quicksort(element, pivot + 1, r);
    }
}

using namespace std;

int main() {
    int i, maxsize;
    cout << "Enter the number of elements you want to enter in the array" << endl;
    cin >> maxsize;
    
    if(maxsize > MAX) {
        cout << "Maximum size exceeded!" << endl;
        return 1;
    }

    cout << "Enter the elements of the array" << endl;
    for (i = 0; i < maxsize; i++) {
        cin >> element[i];
    }

    cout << "The elements of the array before sorting are" << endl;
    for (i = 0; i < maxsize; i++) {
        cout << element[i] << " ";
    }
    cout << endl;

    quicksort(element, 0, maxsize - 1);

    cout << "The elements of the array after sorting are" << endl;
    for (i = 0; i < maxsize; i++) {
        cout << element[i] << " ";
    }
    cout << endl;

    return 0;
}
