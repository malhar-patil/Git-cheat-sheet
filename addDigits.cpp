#include<bits/stdc++.h>
using namespace std;

int addDigits(int n){
    int ans=0;
    while(n>0){
        int lastdigit=n%10;
        ans+=n;
        n=n/10;
    }
    return;
}

int main(){

int n;
cout<<"Enter a number: ";
cin>>n;
int ans= addDigits(n);
cout<<"Sum of digits is: "<<ans<<endl
return 0;
}