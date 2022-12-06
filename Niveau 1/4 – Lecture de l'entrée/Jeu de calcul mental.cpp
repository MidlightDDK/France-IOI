#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int somme = 66;
   int nbPersonne;
   cin >> nbPersonne;

   for( int i = 1; i <= nbPersonne; i++ )
   {
      somme *= i;
      cout << somme << '\n';
   }

   // End of the program
   return 0;
}