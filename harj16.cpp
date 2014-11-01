/****************************************
* Paulus Linna
* IIA14SB
*
* Tehtäväkuvaus:
*
*	Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
*	Tietueeseen talletetaan seuraavat tiedot:
*	etunimi (merkkijono; C:n merkkitaulukko)
*	sukunimi (merkkijono; C:n merkkitaulukko)
*	koulumatka (reaaliluku)
*	osoite (merkkijono; C:n merkkitaulukko)
*	postinumero (merkkijono; C:n merkkitaulukko)
*	kengannumero (kokonaisluku)
*
*	Ohjelma tulostaa lopuksi tietueen tiedot naytölle.
*
* Päivämäärä 23.10.2014
* Versio 1.0
************************************************/
#include <iostream>
using namespace std;

struct tiedot
{
	char etunimi[30];
	int kengannro;
	char sukunimi[20];
	float koulumatka;
	char osoite[30];
	int postinro;
};

void main()
{
	tiedot hlo;
	cout << "Anna kaikki etunimesi: ";
	cin.get(hlo.etunimi, 30);

	cout << "Anna kengannumerosi: ";
	cin >> hlo.kengannro;

	cout << "Anna sukunimesi: ";
	cin >> hlo.sukunimi;

	cout << "Anna koulumatkasi: ";
	cin >> hlo.koulumatka;

	cout << "Anna osoitteesi: ";
	cin.get();
	cin.get(hlo.osoite, 30);

	cout << "Anna postinumerosi: ";
	cin >> hlo.postinro;

	cout << endl << hlo.sukunimi << " " << hlo.etunimi;
	cout << endl << hlo.osoite;
	cout << endl << hlo.postinro;
	cout << endl << hlo.kengannro << " " << hlo.koulumatka;

}