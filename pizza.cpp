#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, a, act, max = 0, pos = 0, con = 0, left;
    vector <ll> array;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> a;
        array.push_back(a);
    }

    act = array[0];
    while(pos < n){
        left = n - pos;
        for(ll i = 0; i < left; i++){
            max = array[pos];
            if(max > act) break;
            con++;
            pos++; 
        }
        if(pos == n && act > max){
            pos = n - left + 1;
            cout << -1 << " ";
        }
        else{
            for(ll i = 0; i < con; i++){
                if(pos != n) cout << max << " ";
                else cout << -1 << " ";
            }
        }
        
        con = 0;
        act = array[pos];
        max = 0;
    }
    
    return 0;
}