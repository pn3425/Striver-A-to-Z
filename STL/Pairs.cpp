//Pair is in Utility Library
#include<bits/stdc++.h>
using namespace std;

void explainpair(){

pair<int, int> p = {1, 2}; // Create a pair of integers
cout<<p.first<<" "<<p.second<<endl; // Access the first and second elements of the pair

pair<int, pair<int, int>> p1 = {1, {2, 3}}; // Create a pair of an integer and another pair
cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl; // Access the elements of the nested pair

pair<int, int>arr[] = {{1, 2}, {3, 4}, {5, 6}}; // Create an array of pairs
cout<<arr[0].first<<" "<<arr[0].second<<endl; // Access the first pair in the array
cout<<arr[1].first<<" "<<arr[1].second<<endl; // Access the second pair in the array
}

int main(){
    explainpair();
    return 0;
}