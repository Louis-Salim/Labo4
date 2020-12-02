//
// Created by cradmin on 02.12.2020.
//

#include "librairie.h"
// #include <vector>    // in librairie.h


bool estCarree(std::vector<std::vector<int>> matrice){
   unsigned long long count = 0;
   for (unsigned long long i = 0; i < matrice.size(); ++i){
      if (count < matrice[i].size())
         count = matrice[i].size();
   }
   return matrice.size() == count;
}

bool estReguliere(std::vector<std::vector<int>> matrice){
   unsigned long long count = matrice[0].size();
   for (unsigned long long i = 0; i < matrice.size(); ++i){
      if (matrice[i].size() != count)
         return false;
   }
   return true;
}