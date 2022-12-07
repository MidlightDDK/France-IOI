#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
	int dateArrivee, dateDepart, nbEntree, nbEspions = 0;
	cin >> dateArrivee >> dateDepart >> nbEntree;

	repeat( nbEntree )
	{
		int dateEntree;
		cin >> dateEntree;

		if( dateArrivee <= dateEntree && dateEntree <= dateDepart )
		{
			nbEspions++;
		}
	}

	cout << nbEspions << '\n';
	
	return 0;
}