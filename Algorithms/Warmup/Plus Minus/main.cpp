#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    //variables to hold the fractions
    double positiveRatio=0;
    double negativeRatio=0;
    double zeroRatio=0;
    //variables to hold counters
    int positiveNums=0;
    int negativeNums=0;
    int zeroNums=0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int index=0; index<n; index++){
        if(arr[index]>0){
            positiveNums++;
        }
        else if(arr[index]<0){
            negativeNums++;
        }
        else
            zeroNums++;
    }
    positiveRatio=positiveNums/(double)n;
    negativeRatio=negativeNums/(double)n;
    zeroRatio=zeroNums/(double)n;
    cout<<setprecision(6)<<positiveRatio<<endl;
    cout<<setprecision(6)<<negativeRatio<<endl;
    cout<<setprecision(6)<<zeroRatio<<endl;


    return 0;
}
