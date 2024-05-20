#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class Manusia {
public:
	string name;
	jantung varjantung;

	Manusia(string pName)
		:name(pName) {
		cout << name << "hidup\n";
	}
	~Manusia() {
		cout << name << "mati\n";
	}
};
#endif
