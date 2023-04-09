#include<bits/stdc++.h>
#define int long long
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

    int f(int ind,vector<int> &slots,vector<int> &nums,int numSlots,map<pair<int,vector<int>>,int> &dp){
        
        if(ind>= nums.size()) return 0;
        
        int maxi = INT_MIN;
        if(dp.find({ind,slots})!=dp.end()) return dp[{ind,slots}];
        for(int k=1;k<=numSlots;k++){
            
            if(slots[k]<2){
                slots[k]++;
                int ans = (nums[ind] & k) + f(ind+1,slots,nums,numSlots,dp);
                maxi  = max(maxi,ans);
                slots[k]--;
            }
        }
        return dp[{ind,slots}] = maxi;
    }
    int maximumANDSum(vector<int>& nums, int numSlots) {
        vector<int> slots(numSlots+1,0);
        map<pair<int,vector<int>>,int> dp;
        return f(0,slots,nums,numSlots,dp);
    }

signed main(){
    fast;
    
    return 0;
}