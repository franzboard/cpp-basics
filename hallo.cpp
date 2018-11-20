// Showcase: Why C++ is super cool
// Edgar Neukirchner 2018
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> team; // Container Class
	string name;
	while (1) {
		cout << "Wie heisst du? / [Fertig: q] ";
		cin >> name; 
		if (name == "q")
			break;
	
		cout << "Hallo " << name << endl;
		cout << "Dein Name hat " << name.length() << " Buchstaben" << endl;
		team.push_back(name);
	}
	cout << "*** Unser Team: ***" << endl;
	
	for (auto &p : team) // iterate through all elements of team
		cout << p << endl;
	return 0;
}
