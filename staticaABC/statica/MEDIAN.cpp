#include <iostream>
#include <vector>
#include <algorithm>
#include "STATICTIC.h"
#include <math.h>
//#include <bits/stdc++.h> 


using namespace std; 

using std::vector;

double STATICTIC::median(vector<int>arr)
{
	
	 std::sort(arr.begin(), arr.end());  
	 int len=arr.size();
	 if((len/2)%2==1)
		 return arr[(len/2)+1];
	 else
	 {
		 int res=arr[(len/2)+1]+arr[(len/2)];
		 return res/2;

	 }
	
	


}
double STATICTIC::median(vector<double>arr)
{
	
	 std::sort(arr.begin(), arr.end());  
	 int len=arr.size();
	 if((len/2)%2==1)
		 return arr[(len/2)+1];
	 else
	 {
		 int res=arr[(len/2)+1]+arr[(len/2)];
		 return res/2;

	 }
	
	


}
vector<char> STATICTIC::median(vector<vector<char>>str)
{/// צריך לבדוק לפי קלט
	 std::sort(str.begin(), str.end());  
	 int len=str.size();
	 if((len/2)%2==1)
		 return str[(len/2)+1];
	 else
		return  str[(len/2)];



}