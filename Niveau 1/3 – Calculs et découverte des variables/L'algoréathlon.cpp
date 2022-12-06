#include <iostream>

using namespace std;

int main()
{
   int distance = 0, incr = 2 + 34 + 6;
   for( int i = 0; i < 3; i++)
   {
      distance += incr;
      cout << distance;
      cout << ( ( i == 2 ) ? '\n' : ' ' );
   }

   // End of the program
   return 0;
}