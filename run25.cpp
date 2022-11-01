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


bool check(int a[] , int l , int r , int x){
    if (l > r) return false;
    int m= (l + r) /2;
    if (a[m] == x) return true;
    else if (a[m] < x) return check(a , l , m -1 , x);
    else return check(a , m + 1, r , x);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (int i =0 ; i < n ; i++){
        cin >> a[i];
    }
    int x; cin>> x;
    if (check( a, 0 , n -1 , x)) cout << "1";
    else cout << "0";
}


