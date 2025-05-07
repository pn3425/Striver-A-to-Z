#include<bits/stdc++.h>
using namespace std;

//Hashing used for pre storing and fetching 
// MAXIMUM SIZE OF HASH TABLE : arr[10^6] (Inside Main), But globally 10^7 (Global Variable)  (OVERALL FOR INT TYPE)

//For Bool -> Inside Main (10^7), Globally (10^8)

int main(){

  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  cout<<"Enter the elements: ";
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  
  //Pre Compute
  int hash[13] = {0}; // Hash table of size 13 initialized to 0
  for(int i=0;i<n;i++)
  {
    hash[arr[i]] +=1;

  }

   int q;
   cout<<"Enter the number for which you want to find the frequency: ";
   cin>>q;
   while(q--)
   {
    //fetch
    int num;
    cin>>num;
    cout<<hash[num]<<endl; // Print the frequency of the number
   }
}