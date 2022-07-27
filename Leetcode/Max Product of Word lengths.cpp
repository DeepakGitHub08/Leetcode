#include<bits/stdc++.h>
using namespace std;
bool iscommon(bitset<26>&a, bitset<26>&b){
	for (int i = 0; i < 26; ++i)
	{
		if(a[i] && b[i])
			return true;
	}
	return false;
}

int maxProduct(vector<string> & words){
	int n = words.size();
	vector<bitset<26>>bs(n);
	int ans = 0;
	for(int i = 0;i < words.size();i++){
		
		for(auto j : words[i]){
			bs[i][j -'a'] = 1;
		}

		for(int j = 0;j  < i;j++){
			if(!iscommon(bs[i], bs[j])){
				ans = max(ans, (int)words[i].size() *(int) words[j].size());
			}
		}
	}
	return ans;
}


int main(){
	vector<string>words = {"abcw","baz","foo","bar","xtfn","abcdef"};
	cout<<maxProduct(words);

}