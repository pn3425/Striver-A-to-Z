#include<bits/stdc++.h>
using namespace std;

//for list singly linked list maintained
void explainlist() {

    list<int> l; // Create an empty list of integers
    l.push_back(1); //{1} Add an element to the end of the list
    l.emplace_back(2); //{1,2} Add an element to the end of the list using emplace_back
    
    l.push_front(3); //{3,1,2} Add an element to the front of the list
    l.emplace_front(4); //{4,3,1,2} Add an element to the front of the list using emplace_front

    //Rest functions same as vector
    //begin(), end(), rbegin(), rend(), size(), empty(), clear()
}

int main(){
    explainlist();
    return 0;   
}
