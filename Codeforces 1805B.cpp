#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

ll fun(ll x){

    ll sum=0;

    while(x){

        sum+=x%10;

        x/=10;
    }

    return sum;
}

bool sajao(string a,string b){

    return (a.size()<b.size());
}
int main()
{
    ll n,m,i,j,k,x,y,z,t;

    cin>>t;

    while(t--){

        cin>>n;

        string str;
        cin>>str;

        ll mn=0;

        for(i=0;i<n;i++)if(str[i]<=str[mn])mn=i;

        cout<<str[mn];

        for(i=0;i<n;i++)if(i!=mn)cout<<str[i];
        cout<<endl;

    }

}


