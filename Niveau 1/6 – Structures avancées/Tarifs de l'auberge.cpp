#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
	int age, poids, tarif = 0;
	cin >> age >> poids;

	if( age != 60 )
	{
		if( age < 10 )
		{
			tarif = 5;
		}
		else
		{
			tarif = 30;
			if( poids >= 20 )
			{
				tarif += 10;
			}
		}
	}
	
	cout << tarif << '\n';
	
	return 0;
}