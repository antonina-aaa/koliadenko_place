#include"Selfcheckout.h"
#include"Accessories.h"
#include"Hat&cap.h"
#include"Store.h"

int main()
{
	system("color 0B");
	Store Kolidenko("Kolidenko", "Dzima_vibe", 15);
	Store Forum("Forum", "forum20", 10);
	Product* shop[2];
	shop[0] = new HatCap("I_k", 200);
	shop[1] = new Accessories("bracelet", 250);
	cout << "Process for Kolidenko\n" << endl;
	cout << "Input promocode:" << endl;
	string PrimeKolidenko;
	cin >> PrimeKolidenko;
	float total = Selfcheckout::Selfservice(Kolidenko, shop, 2, PrimeKolidenko);
	cout << "Total:" << total;

	cout << "\nInput promocode:" << endl;
	string Forum20;
	cin >> Forum20;
	float total2 = Selfcheckout::Selfservice(Forum, shop, 2, Forum20);
	cout << "Total:" << total2;

	system("dzima.mp3");
	return 0;
}	