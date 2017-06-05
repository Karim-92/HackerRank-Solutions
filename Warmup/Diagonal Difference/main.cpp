#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int firstDiagonalSum=0;
    int secondDiagonalSum=0;
    int totalDiagonalSum=0;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    //sum of first diagonal
    for (int i=0; i<n; i++){
       int j=i;
       firstDiagonalSum+=a[i][j];        
    }
    //sum of second diagonal
    int rowIndex=n-1;
    for (int i=0; i<n; i++){
       secondDiagonalSum+=a[rowIndex][i];  
       rowIndex--;
    }
    //sum of total diagonal
    totalDiagonalSum=abs(firstDiagonalSum-secondDiagonalSum);
    cout<<totalDiagonalSum;
    return 0;
}
