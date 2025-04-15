#include<bits/stdc++.h>
using namespace std;

void explainDeque() {
    deque<int> d;
    d.push_back(1); //  {1} Add an element to the end of the deque
    d.emplace_back(2); // {1,2} Add an element to the end of the deque using emplace_back
    d.push_front(3); // {3,1,2} Add an element to the front of the deque
    d.emplace_front(4); // {4,3,1,2}Add an element to the front of the deque using emplace_front

    cout<<"insertion done"<<endl;
    cout<<d[0]<<" "<<d[1]<<" "<<d[2]<<" "<<d[3]<<endl; // Access the first, second, third and fourth elements of the deque

    d.pop_back(); // Remove the last element from the deque
    cout<<"After pop_back: "<<endl;
    for(auto it : d)
    {
        cout<<it<<" "; // Access each element of the deque using a range-based for loop
    }
    //d.pop_front(); // Remove the first element from the deque
}

int main() {
    explainDeque();
    return 0;
}