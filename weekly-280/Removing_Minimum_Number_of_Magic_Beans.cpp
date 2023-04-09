#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
#define INF 1000000000
#define all(a) (a).begin(),(a).end()
#define fast  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define endl '\n'
#define vi vector<int> 
#define pi pair<int,int>
#define vvi vector<vector<int>>
using namespace std;

signed main(){
    fast;
    int nn; cin>>nn;
    vector<int> beans(nn);
    f(i,0,nn) cin>>beans[i];
    sort(beans.begin(),beans.end());
        long long ans = 1e18;
        long long sum = 0;
        for(auto it : beans) sum+=it;
        long long n = beans.size();
        for(long long i=0;i<n;i++){
            long long x = sum - (n-i)*(long long)beans[i]*1LL;
            ans = min(ans,x);
        }
     cout<<ans;
   
    return 0;
}