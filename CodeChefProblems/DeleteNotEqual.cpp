// problem link
// https://www.codechef.com/problems/DELNQ


// code

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    string str;
	    cin >> n >> str;
	    
	    int z = 0, o = 0;
	    
	    for(char c : str){
	        if(c == '0'){
	            z++;
	        }else{
	            o++;
	        }
	    }
	    
	    if(z > 0 && o > 0){
	        cout << 1 << endl;
	    }else{
	        cout << n << endl;
	    }
	}
	return 0;
}
