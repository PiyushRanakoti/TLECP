#include<bits/stdc++.h>
typedef long long LL;
using namespace std;

void solve(){
	int t;
	cin>>t;
	while(t--){
		LL n,x;
		cin>>n>>x;
		vector<LL>points;
		points.push_back(0);
		for(int i=0;i<n;i++){
			LL point;
			cin>>point;
			points.push_back(point);
		}
		points.push_back(x);
		
		int k = points.size();
		
		LL dist = INT_MIN;
		for(int i=1;i<k;i++){
			if(i==k-1){
				dist = max(dist,2*(points[i]-points[i-1]));
			}
			else
				dist = max(dist,points[i]-points[i-1]);
		}
		
		cout<<dist<<endl;
	}
}

int main(){
	freopen("input.txt","r",stdin);
	solve();
	return 0;
}
