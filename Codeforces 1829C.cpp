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

		ll x=1e9,y=1e9,mx=1e9,f=0;

		for(i=0;i<n;i++){

            cin>>k;

            string str;

            cin>>str;

            if(str[0]=='1' && str[1]=='1'){

                mx=min(mx,k);
                f++;
            }
            else{

                if(str[0]=='1')x=min(x,k);
                else if(str[1]=='1')y=min(y,k);
            }
		}


        if(!f){

            if(x==1e9 || y==1e9){

                cout<<-1<<endl;
                continue;
            }

            cout<<x+y<<endl;

            continue;
        }

		cout<<min(mx,x+y)<<endl;
    }

}



