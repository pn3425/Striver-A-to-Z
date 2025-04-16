#include<bits/stdc++.h>
using namespace std;

// Priority queue stores acc to highest value
void ExplainPrioQueue(){

    priority_queue<int> pq; // Max heap by default
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << "Top element is: " << pq.top() << endl; // Access the top element (10)

    pq.pop(); // Remove the top element (10)

    cout << "After pop: " << endl;
    cout << pq.top() << endl; // Access the new top element (8)

    cout << "Size of priority queue: " << pq.size() << endl; // Get the size of the priority queue (3)
    cout << pq.empty() << endl; // Check if the priority queue is empty (0 means not empty)


    //Priority Queue that stores the minimum element (MinHeap)
    priority_queue<int, vector<int>, greater<int>> pq; // Min heap
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << "Top element of min heap is: " << pq.top() << endl; // Access the top element (2)

//Push -> logn
//Top -> O(1)
//Pop -> logn

}

int main()
{
    ExplainPrioQueue();
    return 0;
}