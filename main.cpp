#include <iostream>
#include <vector>
#include "librairie.h"

using namespace std;

int main() {
   vector<vector<int>> matrice(3, vector<int>(4));

   cout << estCarree(matrice);

   return 0;
}
