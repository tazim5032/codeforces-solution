
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
    ll n,m,i,j,k,x,y,z,t;

    cin>>t;

    while(t--){

		cin>>n;

        vll a(n+1);

        for(i=1;i<=n;i++)cin>>a[i];

        int mx=0,pos=1;

        for(i=2;i<=n;i++){

            if(a[i]>mx){
                mx=a[i];
                pos=i;
            }
        }

        for(i=pos;i<=n;i++)cout<<a[i]<<" ";

        vector<int>ans(0,pos-1),v,vv;

        if(pos==n){

            for(i=1;i<pos;i++)v.pb(a[i]);
        }

        ans=max(ans,v);

        if(pos-1>=1)vv.pb(a[pos-1]);
        pos--;

        for(i=pos-1;i>=1;i--){

            if(a[i]>a[1])vv.pb(a[i]);
            else break;
        }

        for(j=1;j<=i;j++)vv.pb(a[j]);

        ans=max(ans,vv);

        for(i=0;i<ans.size();i++)cout<<ans[i]<< " ";
        cout<<endl;
    }

}



