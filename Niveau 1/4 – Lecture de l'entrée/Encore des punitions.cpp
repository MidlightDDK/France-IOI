#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int nbRepeat;
   cin >> nbRepeat;

   repeat( nbRepeat )
   {
      cout << "Je dois suivre en cours\n";
   }

   // End of the program
   return 0;
}