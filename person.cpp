// A Simple Class Example
// Edgar Neukirchner 2018

#include <iostream>
#include <vector>
using namespace std;

class Person {
public:
	Person();
	// alt is a default parameter
	Person(const string& vn, const string& fn, int alt = 0);
	void setPerson(const string& vn, const string& fn, int alt = 0);
	string getFamilienname();
	string getVorname();
	int getAlter();
	
private:
	string vorname;
	string familienname;
	int alter;
	
};

Person::Person()
{
	vorname = "";
	familienname = "";
	alter = 0;
}

Person::Person(const string& vn, const string& fn, int alt)
{
	vorname = vn;
	familienname = fn;
	alter = alt;
}

void Person::setPerson(const string& vn, const string& fn, int alt)
{
	vorname = vn;
	familienname = fn;
	alter = alt;
}

string Person::getFamilienname()
{
	return familienname;
}

string Person::getVorname()
{
	return vorname;
}

int Person::getAlter()
{
	return alter;
}
	
int main()
{
	Person p1("Franz", "Meier", 20);
	Person p2 = {"Sara", "Lamborghini"};
	Person p3;
	p3.setPerson("Donald", "Duck", 100);
	
	vector<Person> alle = {p1, p2, p3};
	
	int n = 1;
	for (Person& p : alle)
		cout << "Person " << n++ << ": " << p.getFamilienname() << " " << p.getVorname() << " " << p.getAlter() << endl;
	
	return 0;
}
	


