#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve() {
    int t;
    cin >> t;
    while (t--) {
    	int size ;
    	cin>>size;
    	int sum=0;
    	for(int i=0;i<size-1;i++){
    		int temp;
    		cin>>temp;
    		sum+= temp;
		}
		cout<<(0-sum)<<endl;
   }
}


int main(){
	freopen("input.txt","r",stdin);
	solve();
	return 0;
}
