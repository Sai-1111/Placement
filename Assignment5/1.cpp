#include <iostream>
using namespace std;
void swap(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main(){
    int x = 10;
    int y = 20;
    swap(&x,&y);
    cout<<x<<endl;
    cout<<y;
}