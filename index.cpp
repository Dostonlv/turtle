#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
   vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
 
   fill(v.begin(), v.end(), -1);
 
    for (auto elem : v) {
       cout << elem << " ";
    }
    cout << "\n";
}