#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void heapify(int *array, int i, int n) {
    int child1 = i * 2 + 1;
    if (child1 >= n) return;
    if (child1 + 1 < n && array[child1 + 1] > array[child1]) ++child1;
    if (array[child1] <= array[i]) return;
    swap(&array[i], &array[child1]);
    heapify(array, child1, n);
}

void heap_sort(int *array, int size) {
    /* array全体をheapにする */
    for (int i=size/2-1; i>=0; --i) {
        heapify(array, i, size);
    }
    /* heapから1つずつ最大値を取り出す */
    for (int i=size-1; i>0; --i) {
        swap(&array[0], &array[i]);
        heapify(array, 0, i);
    }
}

int main() {
    int n; cin >> n;
    int array[n]; for (int i=0; i<n; ++i) cin >> array[i];
    heap_sort(array, n);
    for (int i=0; i<n; ++i) cout << array[i] << " ";
    cout << endl;
    return 0;
}