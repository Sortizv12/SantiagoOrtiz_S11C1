#include <iostream>
using namespace std;

void funciones(double beta,double gamma, int num);
const int n=100;
double S[n];
double I[n];
double t[n];
int main()
{
	
	
	double min_t=0.0;
	double max_t=100.0;	
	double Beta1=0.0022;
	double Gamma1=0.45;
	double Beta2=0.001;
	double Gamma2=0.2;	
	double h=(max_t-min_t)/n;
	funciones(Beta1,Gamma1,1);
	funciones(Beta2,Gamma2,2);
	return 0;
}

void funciones(double beta, double gamma,int num)
{
	double min_t=0.0;
	double max_t=100.0;
	double h=(max_t-min_t)/n;
	I[0]=1;
	S[0]=770;
	for(int i=1;i<n;i++)
	{
		t[i]=i*h;
		S[i]=S[i-1]-(h*beta*I[i-1]*S[i-1]);
		I[i]=I[i-1]+(beta*I[i-1]*S[i-1]-gamma*I[i-1])*h;
		cout << i<<" "<<S[i]<<" "<< I[i]<<endl;
	}
	double max=0;
	for(int i=0;i<n;i++)
	{
		if(I[i]>max)
		{
			max=t[i];	
		}
	}
	cout << "caso "<<num<<" tiempo I_max(dias): "<< max<< endl;
	
}
