#include<bits/stdc++.h>
using namespace std;

//Push the maximum to the end, by doing adjacent swaps
//TC - O(n^2) (Worst Case Scenario), O(n) (Best Case when element are sorted in ascending order)

/*
For Loop 
0 to n-1
0 to n-2
0 to n-3
.....
.....
0 to 1

hence i=n-1 ; i>=1 ; i++
*/

void bubblesort(int n,int arr[]){

    for(int i=n-1;i>=0;i--)
    {
        int didSwap = 0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1]){
            int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;   
                didSwap = 1;             
            }
        }
        if(didSwap == 0)
        {
            break;
        }
        cout<<"runs\n";
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}

int main(){
int n;
cout<<"Enter  n : ";
cin>>n;
int arr[n];
cout<<"Enter each element : ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

bubblesort(n,arr);

}

