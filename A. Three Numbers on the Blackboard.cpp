#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t-- > 0) {
    int a, b, c;
    cin >> a >> b >> c;
    while (true) {
      if (a + b < c)
        c = a + b;
      else if (a + c < b)
        b = a + c;
      else if (b + c < a)
        a = b + c;
      else
        break;
    }
    int range = max({a, b, c}) - min({a, b, c});
    cout << range << '\n';
  }
}
