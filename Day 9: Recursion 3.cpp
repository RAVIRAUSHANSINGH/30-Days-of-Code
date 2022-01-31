#include<bits/stdc++.h>
using namespace std;


int factorial(int n) {
    if(n<=1){
        return 1;
    }
    int fact = factorial(n-1);
    int ans = n*fact;
    return ans;

}
int main() {
    int n;
    cin>>n;
    cout<<factorial(n);
    

    return 0;
}
