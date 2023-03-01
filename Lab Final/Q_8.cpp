/*Implement a MinHeap using a MaxHeap.*/

#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{

public:
    vector<int> heap;

    MaxHeap()
    {
    }

    void insert(int x)
    {
        heap.push_back(x);
    }

    void remove(int idx)
    {
        heap[idx] = heap.back();
        heap.pop_back();
    }

    void swap(int i, int j)
    {
        int temp = heap[i];
        heap[i] = heap[j];
        heap[j] = temp;
    }

    void up_heapify(int idx)
    {
        while (idx > 0 && heap[idx] > heap[parent(idx)])
        {
            swap(idx, parent(idx));
            idx = parent(idx);
        }
    }

    void down_heapify(int idx)
    {
        int leftC = left(idx);
        int rightC = right(idx);
        int largest = idx;

        if (leftC < heap.size() && heap[leftC] > heap[largest])
        {
            largest = leftC;
        }

        if (rightC < heap.size() && heap[rightC] > heap[largest])
        {
            largest = rightC;
        }

        if (largest != idx)
        {
            swap(idx, largest);
            down_heapify(largest);
        }
    }

    int parent(int i)
    {
        return (i - 1) / 2;
    }

    int left(int i)
    {
        return 2 * i + 1;
    }

    int right(int i)
    {
        return 2 * i + 2;
    }

    int getMax()
    {
        return heap.front();
    }

    int size()
    {
        return heap.size();
    }
};

class MinHeap
{
public:
    MaxHeap maxH;

    void insert(int x)
    {
        maxH.insert(x);
        maxH.up_heapify(maxH.size() - 1);
    }

    void Delete(int idx)
    {
        int maxIdx = maxH.size() - 1;
        maxH.swap(idx, maxIdx);
        maxH.remove(maxIdx);
        maxH.down_heapify(idx);
        maxH.up_heapify(idx);
    }

    int getMin()
    {
        return maxH.getMax();
    }
};

int main()
{
    MinHeap minH;

    minH.insert(30);
    minH.insert(20);
    minH.insert(40);
    minH.insert(10);

    minH.Delete(20);

    cout << minH.getMin() << endl;

    return 0;
}
