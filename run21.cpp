#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}




bool check(int a[] , int l , int r){
    if(l >= r) return true;
    if (a[l] != a[r]) return false;
    else return check(a , l + 1 , r -1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (int i =0 ;i < n;i++){
        cin >> a[i];
    }
    if (check(a , 0 , n -1)) cout << "YES";
    else cout << "NO";
}
