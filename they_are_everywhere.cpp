#include <string>
#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;

int main(){
    set <char> dif;
    string house;
    ll n;
    cin >> n >> house;
    for(ll i = 0; i < n; i++) dif.insert(house[i]);
    for (auto& str : dif) cout << str << ' ';
    return 0;
}