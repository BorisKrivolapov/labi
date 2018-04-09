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
	// 2 ����
	bool operator == (const PointOnThePlane &point) {
		return point.x == this->x && point.y == this->y;
	}
	bool operator != (const PointOnThePlane &point) {
		return !(point.x == this->x && point.y == this->y);
	}
	bool operator < (const PointOnThePlane &point) {
		return point.x + point.y > this->x + this->y;
	}
	bool operator > (const PointOnThePlane &point) {
		return point.x + point.y < this->x + this->y;
	}
	bool operator <= (const PointOnThePlane &point) {
		return point.x + point.y >= this->x + this->y;
	}
	bool operator >= (const PointOnThePlane &point) {
		return point.x + point.y <= this->x + this->y;
	}
	// ��� ���������
	PointOnThePlane operator + (const PointOnThePlane &point) {
		PointOnThePlane temp;
		temp.x = point.x + this->x;
		temp.y = point.y + this->y;
		return temp;
	}

	PointOnThePlane operator - (const PointOnThePlane &point) {
		PointOnThePlane temp;
		temp.x = this->x - point.x;
		temp.y = this->y - point.y;
		return temp;
	}
	PointOnThePlane operator * (const PointOnThePlane &point) {
		PointOnThePlane temp;
		temp.x = point.x * this->x;
		temp.y = point.y * this->y;
		return temp;
	}
	PointOnThePlane operator / (const PointOnThePlane &point) {
		PointOnThePlane temp;
		temp.x = this->x / point.x;
		temp.y = this->y / point.y;
		return temp;
	}
	PointOnThePlane operator % (const PointOnThePlane &point) {
		PointOnThePlane temp;
		temp.x = this->x % point.x;
		temp.y = this->y % point.y;
		return temp;
	}
	PointOnThePlane & operator ++() {
		this->x++;
		this->y++;
		return *this;
	}
	PointOnThePlane & operator --() {
		this->x--;
		this->y--;
		return *this;
	}
};
// 3 ����
class PointInSpace : public PointOnThePlane {
private:
	int z;
public:
	PointInSpace() : PointOnThePlane() {
		z = 0;
	}
	PointInSpace(int X, int Y, int Z) : PointOnThePlane(X, Y) {
		z = Z;

	}

	void ToConsoleSp() {
		ToConsole();
		cout << "Z = " << z << endl;
	}
	bool EcualsSp(PointInSpace point) {
		return Ecuals(point) && this->z == point.z;
	}
	int CompareToXsp(PointInSpace point) {

		return CompareToX(point);
	}
	int CompareToZsp(PointInSpace point) {
		int pointThis = this->z;
		int pointOther = point.z;
		return forCompare(pointThis, pointOther);
	}
};
