#include <iostream>
using namespace std;
void nTriangle(int n) {
	// Write your code here
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
}
/*
Platform: Coding Ninjas 
Problem: N-Triangles
Link: https://www.naukri.com/code360/problems/n-triangles_6573689?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
Topic: pattern
Difficulty: Easy
Date: 2025-07-22
*/