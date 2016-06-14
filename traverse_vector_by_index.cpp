#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	
	for (int i = 0; i < 10; i++) {
	    v.push_back(i);
	}

	vector<int>::size_type size = v.size();
	for (vector<int>::size_type i = 0; i < size; i++) {
		cout << v[i] << endl;
	}

	return 0;
}
