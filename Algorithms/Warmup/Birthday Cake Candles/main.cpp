#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int candles[n];
    for(int candles_i = 0; candles_i < n;candles_i++){
       cin >> candles[candles_i];
    }
    
    //First we find the tallest candle
    int tallest=0;
    for(int i=0; i<n; i++){
        if(candles[i]>tallest)
            tallest=candles[i];
    }
    
    //Then we count occurrences of the tallest candles
    int count=0;
    for(int i=0; i<n; i++){
        if(candles[i]==tallest)
            count++;
    }
    cout<<count;
    return 0;
}
