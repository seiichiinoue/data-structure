#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int *array, int size) {
    for (int i=0; i<size; ++i) {
        for (int j=size-1; j>i; --j) {
            if (array[j] < array[j-1]) {
                int k = array[j];
                array[j] = array[j-1];
                array[j-1] = k;
            }
        }
    }
}

int main() {
    int N; cin >> N;
    int array[N];
    for (int i=0; i<N; ++i) cin >> array[i];
    bubble_sort_quick(array, N);
    for (int i=0; i<N; ++i) cout << array[i] << " ";
    cout << endl;
}