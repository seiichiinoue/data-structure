#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int *array, int size) { 
    for (int i=1; i<size; ++i) {
        int key = array[i];
        int j = i;
        while (j>0 && array[j-1]>key) {
            array[j] = array[j-1];
            j--;
        }
        array[j] = key;
    }
}

int main() {
    int N; cin >> N;
    int array[N];
    for (int i=0; i<N; ++i) cin >> array[i];
    insertion_sort(array, N);
    for (int i=0; i<N; ++i) cout << array[i] << " ";
    cout << endl;
}