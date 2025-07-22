#include <iostream>
using namespace std;
void nNumberTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

/*
Platform: Coding Ninjas 
Problem:  Reverse Number Triangle
Link: https://www.naukri.com/code360/problems/reverse-number-triangle_6581889?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
Topic: pattern
Difficulty: Easy
Date: 2025-07-22
*/