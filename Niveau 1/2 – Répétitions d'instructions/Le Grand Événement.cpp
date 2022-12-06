#include <iostream>
#include "robot.h"

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

#define nbMarche 21

using namespace std;

int main()
{
   haut();
   for( int i = 0; i < 4; i++ )
   {
      for( int j = 0; j < 8; j++ )
         haut();
      droite();
      for( int j = 0; j < 8; j++ )
         bas();
      droite();
   }
   for( int j = 0; j < 8; j++ )
      haut();
   droite();
   for( int j = 0; j < 9; j++ )
      bas();
   for( int j = 0; j < 9; j++ )
      gauche();

   // End of the program
   return 0;
}