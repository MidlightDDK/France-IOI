#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int nbDistance, distanceMax = 0;
   cin >> nbDistance;

   repeat( nbDistance )
   {
      int distance;
      cin >> distance;

      if( distance > distanceMax )
      {
         distanceMax = distance;
      }
   }

   cout << distanceMax << '\n';

   // End of the program
   return 0;
}