
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

bool sajao(string a,string b)
{
    q
    return (a.size()<b.size());
}
int main()
{
    ll n,m,i,j,k,x,y,z,t;

    cin>>t;

    while(t--)
    {
        cin>>n;

        string str;

        cin>>str;

        n=str.size();

        for (char ch = 'a'; ch <= 'z'; ++ch)
        {
            int mx = 0;
            int cur = 0;

            for (int i = 0; i < n; ++i)
            {
                if (str[i] == ch)
                {
                    mx = max(mx,cur);
                    cur = 0;
                }
                else cur++;
            }

            mx = max(mx,cur);
            mi = min(mi,mx);
        }

        for (int i = 20; i >= 0; i--)
        {
            if (mi >> i & 1)
            {
                cout << i+1 << "\n";
                return;
            }
        }
        cout << "0\n";


    }

}

