#include <bits/stdc++.h>
using namespace std;
//-----------------------

vector<int> p(10000007);

int main(){

 	for(int i=2; i<10000007; i++){
		if(p[i]) continue;
		for(int j=i; j<10000007; j+=i) p[j]++;
 	}
	return 0;
}
