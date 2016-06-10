#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);

	vector<int>::iterator it = v.begin();

	cout << it[1] << endl;

	return 0;
}
