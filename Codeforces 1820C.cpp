#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

int main()
{
    ll n,m,i,j,k,x,y,z,t;

    cin>>t;

    while(t--){

        cin>>n;

        vll a(n);

        map<ll,ll>mp;

        for(i=0;i<n;i++){

            cin>>a[i];

            mp[a[i]]++;
        }

        ll mex=0;

        while(mp[mex])mex++;

        if(mex==n){
            no;
            continue;
        }

        if(!mp[mex+1]){
            yes;
            continue;
        }

        ll l=-1,r=-1;

        for(i=0;i<n;i++)if(a[i]==mex+1)r=i;
        for(i=n-1;i>=0;i--)if(a[i]==mex+1)l=i;

        for(i=l;i<=r;i++)a[i]=mex;

        mp.clear();

        for(i=0;i<n;i++)mp[a[i]]++;

        ll f=0;

        for(i=0;i<=mex;i++){

            if(mp[i])continue;
            f++;
            break;
        }

        if(mp[mex+1])f++;

        if(f)no;
        else yes;
    }

}


