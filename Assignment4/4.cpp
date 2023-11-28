
#include <iostream>
using namespace std;
int smoll(int arr[], int n){
    int smol =arr[0];
    for(int i=0;i<n;i++){
        if(smol>arr[i]){
            smol=arr[i];
        }
    }
    return smol;
}
int main()
{
    int n, i;
    cin >> n;
    //int arr[n], sort[n];
    for(i = 0;i<n;i++){
        //cin >> arr[i];
    }
    //int smol = smoll(arr,n);
    //cout << "\nSmallest number: " << smol;
    return 0;
}