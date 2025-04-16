#include<bits/stdc++.h>
using namespace std;

// Set -> unique elements, sorted by default
// Everything in logn TC
// It is implemented as a balanced binary search tree (usually a Red-Black tree)
void ExplainSet(){
    set<int> s;
    s.insert(1); // {1}
    s.insert(5); // {1, 5}
    s.insert(5); // {1, 5} (duplicate, not inserted)
    s.insert(10);// {1,5,10}

    //begin (), end(), rbegin(), rend(), size(), empty(), clear(), swap()
     
    auto it = s.find(5); // Find the element 5 in the set (Iterator pointing to 5)

    auto it1 = s.find(100); // Find the element 100 in the set (Iterator pointing to end)

    s.erase(5); // Erase the element 5 from the set (removes 5)
   // s.erase(it); // Erase the element pointed by the iterator (removes 1)
    int cnt = s.count(5); // Count the occurrences of 5 in the set (0 if not found, 1 if found)
    
    set<int> st;
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.insert(3); // {1,2,3}
    st.insert(4); // {1,2,3,4}
    st.insert(5); // {1,2,3,4,5}

    auto it2 = st.find(2);
    auto it3 = st.find(4);
    st.erase(it2,it3); //after erase (1,4,5) [first,last)

//    auto it = st.lower_bound(2);
//    auto it = st.upper_bound(3);

}

//Sorted Only & can store multiple occurences
void Explainmultiset(){
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); //All 1's are erased

    int cnt=ms.count(1);

    //Only a single one is erased

    ms.erase(ms.find(1)); // here you are pointing to the address
    //ms.erase(ms.find(1), ms.find(1)+2); //{1,1} both are erased
}

//Not sorted, but unique elements
//All operations work, except lower bound and upper bound
// TC - O(1)
void ExplainUnorderedSet(){
  unordered_set<int> st;
  // Example : {1,5,10}

}

int main(){
    ExplainSet();
    Explainmultiset();
    ExplainUnorderedSet();
    return 0;
}