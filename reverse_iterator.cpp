#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    
    for (int i = 0; i < 10; i++) {
        v.push_back(i + 1);
    }
 
    cout << "output 1)" << endl;
 
    // output 1
    reverse_iterator<vector<int>::iterator> rit_begin(v.end());
    reverse_iterator<vector<int>::iterator> rit_end(v.begin());
    
    for ( ; rit_begin != rit_end; rit_begin++) {
        cout << *rit_begin << endl;
    }
    
    cout << "output 2)" << endl;
    
    // output 2
    for (vector<int>::reverse_iterator rit(v.rbegin()); rit != v.rend(); rit++) {
        cout << *rit << endl;
    }
    
    return 0;
}
