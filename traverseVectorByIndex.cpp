#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);

	int size = v.size();
	for (unsigned int i = 0; i < size; i++) {
		cout << v[i] << endl;
	}

	return 0;
}
