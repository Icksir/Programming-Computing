#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;

int main(){
  ll l, a, b;
  cin >> l;
  for(ll i = 0; i < l; i++){
    cin >> a >> b;
    if(a == b && (a+b) % 3 == 0) cout << "YES\n";
    else if(a > b && (a+b) % 3 == 0 && a <= 2*b) cout << "YES\n";
    else if(a < b && (a+b) % 3 == 0 && b <= 2*a) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}