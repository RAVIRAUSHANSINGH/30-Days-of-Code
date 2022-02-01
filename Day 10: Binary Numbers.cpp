#include<bits/stdc++.h>
using namespace std;
int main() {
     int n;
     int a=0,b=0;
    cin >> n;
    while(n>0) {
        if(n%2==1){
            a++;
            if(a>b) b=a;
        }
        else a=0;
        n=n/2;
        }
        cout<<b<<endl;
 
    return 0;
}
