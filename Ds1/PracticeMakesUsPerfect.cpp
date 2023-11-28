#include <iostream>
#include <string>
using namespace std;

int main(){
    int a[4];
    int count=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
        if(a[i]>=10){
            count++;
        }
    }
    cout<<count;
}