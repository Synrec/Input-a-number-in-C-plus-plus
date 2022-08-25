#include <iostream>;
#include<string>;
using namespace std;

bool isNumber(string a) {
	for (int i = 0; i < a.length(); i++) {
		if (!isdigit(a[i])) {
			return false;
		}
	}
	return true;
}

bool terminateApp(string b) {
	if (b == "y" || b == "yes")return true;
	return false;
}

int main() {
	string a, b, c;
	int index = 0, magnitude = 0;
	cout << "Hello Idiot.\n";
	while (!terminateApp(b)) {
		cout << "Please input a number\n";
		cin >> a;
		if (isNumber(a)) {
			cout << "Number confirmed.\nThank You!\n"; 
			magnitude += stoi(a);
			++index;
		}
		else {
			cout << a << " is not a number.\nTerminate application? ('y' or 'yes' to confirm.)\n";
			cout << "Current Number of entries are " << ++index << "\n";
			cin >> b;
		}
	}
	cout << "Program terminated with " << index << " entries and magnitude: "<< magnitude <<".\nHave a wonderful day!";
	return 0;
}