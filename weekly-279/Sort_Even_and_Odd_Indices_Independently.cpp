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

vector<int> sortEvenOdd(vector<int>& nums) {
        priority_queue<int> pq1;
        priority_queue<int,vector<int>,greater<int>> pq2;
        vector<int> ans(nums.size());

        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i%2==1) pq1.push(nums[i]);
            else pq2.push(nums[i]);
        }
        int i = 0;
        while(!pq1.empty() && !pq2.empty()){
            if(i%2){
                ans[i] = pq1.top();
                pq1.pop();
            }else{
                ans[i] = pq2.top();
                pq2.pop();
            }
            i++;
        }
        while(!pq1.empty()){
            ans[i] = pq1.top();
            pq1.pop();
        }
        while(!pq2.empty()){
            ans[i] = pq2.top();
            pq2.pop();
        }
        return ans;
    }

signed main(){
    fast;
    vector<int> nums = {4,1,2,3};
    vector<int> ans = sortEvenOdd(nums);

    for(auto it : ans) cout<<it<<" ";
    return 0;
}