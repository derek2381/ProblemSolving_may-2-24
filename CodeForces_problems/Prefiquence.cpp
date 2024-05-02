// problem link
// https://codeforces.com/contest/1968/problem/B

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n1, n2;
        cin >> n1 >> n2;

        string str1, str2;
        cin >>str1 >> str2;
        int j = 0, i = 0;
        int count = 0;

        while(i < n1 && j < n2){
            if(str1[i] == str2[j]){
                count++;
                i++;
                j++;
            }else{
                j++;
            }
        }

        cout << count << endl;
    }
}
