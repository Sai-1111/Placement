#include <iostream>
#include <string>
using  namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int len = a.length();
    string c ="";
    for (int i =len-1; i >= 0; i--)
    {
        c+=a[i];
    }
    if(b == c){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}