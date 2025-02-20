#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve() {
    int t;
    cin >> t;
    while (t--) {
    	int n,m;
    	cin>>n>>m;
    	string s,x;
    	cin>>x>>s;
    	
    	int count=0;
    	bool found = false;
    	for(int i=0;i<=5;i++){
    		if(x.find(s) != string::npos) {
    			cout<<count<<endl;
    			found = true;
				break;
    		}
    		x.append(x);
    		count++;
		}
		if(!found)
			cout<<-1<<endl;
   }
}


int main(){
	freopen("input.txt","r",stdin);
	solve();
	return 0;
}
