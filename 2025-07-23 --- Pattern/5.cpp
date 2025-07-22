#include <iostream>
using namespace std;
void seeding(int n) {
	// Write your code here.
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}
/*
Platform: Coding Ninjas 
Problem: Seeding
Link: https://www.naukri.com/code360/problems/seeding_6581892?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
Topic: pattern
Difficulty: Easy
Date: 2025-07-22
*/