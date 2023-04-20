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

        cin>>x>>y;

        m=x+y;

        for(i=1;i<100000;i++){

            k=i-1;

            k+=(x+i-1)/i;
            k+=(y+i-1)/i;

            m=min(k,m);
        }

        cout<<m<<endl;

    }

}

