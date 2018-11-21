// Multiple Inheritance 
// Edgar Neukirchner 2018

#include <iostream>
#include <vector>
using namespace std;

////////////////// class Person ////////////////////
class Person {
public:
	Person(const string& vn, const string& fn);
	string getFamilienname() {return familienname;}
	string getVorname() {return vorname;}
private:
	string vorname;
	string familienname;
	int alter;
	
};

Person::Person(const string& vn, const string& fn)
{
	vorname = vn;
	familienname = fn;
}

///////////////// class Display ////////////////////
class Display {
public:	
	void show(const string& str);
};

void Display::show(const string& str)
{
	cout << "**** " << str << " ****" << endl;
}

//////////////// class Pupil /////////////////////////
// derived from Person and from Display

class Pupil : public Person, public Display {
public:
	Pupil(const string& vn, const string& fn, const string& crs);
	string getCourse();
private:
	string course;
};

Pupil::Pupil(const string& vn, const string& fn, const string& crs) :
	Person(vn, fn)
{
	course = crs;
}

string Pupil::getCourse()
{
	return course;
}

int main()
{
	Pupil mypupil("Franz", "Meier", "Physics");
	mypupil.show(mypupil.getFamilienname());
	mypupil.show(mypupil.getVorname());
	mypupil.show(mypupil.getCourse());
	
	return 0;
}

		
