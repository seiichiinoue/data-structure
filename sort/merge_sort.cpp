#include <bits/stdc++.h>
using namespace std;
#define INF 1000000

void merge(int *array, int l, int m, int r) {
    int n1 = m - l;
    int n2 = r - m;
    int L[n1+1], R[n2+1];
    for (int i=0; i<n1; ++i) L[i] = array[l+i];
    for (int i=0; i<n2; ++i) R[i] = array[m+i];
    L[n1] = INF;
    R[n2] = INF;
    int i, j=0, k=0;
    for (i=l; i<r; ++i) {
        if (L[j] <= R[k]) {
            array[i] = L[j];
            j++;
        } else {
            array[i] = R[k];
            k++;
        }
    }
}

void merge_sort(int *array, int l, int r) {
    if (l+1<r) {
        int m = (l+r)/2;
        merge_sort(array, l, m);
        merge_sort(array, m, r);
        merge(array, l, m, r);
    }
}

int main() {
    int N; cin >> N;
    int array[N];
    for (int i=0; i<N; ++i) cin >> array[i];
    merge_sort(array, 0, N);
    for (int i=0; i<N; ++i) cout << array[i] << " ";
    cout << endl;
}