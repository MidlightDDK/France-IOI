#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int nbAltitude, altPos = 0, altNeg = 0;
   cin >> nbAltitude;

   repeat( nbAltitude )
   {
      int altitude;
      cin >> altitude;

      if( altitude > 0 )
      {
         altPos += altitude;
      }
      else
      {
         altNeg -= altitude;
      }
   }

   cout << altPos << '\n' << altNeg << '\n';

   // End of the program
   return 0;
}