#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve() {
    int t;
    cin >> t;
    while (t--) {
    	int size,element;
    	cin>>size>>element;
    	vector<int>arr(size);
    	for(int i=0;i<size;i++)
    		cin>>arr[i];
    	bool ans = false;
    	for(auto i : arr)
    		if(i==element) ans = true;
    	
    	cout<<(	(ans)?"Yes":"No")<<endl;
   }
}


int main(){
	freopen("input.txt","r",stdin);
	solve();
	return 0;
}
