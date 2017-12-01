#include <iostream>
#include <math.h>
#include <vector>
#include <limits.h>

using namespace std;

vector<int> prs;



bool es_primo(int n, vector<int> prs){
	float temp = sqrt(n);
	int temp2 = temp;
	if(temp - temp2 != 0){
		for(auto i = prs.begin(); i != prs.end() ;i++){
			if(n%*i == 0)
				return false;
			else
				return true;
		}
	}
	return false;
}

int main(){
	
	prs.push_back(2);
	prs.push_back(3);
	for(int i = 4; i < 20000000; i++){
		if(es_primo(i,prs)){
			prs.push_back(i);
			cout<<i;
		}
	}

	//for(auto it = prs.begin() ;it != prs.end() ;it++){
	//	cout<<*it;
	//}


	return 0;
}
