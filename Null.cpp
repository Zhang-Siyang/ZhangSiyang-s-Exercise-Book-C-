#include <iostream>
#include <iomanip> 
using namespace std; 
int main()
{ 
	int y = 1970; 
	for(; y < 2016; y ++) 
		for(int m = 1; m < 13; m ++) 
			if(m == 2) 
				for(int d = 1; d < 30; d ++) 
					cout<<y<<setw(2)<<setfill('0')<<m<<setw(2)<<setfill('0')<<d<<endl; 
			else if(m == 4|| m == 6|| m == 9|| m == 11) 
				for(int d = 1; d < 31; d ++) 
					cout<<y<<setw(2)<<setfill('0')<<m<<setw(2)<<setfill('0')<<d<<endl; 
			else 
				for(int d = 1; d < 32; d ++) 
					cout<<y<<setw(2)<<setfill('0')<<m<<setw(2)<<setfill('0')<<d<<endl; 
	return 0; 
}