// Find nth Ugly Number -

#include<iostream>
using namespace std;

bool is_ugly(int num){
    while(num%2 == 0)
        num /= 2;
    while(num%3 == 0)
        num /= 3;
    while(num%5 == 0)
        num /= 5;
    if(num == 1)
        return true;
    return false;
}

int main(){
    int num;
    cin>>num;
    int count = 0, i=1;
    while(count < num){
        if(is_ugly(i))
            count++;
        i++;
    }
    cout<<--i;
    return 0;
}