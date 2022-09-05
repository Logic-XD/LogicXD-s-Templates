#include <bits/stdc++.h>
using namespace std;
//-----------------------

vector<int> vec(100006, 0), dif(100007, 0);

void update(vector<int>& D, int l, int r, int x){
    D[l] += x; D[r + 1] -= x;
}

int main(){
	
    //get vec back
    for(int i=0; i<vec.size(); i++){
        if(i == 0) vec[i] = dif[i];
        else vec[i] = dif[i] + vec[i - 1];
    }

    return 0;
}
