#include <iostream>
#include "ClassGeometry.h"

using namespace std;


int main() {
	PointOnThePlane point = PointOnThePlane(2, 3);
	point.ToConsole();

	system("pause");
	return 0;
}