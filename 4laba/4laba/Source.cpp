#include <iostream>
#include "Header.h"

using namespace std;


int main() {

PointOnThePlane bob = PointOnThePlane(1,2);
PointOnThePlane *cv;
PointInSpace lol = PointInSpace(2, 2, 3);
PointInSpace kek = PointInSpace(2, 2, 3);

cv = &bob;
cv->ToConsole();
cv = &kek;
cv->ToConsole();

system("pause");
return 0;
}

