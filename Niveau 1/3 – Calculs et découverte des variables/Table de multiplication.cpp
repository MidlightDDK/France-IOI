#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

#define maxi 20

using namespace std;

int main()
{
   for( int i = 1; i <= maxi; i++ )
   {
      for( int j = 1; j <= maxi; j++ )
      {
         cout << i * j << ' ';
      }
      cout << '\n';
   }

   // End of the program
   return 0;
}