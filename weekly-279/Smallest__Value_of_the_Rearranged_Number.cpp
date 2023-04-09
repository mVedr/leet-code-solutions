#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
#define INF 1000000000
#define all(a) (a).begin(), (a).end()
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl '\n'
#define vi vector<int>
#define pi pair<int, int>
#define vvi vector<vector<int>>
using namespace std;

long long smallestNumber(long long num)
{
    if(num<10 && num>-10) return num;
    if (num > 0)
    {
           string str = to_string(num);
            sort(all(str));
          //  cout<<str<<endl;
            if(str[0]!='0')
            {return stoll(str);}
            else{
               for(int i = 1;i<str.length();i++){
                   if(str[i]!='0') {swap(str[i],str[0]);break;}
               }
                return stoll(str);
            }
    }else{
        num = num*-1;
        string str = to_string(num);
        sort(str.rbegin(),str.rend());
        return -1*stoll(str);

    }
}
    signed main()
    {
        fast;
        int x ; cin>>x;
        cout<<smallestNumber(x);
        return 0;
    }