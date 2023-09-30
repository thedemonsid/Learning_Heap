#include<bits/stdc++.h>
using namespace std;
// printinng array 
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
// insertion function
void insertion(vector<int>&nodes,int n){
    nodes.push_back(n);
    heapify(nodes,nodes.size()-1);
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
    insertion(nodes,n);
   
    
}