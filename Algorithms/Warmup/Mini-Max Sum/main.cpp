#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int x=0;
    cin>>x;
    unsigned long long sum=x, min=x, max=x;
    for(int i=1; i<5; i++){
        cin>>x;
        sum+=x;
        if(x<min)
            min=x;
        else if(x>max)
            max=x;            
    }
    cout<<sum-max<<" "<<sum-min; 
    return 0;
}