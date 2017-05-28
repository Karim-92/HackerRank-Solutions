#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N=0;
    cin>>N;
    long long int sum=0;
    long long int tempNum=0;
    for(int i=0; i<N; i++){
        cin>>tempNum;
        sum=sum+tempNum;
    }
    cout<<sum;
    return 0;
}
