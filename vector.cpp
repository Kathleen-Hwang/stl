#include <iostream>
#include <vector>

using namespace std;

// output test at http://www.tutorialspoint.com/compile_cpp_online.php

int main() {
	vector<int> v;

	// output)
	// size : 1, capacity : 1, maxsize : 4611686018427387903                                                                                                                                                                                                                            
  // size : 2, capacity : 2, maxsize : 4611686018427387903                                                                                                                                                                                                                            
  // size : 3, capacity : 4, maxsize : 4611686018427387903                                                                                                                                                                                                                            
  // size : 4, capacity : 4, maxsize : 4611686018427387903                                                                                                                                                                                                                            
  // size : 5, capacity : 8, maxsize : 4611686018427387903                                                                                                                                                                                                                            
  // size : 6, capacity : 8, maxsize : 4611686018427387903                                                                                                                                                                                                                            
  // size : 7, capacity : 8, maxsize : 4611686018427387903                                                                                                                                                                                                                            
  // size : 8, capacity : 8, maxsize : 4611686018427387903                                                                                                                                                                                                                            
  // size : 9, capacity : 16, maxsize : 4611686018427387903                                                                                                                                                                                                                           
  // size : 10, capacity : 16, maxsize : 4611686018427387903
	for (int i = 0; i < 10; i++) {
	    v.push_back(i);
	    cout << "size : " << v.size() << ", capacity : " << v.capacity() << ", maxsize : " << v.max_size() << endl;
	}

	vector<int>::size_type size = v.size();
	for (vector<int>::size_type i = 0; i < size; i++) {
		cout << v[i] << endl;
	}
                                    // output)
  cout << v.size() << endl;       // 10
  cout << v.capacity() << endl;   // 16
  cout << v.max_size() << endl;   // 4611686018427387903
  
	return 0;
}
