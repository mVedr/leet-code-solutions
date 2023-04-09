#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
#define INF 1000000000
#define fast  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define endl '\n'
#define vi vector<int> 
#define pi pair<int,int>
#define vvi vector<vector<int>>
using namespace std;

class Bitset {
public:
   string s="",t="";
    int cnt=0;
    int size=0;
    Bitset(int size) {
        for(int i=0;i<size;i++){
            s+='0';
            t+='1';
        }
        this->size=size;
    }
    
    void fix(int idx) {
        if(s[idx]=='0')
            cnt++;
        s[idx]='1';
        t[idx]='0';
    }
    void unfix(int idx) {
        if(s[idx]=='1')
            cnt--;
        s[idx]='0';
        t[idx]='1';
    }
    void flip() {
        swap(s,t);
        cnt=size-cnt;
    }
    bool all() {
        return cnt==size;
    }    
    bool one() {
        return cnt;
    }    
    int count() {
        return cnt;
    }    
    string toString() {
        return s;
    }
};

signed main(){
    fast;
    bitset<100005> bs;
    cout<<"hi";
    return 0;
}