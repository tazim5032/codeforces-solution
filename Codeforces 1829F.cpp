#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

bool sajao(string a,string b){

    return (a.size()<b.size());
}

int main()
{
    ll n,m,i,j,k,x,y,z,t;

    cin>>t;

    while(t--){

		cin>>n>>m;

        vll a(n+1);

        for(i=1;i<=n;i++)a[i]=0;

        for(i=0;i<m;i++){

            cin>>x>>y;

            a[x]++;
            a[y]++;
        }

        map<ll,ll>mp;

        for(i=1;i<=n;i++)mp[a[i]]++;

        vector<ll>v;

        for(auto it: mp)v.pb(it.second);

        sort(v.begin(),v.end());

        if(v.size()==3)cout<<v[1]<<" "<<v[2]/v[1]<<endl;
        else cout<<v[0]-1<<" "<<v[1]/(v[0]-1)<<endl;
    }

}

