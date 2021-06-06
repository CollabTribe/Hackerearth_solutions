#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	//oc - online taxi cost for first (of) kms
	//of - first of kms
	//od - od kms for every km afterward
	//cs - classic taxis travel at a speed of
	//cb
	//cm
	//cd
	long int d, oc,of,od,cs,cb,cm,cd;
	long int online_taxi = 0;
	long int classic_taxi = 0;

	cin >> d;
	cin >> oc >> of >> od;
	cin >> cs >> cb >> cm >> cd;

	online_taxi = oc+(d-of)*od;//oc,of,od
	//(oc) for first (of) kms, od for every kms afterward
	classic_taxi = cb+(floor(d/cs)*cm)+(d*cd);//cs,cb,cm,cd

	if ((online_taxi == classic_taxi) || (online_taxi < classic_taxi))
		cout << "Online Taxi";
	else
		cout << "Classic Taxi";

	return 0;
}

