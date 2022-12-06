#include <iostream>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   repeat( 15 )
   {
      droite();
      ramasser();
   }
   droite();
   deposer();

   // End of the program
   return 0;
}