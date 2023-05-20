#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define mod 1000000007
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl


int main()
{
    int n,m,i,j,k,x,y,z,t;

    cin>>t;

    while(t--)
    {
        int a[n + 1];
        for(int i = 1; i <= n; i++)cin>>a[i];

        int mx = 0,pos=1;
        for(int i = 2; i <= n; i++)if(a[i] > mx)mx = a[i],pos = i;
        for(int i = pos; i <= n; i++)cout << a[i] << " ";

        vector<int> v,ans(0, pos - 1);

        if(pos == n)
        {
            for(int i = 1; i < pos; i++)v.push_back(a[i]);
        }

        ans = max(ans, v);

        vector<int> vv;

        if(pos - 1 >= 1) vv.push_back(a[pos - 1]);
        pos--;


        for(int i = pos - 1; i >= 1; i--)
        {
            if(a[i] > a[1])
            {
                vv.push_back(a[i]);
            }
            else
            {
                break;
            }
        }
        for(int j = 1; j <= i; j++)
        {
            vv.push_back(a[j]);
        }

        ans = max(ans, vv);
        for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;

    }

}




