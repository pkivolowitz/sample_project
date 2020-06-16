#include <iostream>
#include <string>

using namespace std;

int main(int argc, char ** argv) {
	string l;
	
	cout << "This program echos whatever you type. Terminate the program\n";
	cout << "by typing ^D (control-d)." << endl;
	while (getline(cin, l)) {
		cout << l << endl;
	}
	return 0;
}
