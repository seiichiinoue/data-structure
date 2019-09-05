#include <bits/stdc++.h>
using namespace std;

struct Heap {
    vector<int> heap;
    Heap() {}

    void push(int v) {
        heap.push_back(v);  // 最後尾に値を追加
        int i = (int)heap.size() - 1;   // 追加されたノード番号
        while (i > 0) {
            int p = (i - 1) / 2;    // 親のノード番号
            if (heap[p] >= v) break;
            heap[i] = heap[p];  // 自分のノードを親の値に
            i = p;
        }
        heap[i] = v;    // 最終的にこの位置に
    }

    int top() {
        if (!heap.empty()) return heap[0];
        else return -1;
    }

    void pop() {
        if (heap.empty()) return;
        int v = heap.back();
        heap.pop_back();
        int i = 0;
        while (i * 2 + 1 < (int)heap.size()) {
            int child1 = i * 2 + 1, child2 = i * 2 + 2;
            if (child2 < (int)heap.size() && heap[child2] > heap[child1]) child1 = child2;
            if (heap[child1] <= v) break;
            heap[i] = heap[child1];
            i = child1;
        }
        heap[i] = v;
    }
};