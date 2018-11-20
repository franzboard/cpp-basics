// Inheritance
// Polymorphism with abstract base class
// Edgar Neukirchner 2018

#include <iostream>
#include <vector>
using namespace std;

class Polygon {
	
public:
	Polygon(double l, double w);
	void setDimensions(double l, double w);
	double getLen();
	double getWid();
	virtual double getArea() = 0;
	
protected:
	double len;
	double wid;	
};


Polygon::Polygon(double l, double w)
{
	len = l;
	wid = w;
}

void Polygon::setDimensions(double l, double w)
{
	len = l;
	wid = w;
}

double Polygon::getLen()
{
	return len;
}

double Polygon::getWid()
{
	return wid;
}

class Triangle : public Polygon {
public:
	Triangle(double l, double w) : Polygon(l, w) {};
	double getArea();
};

double Triangle::getArea()
{
	return len * wid / 2.0;
}

class Rectangle : public Polygon {
public:
	Rectangle(double l, double w) : Polygon(l, w) {};
	double getArea();
};

double Rectangle::getArea()
{
	return len * wid;
}

int main()
{
	Rectangle rect(3.0, 2.0);
	Triangle tri(4.0, 5.0);
	
	cout << "Rectangle l=" << rect.getLen() << " w=" << rect.getWid()
		<< " area=" << rect.getArea() << endl;
	cout << "Triangle l=" << tri.getLen() << " w=" << tri.getWid()
		<< " area="  << tri.getArea() << endl;	

	Polygon *poly1 = &rect;
	Polygon *poly2 = &tri;
	cout << "Polymorphism" << endl;
	
	cout << "Rectangle l=" << poly1->getLen() << " w=" << poly1->getWid()
		<< " area=" << poly1->getArea() << endl;
	cout << "Triangle l=" << poly2->getLen() << " w=" << poly2->getWid()
		<< " area="  << poly2->getArea() << endl;
	return 0;
}

		
