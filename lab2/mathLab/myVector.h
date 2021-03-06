//Introductory vector class

#include <math.h>

namespace MyMathLab
{

	const double m_pi = 3.14159265358979323846;
	float M_HALF_PI = 1.57079632679489661923;

	const double RAD = (m_pi/180.0);
	const double PIOVER2 = (3.14159265358979323846 / 2);
	#define DEG2RAD(x) ((x)*m_pi/180.0)
	#define RAD2DEG(x) ((x)*180.0/m_pi)


struct MyPosition
{
	float x;
	float y;
	float z;
};

class MyVector
{
	public:
		MyVector(void);
		MyVector(float x, float y, float z);
		MyVector(MyPosition& start, MyPosition& end);
		~MyVector(void){;}

		MyVector addTo(const MyVector &other) const;
		MyVector subtractFrom(const MyVector &other) const;

		void uniformScale(const float m);

		float getMagnitude(void) const;
		void setMagnitude(const float m);

		float getDotProduct(const MyVector &other) const;
		MyVector getCrossProduct(const MyVector &other) const;

		void normalise(void);

		float x;
		float y;
		float z;
};


}
