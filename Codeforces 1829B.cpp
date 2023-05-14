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

		cin>>n;

		vll a(n);

		ll mx=0,cnt=0;

		for(i=0;i<n;i++){

            cin>>x;

            if(x==0)cnt++;
            else cnt=0;

            mx=max(mx,cnt);
		}

		cout<<mx<<endl;
    }

}


