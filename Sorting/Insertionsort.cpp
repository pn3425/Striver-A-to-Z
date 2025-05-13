#include<bits/stdc++.h>
using namespace std;

/*
Take an element and place it in its correct order

Eg : 

6 8 9 12 14 15 13

6, 8, 9, 12, 14/13, 15/13/14, 13/15
*/

void insertionSort(int n,int arr[])
{
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;

        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
  

}


int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter element in array : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(n, arr);





}