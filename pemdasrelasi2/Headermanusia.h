#ifndef JANTUNG_H
#define JANTUNG_H
using namespace std;

class manusia {
public:
	string name;
	jantung varjantung;

	manusia(string pName)
		:name(pName) {
		cout << name << "hidup\n";
	}
	~manusia() {
		cout << name << "mati\n";
	}
};
#endif
