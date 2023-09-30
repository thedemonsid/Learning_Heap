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
void heapify(vector<int>&nodes,int i){
    int parent=(i-1)/2;
    if(nodes[parent]<nodes[i]){
        swap(nodes[parent],nodes[i]);
        heapify(nodes,parent);
    }
}
// deletion function
void deletion(vector<int>&nodes,int i){
    swap(nodes[i],nodes[nodes.size()-1]);
    nodes.erase(nodes.end()-1);
    heapify(nodes,i);
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
    int n;
    cin>>n;
    deletion(nodes,n);
    
}