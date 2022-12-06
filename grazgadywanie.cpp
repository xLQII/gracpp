#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
int x;
int proby = x;
int wprowadzona_liczba;
int l;

cout<<"===============================\nZGADYWANIE WYGENEROWANEJ LICZBY\n===============================\n";
cout<<"Wpisz maksymalna liczbe jaka moze zostac wygenerowana: ";
cin>>l;
cout<<endl;
cout<<"Wpisz ile chcesz miec prob: ";
cin>>x;

int n=x;
system("cls");
cout<<"==========\nUSTAWIENIA\n=========="<<endl;
cout<<"liczba prob: "<<n<<endl;
cout<<"przedzial losowania: 1 - "<<l<<endl;

srand(time(0));//inicjuje ziarno generatora liczb losowych aktualnym czasem, dziêki czemu przy kazdym uruchomieniu programu losowana jest nowa liczba
int wylosowana_liczba = (rand() % l) + 1;//generowanie liczby od 1 do liczby wybranej przez u¿ytkownika
cout<<"\n\nZGADNIJ LICZBE Z PRZEDZIALU OD 1 DO "<<l<<" !\n\n(wprowadzaj liczby jedna po drugiej i zatwierdzaj wciskajac ENTER)\n\nPOWODZENIA!\n\n";
cout<<endl;

while(n-- > 0) {//petla ktora za kazdym razem zmniejsza liczbe pozostalych prob o 1
cin>> wprowadzona_liczba;
if(wprowadzona_liczba == wylosowana_liczba) {//sprawdza czy liczba zostala odgadnieta
    if(x-n == 1)
    {
        system("cls");
        cout << "=======\nWYGRANA\n=======\n"<<"wygrales w "<< x-n <<" probie!"<<"\nwylosowana liczba bylo: "<< wylosowana_liczba << endl;
    }
    else
    {
        system("cls");
        cout << "=======\nWYGRANA\n=======\n"<<"wygrales w "<< x-n <<" probach!" <<"\nwylosowana liczba bylo: "<< wylosowana_liczba << endl;
    }
exit(0);
}
else if(wprowadzona_liczba < wylosowana_liczba) {//sprawdza czy liczba wprowadzona przez uzytkownika jest mniejsza czy wieksza niz wygenerowana i wyswietla odpowiedni komuinikat
    system("cls");
cout<<"Wylosowana liczba jest wieksza niz "<< wprowadzona_liczba << " \nwprowadz kolejna liczbe\n" <<endl;
}
else {
    system("cls");
cout<<"Wylosowana liczba jest mniejsza niz "<< wprowadzona_liczba << " \nwprowadz kolejna liczbe\n" << endl;
}
}
system("cls");
cout << "=========\nPRZEGRANA\n=========\n" <<"wylosowana liczba bylo: "<<wylosowana_liczba<< endl;// wyswietla komunikat o przegranej jesli proby sie skoncza
return 0;
}
