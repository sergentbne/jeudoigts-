#include <iostream>
using namespace std;
#include <unistd.h>
int main() {
	struct {
	int main0 = 1;
	int main1 = 1;
	string nom;
	int attak;
	int mainattak;
	bool win;
	} j1,j2;

	cout << "je vais assumer que vous connaissez le jeu des doigts" << endl;
	cout << "comment se nomme le premier joueur?\n";
	getline(cin, j1.nom);
	cout << "comment se nomme le deuxieme joueur?\n";
	getline(cin,j2.nom);
	j1.win = false;
	j2.win = false;

	while (j1.win == false && j2.win == false) 
	{
		cout << "joueur 1, ta premiere main a " << j1.main0 << " et la deuxieme a " << j1.main1 << endl;
		cout << "le joueur 2 a " << j2.main0 << " et " << j2.main1 << endl;
		cout << "quelle main veux tu tapper (1 pour main 1 et 2 pour main 2)\n";
		cin >> j1.attak;
		switch (j1.attak)
		{
			case 1:
				if (j2.main0 >= 5) {
					cout << "cette main est invalide, tu vas donc manquer ton tour\n";
					j1.attak = 0;
				} 
			case 2:
				if (j2.main1 >= 5) {
					cout << "cette main est invalide, tu vas donc manquer ton tour\n";
					j1.attak = 0;
				}
			default:
			break;
		}
		cout << "avec quelle main? (1 pour main 1 et 2 pour main 2)\n";
		cin >> j1.mainattak;
		switch (j1.mainattak)
		{
			case 1:
				if (j1.main0 >= 5) {
					cout << "cette main est invalide, tu vas donc manquer ton tour\n";
					j1.attak = 0;
				} 
			case 2:
				if (j1.main1 >= 5) {
					cout << "cette main est invalide, tu vas donc manquer ton tour\n";
					j1.attak = 0;
				}
			default:
			break;
		}
		switch (j1.attak)
		{
		case 1:
			if(j1.mainattak == 1){j1.main0 += j2.main0;}
			else {j1.main1 =+ j2.main0;}
			if (j2.main0 >= 5 && j2.main1 >= 5) {
				j1.win =true;
			}
			break;
		case 2:
			if(j1.mainattak == 2){j1.main0 += j2.main1;}
			else {j1.main1 =+ j2.main1;}
			if (j2.main0 >= 5 && j2.main1 >= 5) {
				j1.win =true;}
			break;

		default:
			break;
		}
		if (j1.win==true) {
			cout << "le joueur 1 a gagne";
			break;
		}
		sleep(1);
		cout << "joueur 2, ta premiere main a " << j2.main0 << " et la deuxieme a " << j2.main1 << endl;
		cout << "le joueur 1 a " << j1.main0 << " et " << j1.main1 << endl;
		cout << "quelle main veux tu tapper (1 pour main 1 et 2 pour main 2)\n";
		cin >> j2.attak;
		switch (j2.attak){
			case 1:
				if (j1.main0 >= 5) {
					cout << "cette main est invalide, tu vas donc manquer ton tour\n";
					j2.attak = 0;
				} 
			case 2:
				if (j1.main1 >= 5) {
					cout << "cette main est invalide, tu vas donc manquer ton tour\n";
					j2.attak = 0;
			}
			default:
			break;
		}
		cout << "avec quelle main? (1 pour main 1 et 2 pour main 2)\n";
		cin >> j2.mainattak;
		switch (j2.mainattak){
			case 1:
				if (j2.main0 >= 5) {
					cout << "cette main est invalide, tu vas donc manquer ton tour\n";
					j2.attak = 0;
				} 
			case 2:
				if (j2.main1 >= 5) {
					cout << "cette main est invalide, tu vas donc manquer ton tour\n";
					j2.attak = 0;
			}
			default:
			break;
		}
		switch (j2.attak)
		{
		case 1:
			if(j2.mainattak == 1){j2.main0 += j1.main0;}
			else {j2.main1 =+ j1.main0;}
			if (j1.main0 >= 5 && j1.main1 >= 5) {
				j2.win =true;
			}
			break;
		case 2:
			if(j2.mainattak == 2){j2.main0 += j1.main1;}
			else {j2.main1 =+ j1.main1;}
			if (j1.main0 >= 5 && j1.main1 >= 5) {
				j2.win =true;}
			break;

		default:
			break;
		}
		if (j2.win==true) {
			cout << "le joueur 2 a gagne";
			break;
		}
		sleep(1);

		
	}
	return 0;
}

	
