#include <iostream>
#include<string.h>
using namespace std;

struct smartphone{
    string name;
    int storagel;
    string color;
    float price;
};


int main(){
    smartphone a;
    a.name = "Iphone 14";
    a.storagel = 256;
    a.color = "blue";
    a.price = 10000;
    cout<< a.price;
}