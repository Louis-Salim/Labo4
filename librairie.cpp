//
// Created by cradmin on 02.12.2020.
//

#include "librairie.h"
// #include <vector>    // in librairie.h


bool estCarree(std::vector<std::vector<int>> matrice){
   unsigned long long count = 0;
   for (unsigned long long i = 0; i < matrice.size(); ++i){
      if (matrice.at(i).size() > count)
         count = matrice.at(i).size();
   }
   return matrice.size() == count;
}

bool estReguliere(std::vector<std::vector<int>> matrice){
   unsigned long long count = matrice[0].size();
   for (unsigned long long i = 0; i < matrice.size(); ++i){
      if (matrice.at(i).size() != count)
         return false;
   }
   return true;
}

unsigned long long maxCol(std::vector<std::vector<int>> matrice){
   unsigned long long count = 0;
   for (unsigned long long i = 0; i < matrice.size(); ++i){
      if (matrice.at(i).size() > count)
         count = matrice.at(i).size();
   }
   return count;
}