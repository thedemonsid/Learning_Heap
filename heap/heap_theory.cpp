/*
## Heap is special case of binary tree
>> In which every level is completely filled excpt last level
>> In last level the nodes are inserted left to right
>> Heap is of two types :
  1.max_heap
  2.min_heap
>> In max_heap the parent node is always greter then child node and vice versa in min_heap
>> Heap is used to implem=nt priority queue
>> heap is implemented using arrays
>> Heap is also called as [priority queue]
>> Heap is used to implement [heap sort,graph algorithms,dijkstra's algorithm]

## Representing Heap data structure
>> Heap is represented using arrays
>> Root node is stored at index 0
>> For any node at index i
   1. Left child is at index 2*i+1
   2. Right child is at index 2*i+2
   3. parent child is at index floor((i-1)/2)
>> Heap is represented using arrays because it i complete binary tree
   and it is easy to implement using arrays


*/