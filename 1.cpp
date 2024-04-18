//---------------------------//
//Bismillahir Rahmanir Raheem//
//---------------------------//

 
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



void solve()
{

    int n,len=0; 
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
        
    long long sum=a[0], curr=a[0], ans=0;
    for(int i=1; i<n; i++){
        sum += a[i];
        ans = min(ans, curr+a[i]);
        curr = min(curr + a[i], a[i]);
    }
    //cout<<ans<<endl;
    ans=abs(ans);
    
    cout<<sum+2*ans<<endl;
    
}


int main()
{
    //fun();
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