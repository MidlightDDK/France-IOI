#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int borneMin, borneMax;
   cin >> borneMin >> borneMax;

   for( int i = borneMin; i <= borneMax; i++ )
   {
      cout << i << '\n';
   }

   // End of the program
   return 0;
}