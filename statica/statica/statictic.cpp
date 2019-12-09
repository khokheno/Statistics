#include <iostream>
#include <vector>
#include <algorithm>
#include "STATICTIC.h"
#include <math.h>
//#include <bits/stdc++.h> 


using namespace std; 

using std::vector;


int STATICTIC::count(vector<int>arr)
{
	return arr.size();

}
int STATICTIC::count(vector<double>arr)
{
	return arr.size();

}
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
double STATICTIC::std(vector<double> arr)
{
	double avg=sum(arr)/arr.size();
	double res=0.0;
	for(int i=0;i<arr.size();i++)
	{
		 res+=pow((arr[i]-avg),2);
	}
	return sqrt(res/arr.size()-1);





}














int main()
{

	return 0;
}