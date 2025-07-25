#include <iostream>
using namespace std;
void nStarTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n)stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }         
        cout<<endl;
    }
}

/*
Platform: Coding Ninjas 
Problem: Rotated Triangle
Link: https://www.naukri.com/code360/problems/rotated-triangle_6573688?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM
Topic: pattern
Difficulty: Easy
Date: 2025-07-22
*/