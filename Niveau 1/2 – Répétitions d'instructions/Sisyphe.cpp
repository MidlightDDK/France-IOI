#include <iostream>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

#define nbMarche 21

using namespace std;

int main()
{
   repeat( nbMarche )
   {
      haut();
      droite();
   }
   repeat( nbMarche )
   {
      gauche();
      bas();
   }

   // End of the program
   return 0;
}