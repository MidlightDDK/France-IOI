#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int nbCrapaud = 1337;
   repeat( 12 )
      nbCrapaud *= 2;
   cout << nbCrapaud << '\n';

   // End of the program
   return 0;
}