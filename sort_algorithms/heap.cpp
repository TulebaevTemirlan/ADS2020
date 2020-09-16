#include <iostream>
#include <vector>
using namespace std;

class MinHeap{
    public:
    vector <int> a;
    int sz;

    MinHeap(){
        sz = 0;
    }

    int parent(int i){
       return (i - 1) / 2;
   }
    int left(int i){
        return 2 * i + 1;
    }
    int right(int i){
        return 2 * i + 2;
    }
    int getMin(){
        return a[0];
    }

    void insert(int k){
        a.push_back(k);
        sz++;
        int i = sz -1;
        while(i > 0 && a[parent(i)] > a[i]){
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
    }

    void heapify(int i){
        if (left(i) > sz -1){
            return;
        }
        int j = left(i);

        if (right(i) < sz && a[right(i)] < a[j]){
            j = right(i);
        }
        if (a[i] > a[j]){
            swap(a[i], a[j]);
            heapify(j);
        }
    }

    void print(){
        for(int i = 0; i < sz; i++){
            cout << a[i] << " ";
        }
    }

    int extractMin(){
        int root_value = a[0];
        swap(a[0], a[sz -1]);
        sz--;
        heapify(0);
        return root_value;
    }
};
int main(){
    MinHeap *minHeap = new MinHeap();
    int n, k;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> k;
        minHeap->insert(k);
    }
    for(int i = 0; i < n; i++){
        cout << minHeap->extractMin() << " ";
    }

    //minHeap->print();
    return 0;
}

// bobule
// quick
// merge
// heapsort