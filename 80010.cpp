#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve() {
	int size;
	cin>>size;
	vector<int>arr(size);
	for(int i =0;i<size;i++){
		cin>>arr[i];
	}
	int mini = INT_MAX;
	
	for(auto i: arr){
		mini = min(abs(i),mini);
	}
	cout<<mini<<endl;
		
   }



int main(){
	freopen("input.txt","r",stdin);
	solve();
	return 0;
}
