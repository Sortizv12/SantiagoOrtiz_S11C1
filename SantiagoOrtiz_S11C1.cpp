#include <iostream>
using namespace std;

const int n=100;
double S=[n];
double I=[n];
double t=[n];
int main()
{
	
	
	double min_t=0.0;
	double max_t=20.0;	
	double Beta=0.0022;
	double Gamma=0.45;
		
	double h=(max_t-min_t)/n;
	I[0]=1;
	S[0]=770;
	for(int i=1;i<n;i++)
	{
		t[i]=i*h;
		S[i]=S[i-1]-(h*Beta*I[i-1]*S[i-1]);
		I[i]=I[i-1]+(Beta*I[i-1]*S[i-1]-Gamma*I[i-1])*h;
		cout << t[i]<<" "<<S[i]<<" "<< I[i]<<endl;
	}
	return 0;
}
