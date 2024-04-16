//---------------------------//
//Bismillahir Rahmanir Raheem//
//---------------------------//

//
//
 
#include<bits/stdc++.h>
using namespace std;

 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
 

#define  ull unsigned long long
#define  ll long long int
#define lld long double
#define M 1000000007

const int N=4e4+10;
const int mod=998244353;

vector<ll>a;
vector<ll> dp(N, 0); 
int paln(ll i){
        string s=to_string(i);
        ll k=0,j=s.size()-1;
        while(k<=j){
            if(s[k]!=s[j]){
                return 0;
            }
            k++;
            j--;
        }
        return 1;
}


void solve()
{
    ll n;
    cin>>n;
    
    ll x=n;
    cout << dp[x] << endl;
}
int main()
{
    //fun();
    for (int i = 1; i <=N; ++i)
    {
        if(paln(i)) a.push_back(i);
    }
    dp[0]=1;

    for (ll i = 0; i <a.size(); i++) {
        //cout<<a[i]<<endl;
        for (ll weight = 0; weight <=N; weight++) {
            //cout<<weight<<" "<<a[i]<<endl;
            if (weight - a[i] >= 0) { 
                //cout<<weight<<" "<<a[i]<<endl;
                dp[weight] += dp[weight - a[i]];
                dp[weight] %= M;
            }
        }

    }
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t=1;
    ll cs=1;
    cin>>t;
    while(t--)
    {
        //cout<<"Case "<<cs<<": ";
        //cs++;
        solve();
    }
}