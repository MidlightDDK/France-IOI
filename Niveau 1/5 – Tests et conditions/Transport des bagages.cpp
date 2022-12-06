#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int nbPaq, poids;
   cin >> nbPaq >> poids;
   if( nbPaq * poids > 105 )
   {
      cout << "Surcharge !\n";
   }

   // End of the program
   return 0;
}