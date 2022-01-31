#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

      int n;
      string str;
        long num;
        cin >> n;
        map <string, long> phone;
        for (int i = 0; i < n; i++) {
            cin >> str;
            cin >> num;
            phone[str] = num;
        }
        while(cin >> str) {
            if (phone.find(str) != phone.end()) {
                cout << str << "=" << phone.find(str)->second << endl;
            } else {
                cout << "Not found" << endl;
            }
        }

    return 0;
}
