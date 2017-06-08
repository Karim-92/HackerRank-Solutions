#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    int x1,y1,x2,y2;
    int x3,y3;
    for(int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        x3=x2+(x2-x1);
        y3=y2+(y2-y1);
        cout<<x3<<" "<<y3<<endl;
    }
    return 0;
}
