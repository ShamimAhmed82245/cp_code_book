//---------------------------//
// Bismillahir Rahmanir Raheem//
//---------------------------//

#include <bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template <class T>
// using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ff first
#define ss second
#define pb push_back
#define ull unsigned long long
#define ll long long
#define lld long long double

const int N = 2e5 + 10, mod = 998244353, MOD = 1e9 + 7;
const ll inf = 1e18 + 8, INF = LONG_LONG_MAX;

ll bigMod(ll b,ll p,ll m)
{
    if(p==0) return 1;
    else if(p&1){
        ll a=bigMod(b,p-1,m)%m;
        return ((a%m)*(b%m))%m;
    }
    else{
        ll a=bigMod(b,p/2,m)%m;
        return ((a%m)*(a%m))%m;
    }

}


void solve()
{
    ll b,p,m;
    while(cin>>b>>p>>m)
        cout<<(bigMod(b,p,m)%m)<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t = 1;
    ll cs = 1;
    //cin >> t;
    while (t--)
    {
        // cout<<"Case "<<cs<<": ";
        // cs++;
        solve();
    }
    return 0;
}