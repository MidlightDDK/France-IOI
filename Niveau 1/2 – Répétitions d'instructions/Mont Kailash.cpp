#include <iostream>
#include "robot.h"

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

#define nbMarche 21

using namespace std;

int main()
{

   repeat( 108 )
   {
      repeat( 13 )
         haut();
      repeat( 13 )
         droite();
      repeat( 13 )
         bas();
      repeat( 13 )
         gauche();
   }

   // End of the program
   return 0;
}