#include <iostream>
#include <vector>
#include <algorithm>
#include "STATICTIC.h"
#include <math.h>
//#include <bits/stdc++.h> 


using namespace std; 

using std::vector;


int STATICTIC::sum(vector<int>arr)
{
	int sum=0;
	for(int i=0;i<arr.size();i++)
		sum+=arr[i];
	return sum;


}
double STATICTIC::sum(vector<double>arr)
{
	double sum=0.0;
	for(int i=0;i<arr.size();i++)
		sum+=arr[i];
	return sum;


}