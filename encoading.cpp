#include<bits/stdc++.h>
using namespace std;

char func(string str){
    int f = 1, b = 16, mid;
    for(int i=0;i<4;++i){
        mid = (f + b)/ 2;
        if(str[i] == '0'){
            b = mid;
        }
        else{
            f = mid + 1;
        }
    }
    return (f - 1) + 'a';
}
void solve(string str, int m){
    m = m/4;
    for (int i = 0; i < m; i++)
    {
        cout << func(str.substr(4*i, 4));
    }
    cout << endl;
}
int main(){
    int t;cin >> t;
    while(t--){
        int m;cin >> m;
        string str;
        cin.ignore();
        cin>>str;
        cout << str;
        solve(str, m);
    }
}