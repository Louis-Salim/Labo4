#include <iostream>
#include <vector>
#include "librairie.h"

using namespace std;

int main() {
   vector<vector<int>> matrice(3, vector<int>(4));
   //vector<vector<int>> matrice {{{1,2},{3,4},{5}}};

   cout << estCarree(matrice) << endl;
   cout << estReguliere(matrice);

   return 0;
}
