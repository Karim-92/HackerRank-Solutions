#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=n-1; i>=0; i--){
        for(int j=i-1; j>=0;j--){
            cout<<" ";
        }
        for (int x=n-i-1; x>=0; x--){
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}
