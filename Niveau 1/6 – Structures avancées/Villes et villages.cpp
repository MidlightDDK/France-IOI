#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int nbLieux, villes = 0;
   cin >> nbLieux;

   repeat( nbLieux )
   {
      int lieu;
      cin >> lieu;
      if( lieu > 10000 )
      {
         villes++;
      }
   }

   cout << villes << '\n';

   // End of the program
   return 0;
}