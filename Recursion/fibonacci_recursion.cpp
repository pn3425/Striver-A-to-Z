#include<bits/stdc++.h>
using namespace std;

//Returning the nth number of series
// TC - 2^n (Exponential)

int Fiborecur(int n)
{
    if(n<=1)return n;
    int last = Fiborecur(n-1);
    int slast = Fiborecur(n-2);

    return last + slast;
}

int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    int res = Fiborecur(n);
    cout<<res;
}
/*
Fiborecur(4) = 3
    |
    --> Fiborecur(3) = 2
    |       |
    |       --> Fiborecur(2) = 1
    |       |       |
    |       |       --> Fiborecur(1) = 1
    |       |       --> Fiborecur(0) = 0
    |       |
    |       --> Fiborecur(1) = 1
    |
    --> Fiborecur(2) = 1
            |
            --> Fiborecur(1) = 1
            --> Fiborecur(0) = 0







                    Fiborecur(4)
                   /             \
         Fiborecur(3)           Fiborecur(2)
          /        \             /        \
 Fiborecur(2)   Fiborecur(1)  Fiborecur(1) Fiborecur(0)
    /    \
Fiborecur(1) Fiborecur(0)

Which resolves to:
                    3
                  /    \
                2        1
              /   \     /  \
            1      0   1    0


Step-by-step:
Fiborecur(4) needs Fiborecur(3) and Fiborecur(2)

Fiborecur(3) needs Fiborecur(2) and Fiborecur(1)

Fiborecur(2) needs Fiborecur(1) and Fiborecur(0)

Fiborecur(1) returns 1

Fiborecur(0) returns 0

and so on.

Values:
Fiborecur(1) = 1

Fiborecur(0) = 0

Fiborecur(2) = 1 + 0 = 1

Fiborecur(3) = 1 + 1 = 2

Fiborecur(4) = 2 + 1 = 3

*/