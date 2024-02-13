#include <stdio.h>
#include <list>
#include <iostream>
using namespace std;

int main() {

	list<const char*>list_
	{
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno""uguisudani","Nippori","Tabata","Komagome","Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjyuku","Yoyogi","Harajuku","Shibuya","Ebisu","Meguro","Gotanda","Osaki","Shinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	printf("1970”N‚Ì˜Hü}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f) {
		cout << *it_f << endl;
	}

	printf("‚Q‚O‚P‚X”N‚Ì˜Hü}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f) {
		if (*it_f == "Tabata")
		{
			it_f = list_.insert(it_f, "Nishi-Nippori");
			++it_f;
		}
	}

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f) {
		cout << *it_f << endl;
	}

	printf("2022”N‚Ì˜Hü}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f) {
		if (*it_f == "Tamachi")
		{
			it_f = list_.insert(it_f, "Takanawa Geteway");
			++it_f;
		}
	}

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f) {
		cout << *it_f << endl;
	}





	return 0;
}