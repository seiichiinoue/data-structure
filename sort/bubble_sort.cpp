#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort(int *array, int size) {
    for (int i=0; i<size; ++i) {
        for (int j=size-1; j>i; --j) {
            if (array[j] < array[j-1]) {
                swap(&array[j], &array[j-1]);
            }
        }
    }
}

int main() {
    int N; cin >> N;
    int array[N];
    for (int i=0; i<N; ++i) cin >> array[i];
    bubble_sort(array, N);
    for (int i=0; i<N; ++i) cout << array[i] << " ";
    cout << endl;
}