#include <iostream>
#include <string>
using  namespace std;
int main(){
    string a,b="";
    getline(cin,a);
    int caps=0;
    int small=0;
    for(int i=0;i<a.length();i++){
        if (isupper(a[i])){
            caps++;
        }
        else{
            small++;
        }
    }
    if(caps>small){
        for(int i=0;i<a.length();i++){
            b+=toupper(a[i]);
        }
    }
    else{
        for(int i=0;i<a.length();i++){
            b+=tolower(a[i]);
        }
    }

    cout<<b;

}