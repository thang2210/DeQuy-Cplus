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



void in(int a[] ,int n){
    if (n == -1) return ;
    in(a , n -1);
    cout << a[n] << " ";

}


void in2(int a[] ,int n){
    if (n == -1) return ;
    cout << a[n] << " ";
    in2(a , n-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[1000];
    for (int i =0;i < n;i++){
        cin >> a[i];
    }
    in(a , n-1);
    cout << endl;
    in2(a , n-1);
}
