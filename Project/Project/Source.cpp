#include <iostream>
#include "ClassGeometry.h"

using namespace std;


int main() {
	PointOnThePlane a = PointOnThePlane(2, 3);
	PointOnThePlane b = PointOnThePlane(6, 7);
	double z = a.Distance(b);
	cout << z<<endl;

	system("pause");
	return 0;
}