#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int codeSecret;
   cin >> codeSecret;

   if( codeSecret == 64741 )
   {
      cout << "Bon festin !\n";
   }
   else
   {
      cout << "Allez-vous en !\n";
   }

   // End of the program
   return 0;
}