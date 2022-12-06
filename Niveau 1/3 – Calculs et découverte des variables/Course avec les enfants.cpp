#include <iostream>
#include "robot.h"

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int somme = 0;
   for( int i = 1; i <= 10; i++ )
   {
      repeat( i )
         droite();
      ramasser();
      repeat( i )
         gauche();
      deposer();
   }

   // End of the program
   return 0;
}