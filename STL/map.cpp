#include<bits/stdc++.h>
using namespace std;

//map<key,value>
//key and Value (Key and Value can be of any DS)
//Map stored unique keys in sorted order
//Sorted order of "key"

void ExplainMap(){
    map<int, int> m; // Create an empty map of integers
    map<int, pair<int, int>> m1; // Create an empty map of integers and pairs
    map<pair<int, int>, int> m2; // Create an empty map of integers and vectors
    
    m[1]=2; //At key 1, 2 is stored
    m.emplace(3,1); //At key 3, 1 is stored
    m.insert({2,3}); //At key 2, 3 is stored

    // [ {1,2}, {2,3}, {3,1}] Store in sorted order

    m2[{2,3}]=10; // For 3 Map

    //For Printing 

    for(auto it : m)
    {
        cout<<it.first<< " "<<it.second<<endl;
    }
 
    cout<<m[1]<<endl;  // Answer is 2, since Key 1 stores Value 2  
    cout<<m[5]<<endl;  //Gives zero if something does not exists
    
    auto it = m.find(3); // it is pointing to {1,3} (Iterator pointing to 3 for key)
    //cout<< *(it).second; // Access the value associated with key 3 (1)
    cout<<it->second; // Access the value associated with key 3 (1)

   auto it = m.find(5); // it is pointing to end (After the map)

   auto it = m.lower_bound(2); // it is pointing to {2,3} (Iterator pointing to 2 for key)
   auto it = m.upper_bound(3); // it is pointing to {3,1} (Iterator pointing to 3 for key)

   //Erase, sWAP , Size, Empty
}

void ExplainMultiMap(){
    //Can save multiple,duplicate keys 
    //only m[key] is not allowed
}

void ExplainUnorderedMap(){
    //Same as set and unoordered_Set difference
    //Not sorted, randomised
    //Unique Keys
}


int main()
{
    ExplainMap();
    ExplainMultiMap();
    ExplainUnorderedMap();
    return 0;
}