#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve() {
    int t;
    cin >> t;
    while (t--) {
    	int size;
    	cin>>size;
    	vector<int>arr(size);
    	unordered_map<int,int>mp;
    	for(int i=0;i<size;i++){
    		cin>>arr[i];
		}
		string ans = "YES";

		for(auto i : arr){
			mp[i]++;
			if(mp.size()>2){
				ans = "NO";
				break;
			}		
		}
		
		if(mp.size()==2){
			int f1 = begin(mp)->second;
			if(f1!= size/2 && f1 != (size+1)/2)
				ans = "NO";
		}
		
		cout<<ans<<endl;		
   }
}


int main(){
	freopen("input.txt","r",stdin);
	solve();
	return 0;
}

