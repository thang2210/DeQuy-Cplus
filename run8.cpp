#include<bits/stdc++.h>


using ll  = long long;
using namespace std;


ll gdc(ll a , ll b){
    return b == 0 ? a : gdc(b , a % b);
}

ll lcm(ll a, ll b){
    return a * b / gdc(a, b);
}

int main() {
    ll a , b; cin >> a >> b;
    cout << gdc( a, b) << " " << lcm(a , b);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
