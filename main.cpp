#include<iostream>
#include<string>

using namespace std;

const string a = "BWBWBWBW";
const string b = "WBWBWBWB";

int main() {
	for (int i = 0; i < 8; i++) {
		string t;
		cin >> t;
		if (t != a && t != b) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
}
