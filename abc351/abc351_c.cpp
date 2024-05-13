#include <iostream>
using namespace std;

int main() {
	int n,l=0;
	int a[200000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[l];
		l++;
		while(l>1){
			if(a[l-2]==a[l-1]){
				a[l-2]++;
				l--;
			}
			else break;
		}
	}
	cout<<l<<endl;
	return 0;
}
