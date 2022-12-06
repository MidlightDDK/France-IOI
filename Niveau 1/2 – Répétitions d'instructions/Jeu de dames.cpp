#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

#define nbMarche 21

using namespace std;

int main()
{

   repeat( 20 )
   {
      repeat( 20 )
         cout << "OX";
      cout << '\n';
      repeat( 20 )
         cout << "XO";
      cout << '\n';
   }

   // End of the program
   return 0;
}