#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

#define maxi 20

using namespace std;

int main()
{
   int nbJour;
   cin >> nbJour;

   cout << nbJour * 16 * 60 * 60 << '\n';

   // End of the program
   return 0;
}