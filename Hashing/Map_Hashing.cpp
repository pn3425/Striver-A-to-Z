#include<bits/stdc++.h>
using namespace std;

//To solve the constraint of MAXIMUM SIZE OF HASH TABLE : arr[10^6] (Inside Main), But globally 10^7 (Global Variable)  (OVERALL FOR INT TYPE)
//We are using map<int,int> to store the frequency of elements in the array.
//Map stores everything in sorted.
// TC BY map is O(log(n)) for fetch and storing
int main(){

  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  cout<<"Enter the elements: ";
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }


// compute
      map<int,int> mpp;  //For string -> map<char,int> mpp;   (key is char and value is int)

     //Also unordered map can be used, where in it wont store in sorted order.
     //unordered_map<int,int> mpp;  //For string -> unordered_map<char,int> mpp;   (key is char and value is int) TC is O(1) for fetch and storing in Avg and best
     // But in worst case it is O(n) for unordered_map. ( n - no.of elements in the map)

    /*
    So first preference is to use unordered_map if TCL exceeded then use map.
    In unordere_map only single data type can be used for key and value. Not pair.
    */

     for(int i=0;i<n;i++)
     {
        mpp[arr[i]]++;
     }

  int q;
    cout<<"Enter the number for which you want to find the frequency: ";
    cin>>q;
    while(q--)
    {
        //fetch
        int number;
        cout<<"Enter the number: ";
        cin>>number;
        cout<<mpp[number]<<endl; // Print the frequency of the number
    }
}


/*
Hashing :

1) Division Method (Linear Chaining)

arr[i] % 10 is done

[2,5,16,28,139,38] -> [2,5,6,8,9,8]

-> 0
-> 1
-> 2 -> 2
-> 3 -> 
-> 4 -> 
-> 5 -> 5
-> 6 -> 6
-> 7 ->
-> 8 -> 8 -> 8 (28,38) so here chaining is done.



---> Collision : So in the below example, if all the keys end up in same hash values then it is called as collision. (Worst Case)
18,78,38,48,..........1008

0-> 
1
2
.
.
.
8 -> 18 -> 78 ->....................







*/