#include<bits/stdc++.h>
using namespace std;

//TC - O(n^2)  SC - O(1) (In place sorting)

void SelectionSort(int arr[],int n){
 //In Selection sort, find minimum and swap, this will go uptil n-2 (Since for array it is n-1, but in the sort last element will automatically get sorted, hence n-2)

    for(int i=0;i<n-2;i++)
    {
        int mini = i;
        for(int j=i;j<n-1;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini = j;
            }

        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i]  = temp;
    }

    cout<<"Sorted Elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
  int n;
  cout<<"Enter n : ";
  cin>>n;
  int arr[n];
  cout<<"Enter Array Elements : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  SelectionSort(arr,n);
}

/*

13,46,24,52,20,9

i    mini   j       arr[j]<arr[mini]   mini = j        swap -> arr[i], arr[mini] 
0      0    0             13<13 f
            1             46<13 f
	        2             24<13 f 
	        3             52<13 f
	        4  	          20<13 f
	        5             9<13  t     mini = 5        9,46,24,52,20,13
            
1    1      1             46<46 f
            2             24<46 t     mini = 2        
     2      3             52<24 f
            4             20<24 t     mini = 4
     4      5             13<20 t     mini = 5        9,13,24,52,20,46              

----------------------------GHCP---------------------------------------

Pass 1 (i = 0):
Find the minimum element from index 0 to 5

13 < 13 (false)
46 < 13 (false)
24 < 13 (false)
52 < 13 (false)
20 < 13 (false)
9 < 13 (true) → Update mini = 5

Swap arr[0] and arr[5] : [9, 46, 24, 52, 20, 13]


Pass 2 (i = 1):
Find the minimum element from index 1 to 5.
Compare elements:

46 < 46 (false)
24 < 46 (true) → Update mini = 2
52 < 24 (false)
20 < 24 (true) → Update mini = 4
13 < 20 (true) → Update mini = 5

Swap arr[1] and arr[5]: [9, 13, 24, 52, 20, 46]

Pass 3 (i = 2):
Find the minimum element from index 2 to 5.

24 < 24 (false)
52 < 24 (false)
20 < 24 (true) → Update mini = 4
46 < 20 (false)

Swap arr[2] and arr[4] : [9, 13, 20, 52, 24, 46]

Pass 4 (i = 3):
Find the minimum element from index 3 to 5.
Compare elements:

52 < 52 (false)
24 < 52 (true) → Update mini = 4
46 < 24 (false)

Swap arr[3] and arr[4] : [9, 13, 20, 24, 52, 46]

Pass 5 (i = 4):
Find the minimum element from index 4 to 5.
Compare elements

52 < 52 (false)
46 < 52 (true) → Update mini = 5

Swap arr[4] and arr[5] : [9, 13, 20, 24, 46, 52]
The array is now sorted.

*/