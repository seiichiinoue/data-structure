#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void shaker_sort(int *array, int size) {
    for (int i=0; i<size; ++i) {
        for (int j=i+1; j<size; ++j) {
            if (array[j] < array[j-1]) {
                swap(&array[j], &array[j-1]);
            }
        }
        size--;
        for (int k=size-1; k>i; --k) {
            if (array[k] < array[k-1]) {
                swap(&array[k], &array[k-1]);
            }
        }
    }
}

int main() {
    int N; cin >> N;
    int array[N];
    for (int i=0; i<N; ++i) cin >> array[i];
    shaker_sort(array, N);
    for (int i=0; i<N; ++i) cout << array[i] << " ";
    cout << endl;
}
