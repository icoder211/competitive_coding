#include<bits/stdc++.h>
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long int ll;
typedef long double ld;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Nos                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define fo(i,n) for(ll i=0;i<n;i++)
#define forn(i,n) for(ll i=0;i<n;i++)
#define rfo(i,n) for(ll i = n;i >= 0;i--)
#define rfosn(i, s, n) for(ll i = n; i >= s; i--)
#define PI 3.141592654
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define pb push_back
#define mp make_pair
#define fosn(i, s, n) for(int i = s;i < n;i ++)
 
#define vb vector<bool>
#define vvb vector<vb>
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
#define ln '\n'
#define pii pair<int,int>
#define vpi vector<pii>
// #define unordered_set(T) unordered_set<T, custom_hash>
// #define unordered_map(T1, T2) unordered_map<T1, T2, custom_hash>
#define f first
#define se second
#define out2(a1,a2) cout << a1 << " " << a2 << endl  

const ll md = 1e9 + 7; //998244353 ;
//ll hash_prime = 31;
// const ll md = 998244353; // 1e9+7;
long long exp(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res%m;
}

ll ncr(ll n, ll k) {
    if(n < k) return 0;
    ll res = 1;
    for (int i = n - k + 1; i <= n; ++i)
        {res *= i; res %= md;}
    for (int i = 2; i <= k; ++i)
        {res *= exp(i, md-2, md); res %= md;}
    return res;
}

int dr[4] = {0, 1, 0, -1};
int dc[4] = {1, 0, -1, 0};
const int N = 3e5;
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll n;
ll m;
ll a[N], b[N];
void go1() {
    cin >> n;
    ll i = 1;
    map<ll, ll> c;
    ll ans  =0;
    while(i * i <= n) {
        // while(n % i == 0) {
        //     n /= i;
        //     c[i]++;
        // }
        if(n % i) {i ++; continue;}
        // cout << i <<  ln;
        {
            string s;
            ll j = i;
            while(j > 0) {
                s += ('0'+j%10);
                j /= 10;
            }
            string t = s;
            reverse(all(s));
            if(t == s) ans++;
        }
        if(i != n/i) {
            
            i = n/i;
            string s;
            ll j = i;
            while(j > 0) {
                s += ('0'+j%10);
                j /= 10;
            }
            string t = s;
            reverse(all(s));
            if(t == s) ans++;
            i = n/i;
        }
        
        i++;

    }
    cout << ans << ln;

}
int main(){   

    Nos;

    // freopen("a.txt", "r", stdin);
    cout << fixed << setprecision(25);

    int t=1;
    cin>>t;
    int t_=t;

    while(t--){
        cout << "Case #"<<t_-t<<": ";
        go1();
    }
    return 0;
}