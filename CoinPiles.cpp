#include <bits/stdc++.h>
using namespace std;
int main(){
  int t,a,b;
  cin>>t;
  for(int i=0;i<t;i++){
  	cin>>a>>b;
  	if((a+b)%3==0&&min(a,b)*2>=max(a,b))
  		cout<<"YES\n";
  	else
  		cout<<"NO\n";
  	

  }
}
