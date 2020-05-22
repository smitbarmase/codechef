#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for(int i = a; i < n; i++)
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define mod 1000000007
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  cin >> t;
  while(t--)
  {
    int n, z;
    cin >> n >> z;
    priority_queue<int> pq;
    f(i, 0, n) {
      int x;
      cin >> x;
      pq.push(x);
    }
    int a = 0;
    while(z > 0 && pq.empty() == false) {
      int s = pq.top();
      pq.pop();
      z -= s;
      s /= 2;
      a++;
      if(s > 0) pq.push(s);
    } 
    if(z > 0) {
      cout << "Evacuate" << endl; 
    } else {
      cout << a << endl;
    }
  }
  return 0;
}