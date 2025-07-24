#include <iostream>
using namespace std;
void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
/*
Platform: Coding Ninjas 
Problem: Reverse Star Triangle
Link: = https://www.naukri.com/code360/problems/reverse-star-triangle_6573685?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM
Topic: pattern
Difficulty: Easy
Date: 2025-07-22
*/