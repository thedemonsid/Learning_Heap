#include<bits/stdc++.h>
using namespace std;
// printinng vector
void print(vector<int>nodes){
    for(int i=0;i<nodes.size();i++){
          cout<<nodes[i]<<" ";
    }
    cout<<"\n";
}
// heapify function
void heapify(vector<int>& nodes, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && nodes[left] > nodes[largest]) {
        largest = left;
    }

    if (right < n && nodes[right] > nodes[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(nodes[i], nodes[largest]);
        heapify(nodes, n, largest);
    }
}
// heap_sort function
void heap_sort(vector<int>&nodes){
    int n = nodes.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(nodes, n, i);
    }

    for (int i = n - 1; i >= 0; i--) {
        swap(nodes[0], nodes[i]);
        heapify(nodes, i, 0);
    }
    print(nodes);
}
int main(){
    vector<int>nodes;
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {   int n;
        cin>>n;
        nodes.push_back(n);
    }
    heap_sort(nodes);
    
}