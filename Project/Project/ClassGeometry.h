#include <iostream>
#include <cmath>
using namespace std;

class PointOnThePlane {
private:
	int x;
	int y;

public:
	int forCompare(int a, int b) {
		if (a > b) {
			return 1;
		}
		else if (a < b) {
			return -1;
		}
		else if (a == b) {
			return 0;
		}
	}
	PointOnThePlane() {
		int x = 0, y = 0;
	}


	PointOnThePlane(int X, int Y) {
		x = X;
		y = Y;
	}





	void ToConsole() {
		cout << "Points with coordinates:";
		cout << "\nX = " << x << "\nY = " << y << endl;
	}
	bool Ecuals(PointOnThePlane point) {
		return this->x == point.x && this->y == point.y;
	}
	int CompareToX(PointOnThePlane point) {
		int pointThis = this->x;
		int pointOther = point.x;
		return forCompare(pointThis, pointOther);
	}
	int CompareToY(PointOnThePlane point) {
		int pointThis = this->y;
		int pointOther = point.y;
		return forCompare(pointThis, pointOther);
	}
	double Distance(PointOnThePlane point) {
		int d = 2;
		int forX = pow((point.x - this->x), d);
		int forY = pow((point.y - this->y), d);
		return sqrt(forX + forY);
	}
	
};
