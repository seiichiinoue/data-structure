#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void comb_sort(int *array, int size) {
    int h = size;
    bool is_swapped = false;
    while (h>1 || is_swapped) {
        if (h>1) {
            h = (h*10) / 13;
        }
        is_swapped = false;
        for (int i=0; i<size-h; ++i) {
            if (array[i]>array[i+h]) {
                swap(&array[i], &array[i+h]);
                is_swapped = true;
            }
        }
    }
}

int main() {
    int N; cin >> N;
    int array[N];
    for (int i=0; i<N; ++i) cin >> array[i];
    comb_sort(array, N);
    for (int i=0; i<N; ++i) cout << array[i] << " ";
    cout << endl;
}