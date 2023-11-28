//2nd qn
#include <iostream>
using namespace std;
int main()
{
    int n, i, flag;
    cin >> n;
    if (n%5==0){
        flag = n / 5;
    }
    else {
        flag = n / 5;
        flag++;
    }
    cout << flag;
    return 0;
}