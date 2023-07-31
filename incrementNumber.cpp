#include<bits/stdc++.h>
using namespace std;
void increment(int & n){
    ++n;
}

int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
increment(n);
cout<<"n is: "<<n<<endl;
return 0;
}