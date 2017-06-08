#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int aliceCmpScores[3];
    int bobCmpScores[3];
    int tempScore;
    int alicePoints=0;
    int bobPoints=0;
    // Get Alice's scores
    for(int i=0; i<3; i++){
        cin>>tempScore;
        aliceCmpScores[i]=tempScore;
    }
    // Get Bob's scores
        for(int i=0; i<3; i++){
        cin>>tempScore;
        bobCmpScores[i]=tempScore;
    }
    // Compare scores and award points
    for(int i=0; i<3; i++){
        if(aliceCmpScores[i]<bobCmpScores[i])
            bobPoints++;
        else if(aliceCmpScores[i]>bobCmpScores[i])
            alicePoints++;
        else
            continue;
    }
    cout<<alicePoints<<" "<<bobPoints;
    
    return 0;
}
