//---------------------------//
//Bismillahir Rahmanir Raheem//
//---------------------------//
 
 
#include<bits/stdc++.h>
using namespace std;
#define  ull unsigned long long
#define  ll long long
#define M 1000000007
const int N=2e5+4;
ll a[N];
ll n,t;

int ok(ll m){
    ll res=0;
    for (ll i = 0; i < n; ++i)
    {
        res+=(m/a[i]);
        if(res>=t) return 1;
    }
    return 0;
}

void solve()
{
    cin>>n>>t; 
    for (ll i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    ll lo=1,hi=a[0]*t,mid;
    while(lo<hi){
        mid=lo+(hi-lo)/2;
        if(ok(mid)==0){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }
    if(ok(lo)){
        cout<<lo<<endl;
    }
    else{
        cout<<hi<<endl;
    }
}
int main()
{
    //fun();
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t=1;
    ll cs=1;
    //cin>>t;
    while(t--)
    {
        //cout<<"Case "<<cs<<": ";
        //cs++;
        solve();
    }
}