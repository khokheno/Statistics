#include <iostream>
#include <vector>
#include <algorithm>
#include "STATICTIC.h"
#include <math.h>
//#include <bits/stdc++.h> 


using namespace std; 

using std::vector;




int STATICTIC::max(vector<int>arr){
	int  MAX=0;
	for(int i=0;i<arr.size();i++)
		if(arr[i]> MAX)
			 MAX=arr[i];
	return  MAX;


}
double STATICTIC::max(vector<double>arr){
	int  MAX=0.0;
	for(int i=0;i<arr.size();i++)
		if(arr[i]> MAX)
			 MAX=arr[i];
	return  MAX;


}
vector<char>STATICTIC:: max(vector<vector<char>>str)
{
	 std::sort(str.begin(), str.end());  
	 for(int i=0;i<str.size();i++)
		 std::sort(str[i].begin(), str[i].end());  
	 return str[str.size()-1];
		 

}