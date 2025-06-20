#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
 
    cin >> n;
 
    int a1, a2, a3;
    int ct = 0;	
 
    while (n--){
        cin >> a1 >> a2 >> a3;
 
        if (a1 && a2 == 1 || a1 && a3 == 1 || a2 && a3 == 1){
            ct++;
        }
            
    }
    cout << ct << endl;
 
    return 0;
 
 
}