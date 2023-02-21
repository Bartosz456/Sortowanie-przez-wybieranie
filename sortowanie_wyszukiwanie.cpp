#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int const N = 20;
int tab[N];

void wypelnij()
{
    srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		tab[i] = rand() % 50;
	}
}

void wyswietl()
{
	for (int i = 0; i < N; i++)
	{
		cout << tab[i] << " ";
	}
}

void sortowanie()
{
	int j, k;
	for (int i = 0; i < N; i++)
	{
		j = i;
		while (j > 0 && tab[j-1] > tab[j])
		{
			k = tab[j];
			tab[j] = tab[j - 1];
			tab[j - 1] = k;
			j--;
		}
	}
}
int main()
{
	cout << "Tablica przed: \n";
	wypelnij();
	wyswietl();
	cout << "\n";
	cout << "Tablica po sortowaniu przez wybieranie: \n";
	sortowanie();
	wyswietl();
}