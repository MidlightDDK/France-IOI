#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int position, nbVillage, nbProches = 0;
   cin >> position >> nbVillage;

   repeat( nbVillage )
   {
      int village;
      cin >> village;

      if( position - village >= -50 && position - village <= 50 )
      {
         nbProches++;
      }
   }

   cout << nbProches << '\n';

   // End of the program
   return 0;
}