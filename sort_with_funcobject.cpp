#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printAllElements(vector<int> &v);

int main() {
	vector<int> v;
	
	v.push_back(10);
	v.push_back(2);
	v.push_back(30);
	v.push_back(4);
	v.push_back(50);

	printAllElements(v);
	
	sort(v.begin(), v.end(), less<int>());
	
	printAllElements(v);
	
	return 0;
}

void printAllElements(vector<int> &v) {
	cout << "======================================" << endl;
	
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	
	cout << "======================================" << endl;
}
