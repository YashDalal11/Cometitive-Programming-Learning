#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	vector<int> v;
	for(int i=1;i<=10000000;i++){
		int x=i;
		int cnt=0;
		for(int j=2;j<=23;j++){
			if(!(x%j)){
				while(x%j==0){
					x/=j;
				}
				cnt++;
				
			}
		}
		if(cnt>2){
			v.push_back(i);
		}
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<v.at(n-1)<<endl;
	}
	return 0;
}