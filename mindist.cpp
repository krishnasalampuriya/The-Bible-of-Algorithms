#include<iostream>
#include<string>
#include <cstdlib>
using namespace std;

int main(){
	
	int N;
	cin>>N;

	string strings[N];
	for(int i=0;i<N;i++) cin>>strings[i];

	string A,B;
	cin>>A>>B;

	int ia=1000000, ib, min=1000000;


	for(int i=0;i<N;i++){
		if(strings[i]==A){
			ia = i;
			if(abs(ia-ib)<min) min = abs(ia-ib);
		}
		else if(strings[i]==B){
			ib = i;
			if(abs(ia-ib)<min) min = abs(ia-ib);
		}
	}

	cout<<min;

	return 0;

}
