#include<iostream>
using namespace std;

int main ()
{

	int n;
	cin>>n;
	
	int i = 1;
	while(i <= n){
		
		int j = 1;
		while(j <= n-i+1){
			cout<<j;
			j++;
		}
		
		j = 2;
		while(j <= i){
			cout<<"**";
			j++;
		}
		
//		j = 1;
//		while(j <= (i-1)*2){
//			cout<<"*";
//			j++;
//		}
		
		j = n-i+1;
		while(j){
			cout<<j;
			j--;
		}
		
		cout<<endl;
		i++;
	}

 return 0;
}

