#include<bits/stdc++.h>
using namespace std;

void RevArrayApp1(int s,int e,int arr[]) //s -> start, l -> e //Approach 1 using 2 variables and as 2 pointer app
{
  if(s>=e)
    return;

  swap(arr[s],arr[e]);
  RevArrayApp1(s+1,e-1,arr);
}

void RevArrayApp2(int i,int n,int arr[]) //Approach 2 : Using half of array 
{
  if(i>=n/2) return;
  swap(arr[i],arr[n-i-1]);
  RevArrayApp2(i+1,n,arr);
}


int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    RevArrayApp1(0,n-1,arr); //Call for reversing the array 
    // cout<<"Reverse order for App 1 is : ";    //Uncomment to enable Approach 1
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    RevArrayApp2(0,n,arr);  
    cout<<"Reverse order for App 2 is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}