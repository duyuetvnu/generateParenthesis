#include <iostream>
#include <string>
#include <vector>
using namespace std;
void generateParenthesis(int n, int open, int close, string s, vector<string> &ans){
    if(open==n/2 && close==n/2){
        ans.push_back(s);
        return;
    }
    if(open<n/2){
        generateParenthesis(n, open+1, close, s+"{", ans);
    }
	if(close<open){
        generateParenthesis(n, open, close+1, s+"}", ans);
    }
       
}
int main() {
    int n;
    cin >> n;
    vector<string> ans;
    for(int i = 0; i <= n; i+=2){
	    generateParenthesis(i, 0, 0,"",ans);
	}
	for(int i=0; i<ans.size(); ++i) cout << ans[i] << endl;
    return 0;
}
