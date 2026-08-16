#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t-- > 0) {
    int n;
    cin>>n;
    string s;
    bool flag = true;
    cin >> s;
    for (size_t idx = 0; idx < s.length() - 1; idx++) {
      if (s[idx] == s[idx + 2] && s[idx]!='?') {
        cout << 0<<'\n';
        flag = false;
        break;
      }
    }
    if (!flag)
      continue;
    int c = count(s.begin(), s.end(), '?');
    if (c == 2) {
      cout << 4<<'\n';
      continue;
    }
    if (c == 0) {
      cout << 1<<'\n';
      continue;
    }
    if(c==s.length()&&c==3){
        cout<<c<<'\n';
        continue;
    }
    cout<<2<<'\n';
  }
}
