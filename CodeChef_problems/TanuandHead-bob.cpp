// problem link
// https://www.codechef.com/problems/HEADBOB?tab=statement

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;

	    string str;
	    cin >> str;

	    int ci = count(str.begin(), str.end(), 'I');
	    int cy = count(str.begin(), str.end(), 'Y');
	    int cn = count(str.begin(), str.end(), 'N');


	    if(ci >= 1){
	        cout << "INDIAN\n";
	    }else if(cy > 0){
	        cout << "NOT INDIAN\n";
	    }else{
	        cout << "NOT SURE\n";
	    }
	}
	return 0;
}
