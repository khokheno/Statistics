#include <iostream>
#include <vector>
#include <algorithm>
#include "STATICTIC.h"
#include <math.h>
//#include <bits/stdc++.h> 


using namespace std; 

using std::vector;


int STATICTIC::min(vector<int>arr){
	int MIN=arr[0];
	for(int i=1;i<arr.size();i++)
		if(arr[i]<MIN)
			MIN=arr[i];
	return MIN;


}

double STATICTIC::min(vector<double>arr){
	double MIN=arr[0];
	for(int i=1;i<arr.size();i++)
		if(arr[i]<MIN)
			MIN=arr[i];
	return MIN;


}

vector<char> STATICTIC:: min(vector<vector<char>>str)
{
	 std::sort(str.begin(), str.end());  
	 for(int i=0;i<str.size();i++)
		 std::sort(str[i].begin(), str[i].end());  
	 return str[0];
		 



}