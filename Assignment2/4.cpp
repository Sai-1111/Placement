//4th qn
#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n;
    cin >> n;
    int crime=0;
    int pol=0;
    int a[1000000];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        if(a[i]>=0){
            pol += a[i];
        }
        else if(a[i]<0){
            if(pol>0){
                pol = pol - abs(a[i]);
            }
            else{
                crime += abs(a[i]);
            }
        }
    }
    cout<< crime;
}