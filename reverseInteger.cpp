#include<bits/stdc++.h>
using namespace std;
int getReverse(int n){
    while(n>0){
        int lastdigit=n%10;
        ans=(ans*10)+lastdigit;
        n=n/10;
    }
    return ans;
}
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
int ans=getreverse(n);
cout<<"Reverse of the given number is: "<<ans<<endl;
return 0;
}