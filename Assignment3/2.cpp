#include <iostream>
using namespace std;
int main(){
    int n;
    int a,b;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a >> b;
        int total = 0;
        int sum = a+b;
        int n = sum;
        while (n!=0){
            int x = n%10;
            if (x == 2 || x == 3 || x == 5){
                total += 5;
            }
            else if (x == 0 || x == 6 || x == 9){
                total += 6;
            }
            else if (x == 1){
                total += 2;
            }
            else if(x == 4){
                total += 4;
            }
            else if(x == 7){
                total += 3;
            }
            else if (x == 8){
                total += 7;
            }
            n = n/10;
        }

    cout << total;
    }
}