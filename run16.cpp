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




    ll _min(ll n){
        if(n < 10) return n;
        else return min(n % 10 , _min(n/ 10));
    }

    ll _max(ll n){
        if (n < 10) return n;
        else return max(n % 10 , _max(n / 10));
    }


    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll n; cin >> n;
        cout << _max(n) << " " << _min(n);
    }
