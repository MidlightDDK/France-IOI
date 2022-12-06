#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int posDepart, largeurEmplacement, nbVendeur;
   cin >> posDepart >> largeurEmplacement >> nbVendeur;

   repeat( nbVendeur + 1 )
   {
      cout << posDepart << '\n';
      posDepart += largeurEmplacement;
   }

   // End of the program
   return 0;
}