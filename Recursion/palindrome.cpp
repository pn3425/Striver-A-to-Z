#include<bits/stdc++.h>
using namespace std;

bool CheckPalindrome(int i,int n,string s){
   
    if(i>=n/2)return true;

    if(s[i] != s[n-i-1]) return false; 
    return CheckPalindrome(i+1,n,s);
}

int main(){

  string s;
  cout<<"Enter a string : ";
  cin>>s;
  int sz = s.length();
  if(CheckPalindrome(0,sz,s) == 1)
  {
    cout<<"It is a Palindrome";
  }
  else
  {
    cout<<"Not a Palindrome";
  }
}

/*
For MADAM : 

CheckPalindrome(0, 5, "MADAM")
    |
    --> s[0] == s[4] ('M' == 'M') --> CheckPalindrome(1, 5, "MADAM")
            |
            --> s[1] == s[3] ('A' == 'A') --> CheckPalindrome(2, 5, "MADAM")
                    |
                    --> s[2] == s[2] ('D' == 'D') --> CheckPalindrome(3, 5, "MADAM")
                            |
                            --> Base case reached (i >= n / 2): Return true

FOR MADASM :

CheckPalindrome(0, 6, "MADASM")
    |
    --> s[0] == s[5] ('M' == 'M') --> CheckPalindrome(1, 6, "MADASM")
            |
            --> s[1] == s[4] ('A' == 'A') --> CheckPalindrome(2, 6, "MADASM")
                    |
                    --> s[2] != s[3] ('D' != 'S') --> Return false


*/