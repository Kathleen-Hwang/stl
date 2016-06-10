#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	vector<int>::iterator it = v.begin();

	cout << it[1] << endl;	// 20

	it += 2;
	
	cout << *it << endl;	// 30

	it -= 2;
	
	cout << *it << endl;	// 10
	
	return 0;
}
