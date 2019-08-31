#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int *array, int l, int r) {
    int pivot = array[r];
    int i = l-1;    // チェック済みindex
    for (int j=l; j<=r-1; ++j) {    
        if (array[j] <= pivot) {    
            ++i;                    
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i+1], &array[r]);
    return  i+1;
}

void quick_sort(int *array, int l, int r) {
    if (l<r) {
        int i = partition(array, l, r);
        quick_sort(array, l, i-1);
        quick_sort(array, i+1, r);
    }
}

int main() {
    int N; cin >> N;
    int array[N];
    for (int i=0; i<N; ++i) cin >> array[i];
    quick_sort(array, 0, sizeof(array) / sizeof(array[0]) - 1);
    for (int i=0; i<N; ++i) cout << array[i] << " ";
    cout << endl;
}