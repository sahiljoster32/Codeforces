#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
typedef pair<intl,intl> pi;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i,a,n) for(intl i=a;i<n;i++)


void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

 void print(vector<intl>v){
for(auto x:v){
cout<<x<<' ';
}
cout<<endl;
}

bool sortbySec(pair<intl,intl>&a,pair<intl,intl>&b){
    return (a.second>b.second);
}
intl t,n,k;




void solve(){
    cin>>n>>k;
    
    if(n%2==1){
        cout<<"1 "<<(n-1)/2<<" "<<(n-1)/2<<"\n";
    }
    else{
        if((n-2)%4==0){
            cout<<"2 "<<(n-2)/2<<" "<<(n-2)/2<<"\n";
        }
        else{
             cout<<(n)/2<<" "<<(n)/4<<" "<<(n)/4<<"\n";
        }
    }
}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
      solve();
    
}
}
