#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int somme = 0;

   repeat( 20 )
   {
      int nouveau;
      cin >> nouveau;
      somme += nouveau;
   }

   cout << somme << '\n';

   // End of the program
   return 0;
}