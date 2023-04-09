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
    int num1,num2;
    cin>>num1>>num2;

    int ops = 0;
    if(num2<num1) swap(num1,num2);
    while(num1>0 && num2>0){

        num2-=num1;
        ops++;
         if(num2<num1) swap(num1,num2);
    }
    cout<<ops;
    return 0;
}