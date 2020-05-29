#include <iostream>
using namespace std;
istream& random(istream& is) {
	int temp;
	while (is >> temp) {
		cout << temp;
	}
	auto old_state = cin.rdstate();
	is.clear();
	is.setstate(is.badbit);
	return is;
}
int main() {
	int temp;
	cin >> temp;
	cin.setstate(cin.badbit | cin.eofbit | cin.failbit);
	cout << cin.rdstate();
	
	/*auto old_state = cin.rdstate();
	cin.clear();
	
	int ival;
	cin >> ival;
	if (cin.fail()) {
		cout << "failed";
	}
	else {
		cout << "success";
	}
	cout << ival;*/
}