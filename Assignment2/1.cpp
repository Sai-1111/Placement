//1st qn
#include<iostream>
using namespace std;
int main(){
    int n,n1,n2,n3,count = 0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >>n1>>n2>>n3;
        int sum = n1+n2+n3;
        if(sum >=2){
            count++;
        }
    }
    cout<<count;
}