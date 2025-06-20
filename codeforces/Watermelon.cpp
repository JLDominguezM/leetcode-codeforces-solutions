#include <iostream>
using namespace std;
int peso;
int main(){
    cin>>peso;
    if(peso % 2==0 && peso > 2){
        
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}