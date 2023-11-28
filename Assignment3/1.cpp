#include<iostream>
using namespace std;
int main(){
    int array[4],i,count=0;
    for(i=0;i<4;i++){
        cin>>array[i];
        if(array[i]>=20){
            count++;
        }
    }
    cout << count;
    return 0;
}