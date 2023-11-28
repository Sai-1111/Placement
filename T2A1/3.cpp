#include <iostream>
#include <string>
using  namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int ant=0;
    int dan=0;
    for(int i=0;i<a.length();i++){
        if (to_string(a[i])=="A"){
            ant++;
        }
        else if(to_string(a[i])=="D"){
            dan++;
        }
    }

    if(ant > dan){
        cout<< "Anton";
    }

    if(ant > dan){
        cout<< "Danik";
    }
    else{
        cout<< "Friendship";
    }

}