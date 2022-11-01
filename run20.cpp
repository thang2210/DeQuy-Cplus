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



    int check(int n){
        int x = 1e9 , y = 1e9 , z = 1e9;

        if (n == 1) return 0;
        if (n % 2 == 0){
            x = 1 + check(n/2);
        }
        if(n % 3 == 0){
            y = 1 + check(n/3);
        }
        if (n > 1){
            z = 1 + check(n-1);
        }
        return min(x , min(y , z));
    }

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n; cin >> n;
        cout << check(n);
    }
