#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int, int>p1, pair<int, int>p2){   //Try to take 2 pairs {  p1 }  & {  p2 } and try to deduce the logic
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //Equal condition handled itself

    if(p1.first > p2.first) return true;
    return false;

}

void ExplainExtra(){
  

   // sort(a,a+n); // Sort the array in ascending order, here a+n points next ot last element so basically [first,last)
    vector<int> v = {5,3,9,10,12};
    sort(v.begin(), v.end()); // Sort the vector in ascending order
    cout<<"Sorted vector: ";
    for(auto it : v){
        cout<<it<<" "; // Print each element of the sorted vector
    }

    //{1,3,5,2} -> {1,3,2,5}
    //sort(a+2,a+4); // Sort the subarray from index 2 to 4 (exclusive) in ascending order

    //In Descending Order
    //sort(a,a+n,greater<int>()); // Sort the array in descending order

  // Sorting in my way
   pair<int, int> arr[] = {{1,2}, {2,1}, {4,1}};
  // Sort it acc to second element
  // if second element is same, then sort
  // it acc to first element but in dsc order

  // {2,1} {4,1} {1,2} -> Sorted acc to second ele
  // {4,1} {2,1} {1,2} -> Sorted acc to first ele in dsc order

  // sort(a,a+n,comp) Comp is a self written comparator & bool function

}

void ExplainMore(){
 int num =  7; //decimal is 111
 //Give how many 1's are there, set bits
 int cnt = __builtin_popcount(num);
    cout<<cnt<<endl; //Output is 3

  long long n = 123543;
  int c = __builtin_popcountll(n); //For long long int
  cout<<c<<endl; 

}

void ExplainPermutation(){

    string s = "123";
    sort(s.begin(), s.end()); // Sort the string in ascending order to generate permutations
    do{
        cout<<s<<endl; // Print all permutations of the string s
    }while(next_permutation(s.begin(), s.end())); // Generate the next permutation of the string s

    //int maxi = *max_element(s.begin(), s.end()); // Find the maximum element in the string s
    //int maxi = *max_element(a,a+n); // Find the maximum element in the array a
    //int mini = *min_element(a,a+n); // Find the minimum element in the array a
    
}

int main()
{
    //ExplainExtra();
    //ExplainMore();
    ExplainPermutation();
    return 0;
}