#include <iostream>
#include <vector>
#include <algorithm>
#include "STATICTIC.h"
#include <math.h>
//#include <bits/stdc++.h> 


using namespace std; 

using std::vector;




double STATICTIC::STD(vector<double> arr)
{
	double avg=sum(arr)/arr.size();
	double res=0.0;
	for(int i=0;i<arr.size();i++)
	{
		 res+=pow((arr[i]-avg),2);
	}
	return sqrt(res/arr.size()-1);


}
double STATICTIC::STD(vector<int> arr)
{
	double avg=sum(arr)/arr.size();
	double res=0.0;
	for(int i=0;i<arr.size();i++)
	{
		 res+=pow((arr[i]-avg),2);
	}
	return sqrt(res/arr.size()-1);





}
