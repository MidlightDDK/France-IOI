#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

#define nbMarche 21

using namespace std;

int main()
{
   char lettres[] = { 'a', 'b', 'c' };

   for( int i = 0; i < 3; i++ )
   {
      repeat( 30 )
      {
         cout << lettres[i] << '_';
      }
      cout << '\n';
   }

   // End of the program
   return 0;
}