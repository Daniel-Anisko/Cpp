//Daniel Anisko Kolo Fortuny - Projekt szkolny Code::Blocks 17.12
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
struct gracz{
string imie;
int punkty;
};
void gornakrawedz(){
cout <<"----------------**********----------------"<<endl;
}
void dolnakrawedz(){
cout <<"----------------**********----------------"<<endl;
}
int losowanie(int& il ){
    srand(time(0));
    il=rand() %(( 19 - 1 ) + 1 ) + 1;
    return il;
}
void srodek(int T[],int n,int il){
    int wartosc;
    wartosc = losowanie(il);
    cout <<  "|         "<< T[wartosc-1]<< "   "    <<  "*  "<<T[wartosc]<<"   *     "<<T[wartosc+1]<<"       |"<<endl;
}
void kolo(int T[],int n,int il){
    gornakrawedz();
    srodek(T,20,il);
    dolnakrawedz();
}
void wartosciKola(int T[]){
    T[0]=75;
    T[1]=500;
    T[2]=425;
    T[3]=225;
    T[4]=375;
    T[5]=-1; //stop
    T[6]=25;
    T[7]=275;
    T[8]=400;
    T[9]=325;
    T[10]=100;
    T[11]=0; //bankrut
    T[12]=200;
    T[13]=50;
    T[14]=350;
    T[15]=777;//nagorda
    T[16]=175;
    T[17]=475;
    T[18]=300;
    T[19]=125;
    T[20]=75;
}
void wartosciKola2(int T[]){
    T[0]=75;
    T[1]=1400;
    T[2]=425;
    T[3]=225;
    T[4]=375;
    T[5]=-1; //stop
    T[6]=25;
    T[7]=275;
    T[8]=400;
    T[9]=325;
    T[10]=100;
    T[11]=0; //bankrut
    T[12]=200;
    T[13]=50;
    T[14]=350;
    T[15]=777;//nagorda
    T[16]=175;
    T[17]=475;
    T[18]=300;
    T[19]=125;
    T[20]=75;
}
void wartosciKola3(int T[]){
    T[0]=75;
    T[1]=2000;
    T[2]=425;
    T[3]=225;
    T[4]=375;
    T[5]=-1; //stop
    T[6]=25;
    T[7]=275;
    T[8]=400;
    T[9]=325;
    T[10]=100;
    T[11]=0; //bankrut
    T[12]=200;
    T[13]=50;
    T[14]=350;
    T[15]=777;//nagorda
    T[16]=175;
    T[17]=475;
    T[18]=300;
    T[19]=125;
    T[20]=75;
}
void kategorie(string T[8]){
    T[0]="miejsce";
    T[1]="przyslowie";
    T[2]="cytat";
    T[3]="osoba";
    T[4]="tytul";
    T[5]="rzecz";
    T[6]="czynnosc";
    T[7]="postac";
    T[8]="miasto";
}
void hasla(string T[17]){
    T[0]="plaza";
    T[1]="gory";
    T[2]="czas to pieniadz";
    T[3]="aby do wiosny";
    T[4]="kto umarl ten nie zyje";
    T[5]="przyszlosc zaczyna sie dzis";
    T[6]="ronaldo";
    T[7]="messi";
    T[8]="harry potter";
    T[9]="xmen";
    T[10]="dlugopis";
    T[11]="telefon";
    T[12]="spanie";
    T[13]="jedzenie";
    T[14]="spiderman";
    T[15]="batman";
    T[16]="krakow";
    T[17]="zakopane";
}
string losowanieHasla(string kat, string has, string K1[],string H1[]){
    srand(time(NULL));
  if(kat==K1[0]){
        has=H1[rand() %(( 1 - 0 ) + 1 ) + 0];
    }
    else if(kat==K1[1]){
        has=H1[rand() %(( 3 - 2 ) + 1 ) + 2];
    }
     else if(kat==K1[2]){
        has=H1[rand() %(( 5 - 4 ) + 1 ) + 4];
    }
     else if(kat==K1[3]){
        has=H1[rand() %(( 7 - 6 ) + 1 ) + 6];
    }
     else if(kat==K1[4]){
        has=H1[rand() %(( 9 - 8 ) + 1 ) + 8];
    }
     else if(kat==K1[5]){
        has=H1[rand() %(( 11 - 10 ) + 1 ) + 10];
    }
     else if(kat==K1[6]){
        has=H1[rand() %(( 13 - 12 ) + 1 ) + 12];
    }
     else if(kat==K1[7]){
        has=H1[rand() %(( 15 - 14 ) + 1 ) + 14];

    }
     else if(kat==K1[8]){
        has=H1[rand() %(( 17 - 16 ) + 1 ) + 16];

    }
    return has;
}
void ukryteHaslo (string& ukryte, string normalne){
	for (int i=0; i != normalne.length(); i++){
            if(normalne[i]==' ')
                ukryte+=' ';
            else
                ukryte+='*';}
        cout << "Haslo to: " << ukryte << endl;
}
void spolgloski(char &spol){
    cout << "Podaj spolgloske: "; cin >> spol;
    }
void hasloPoZgadnieciu(string& ukryte, string& normalne, char& spol){
    if(spol=='a'||spol=='e'||spol=='i'||spol=='u'||spol=='o'||spol=='y'){
                cout << "To nie spolgloska " << endl;}
    else{
        for(int i=0; i < normalne.length(); i++){
    if(normalne[i] == spol)
    {
    ukryte[i] = spol;
    }}}

    cout << "Haslo to: " << ukryte << endl;
}
void samogloski(char &samo){
    cout << "Podaj samogloske:"; cin >> samo;
}
void kupSamogloske(char &samo,gracz T[],int x,string& ukryte, string& normalne){

    if(T[x].punkty>=200){

        if(!(samo=='a'||samo=='e'||samo=='i'||samo=='u'||samo=='o'||samo=='y')){
                cout << "To nie samogloska " << endl;}
        else{
            for(int i=0; i < normalne.length(); i++){
                if(normalne[i] == samo){
                    ukryte[i] = samo;}}}
    T[x].punkty-=200;
    cout << "Haslo to: " << ukryte << endl;
}
    else{
    cout << "Niewystarczajaca ilosc pieniedzy!";
}
}
void dodawaniePieniedzySpol (string normalne, char& spol, int il, bool& koniecRundy, gracz T[],int x,int Z[]){

    int znalezione = 0;

	for(int i=0; i < normalne.length(); i++){
        if(normalne[i] == spol){
                T[x].punkty += Z[il];
                    znalezione = znalezione + 1;}}

    if(znalezione){
        cout << "Dobrze! Masz teraz:" << T[x].punkty << "pieniedzy!" << endl;}

    if(!znalezione){
		cout << "Zle " << endl;
        koniecRundy = true;}
}
void wartosciKola(int il, gracz T[],int x, string normalne, string& ukryte, char& spol, bool& koniecRundy,int Z[]){

	if (il == 11){
		cout << "O nie! Zbankrutowales!!!" << endl;
		T[x].punkty = 0;
		koniecRundy = true;}

	else if (il == 5){
		cout << "Pole stop. Tracisz kolejke" << endl;
		koniecRundy = true;}

	else if (il == 15){
        cout << "Walczysz o meble o wartosci 1000zl!" << endl;
        spolgloski(spol);
		hasloPoZgadnieciu(ukryte, normalne, spol);
		int znalezione=0;
            for(int i=0; i < normalne.length(); i++){
                if(normalne[i] == spol){
                    znalezione+=1;}}
            if(znalezione){
                T[x].punkty+=1000;
                cout << "Brawo! Wygrales meble o wartosci 1000zl!!!! Masz teraz " << T[x].punkty << endl;
                koniecRundy=false;}
            if(!znalezione){
                cout << "Niestety okazja na meble przeminela z wiatrem" << endl;
                koniecRundy=true;}}

	else {
		koniecRundy = false;
		spolgloski(spol);
		hasloPoZgadnieciu(ukryte, normalne, spol);
		dodawaniePieniedzySpol (normalne, spol, il, koniecRundy, T,x, Z);}
}
void koniecGry(string& ukryte,string normalne,bool&koniecTotalny){
    if(ukryte==normalne){
        cout << "Brawo! Odgadles haslo!" << endl;
        koniecTotalny=true;}
    else{
        koniecTotalny=false;}
}
void zgadnijHaslo (string normalne, bool& koniecTotalny, bool&koniecRundy){
	string zgadnij;
	cout << "Zgadnij haslo: ";
	cin.ignore();
	getline(cin,zgadnij);
	if (zgadnij == normalne){
		cout << "Gratulacje zgadles haslo!" << endl;
		koniecTotalny = true;
	}
	else if (zgadnij != normalne){
		cout << "Zle!" << endl;
		koniecRundy = true;
	}
}
void menu(char &samo,char& spol, gracz T[],int x,string& ukryte, string& normalne,int Z[],int n, int il,bool& koniecRundy,bool&koniecTotalny){
int wybor;
cout << "1. Zgadnij spolgloske" << endl;
cout << "2. Kup samogloske (200zl)" << endl;
cout << "3. Zgadnij haslo" << endl;
cin >> wybor;
if(wybor==1){
    wartosciKola(Z);
    losowanie(il);
    kolo(Z,n,il);
    wartosciKola(il, T,x, normalne, ukryte, spol, koniecRundy,Z);
    koniecGry(ukryte,normalne,koniecTotalny);
}
else if(wybor==2){

    samogloski(samo);
    kupSamogloske(samo,T,x,ukryte,normalne);
    koniecGry(ukryte,normalne,koniecTotalny);
}
else if(wybor==3){
    zgadnijHaslo (normalne,koniecTotalny,koniecRundy);
}
}
void menu2(char &samo,char& spol, gracz T[],int x,string& ukryte, string& normalne,int Z[],int n, int il,bool& koniecRundy,bool&koniecTotalny){
    int wybor;
cout << "1. Zgadnij spolgloske" << endl;
cout << "2. Kup samogloske (200zl)" << endl;
cout << "3. Zgadnij haslo" << endl;
cin >> wybor;
if(wybor==1){
    wartosciKola2(Z);
    losowanie(il);
    kolo(Z,n,il);
    wartosciKola(il, T,x, normalne, ukryte, spol, koniecRundy,Z);
    koniecGry(ukryte,normalne,koniecTotalny);
}
else if(wybor==2){
    samogloski(samo);
    kupSamogloske(samo,T,x,ukryte,normalne);
    koniecGry(ukryte,normalne,koniecTotalny);
}
else if(wybor==3){
    zgadnijHaslo (normalne,koniecTotalny,koniecRundy);
}

}
void menu3(char &samo,char& spol, gracz T[],int x,string& ukryte, string& normalne,int Z[],int n, int il,bool& koniecRundy,bool&koniecTotalny){
    int wybor;
cout << "1. Zgadnij spolgloske" << endl;
cout << "2. Kup samogloske (200zl)" << endl;
cout << "3. Zgadnij haslo" << endl;
cin >> wybor;
if(wybor==1){
    wartosciKola3(Z);
    losowanie(il);
    kolo(Z,n,il);
    wartosciKola(il, T,x, normalne, ukryte, spol, koniecRundy,Z);
    koniecGry(ukryte,normalne,koniecTotalny);
}
else if(wybor==2){
    samogloski(samo);
    kupSamogloske(samo,T,x,ukryte,normalne);
    koniecGry(ukryte,normalne,koniecTotalny);
}
else if(wybor==3){
    zgadnijHaslo (normalne,koniecTotalny,koniecRundy);
}

}
int zwyciezca(gracz T[],int n){
int max=0;
    for(int i=0;i<n;i++){
        if(T[max].punkty<T[i].punkty){
            max=i;}}
            return max;}
int start(int Z[],gracz T[],int n, int il){
    wartosciKola(Z);
    for(int i=0;i<n;i++){
        int l=0;
        l=losowanie(il);
        T[i].punkty=Z[l];}
    int maximum=0;
    for(int i=0;i<n;i++){
        if(T[maximum].punkty<T[i].punkty){
            maximum=i;}}
    return maximum;
}
int main()
{
//Zmienne
    int A[21]; //tablica na wartosci kola
    int n, ilosc; // ilosc graczy,wylosowane pole
    gracz B[4]; // tablica graczy
    string kategoria,kategoria2,kategoria3, K[10], haslo,haslo2,haslo3,H[17],ukryte,ukryte2,ukryte3;
    char spolgloska, samogloska;
    bool koniec,koniec2,koniec3; //gdy gracz zle odpowie
    bool gameover=false; //koniec rundy
    bool gameover2=false;
    bool gameover3=false;

//Przywitanie graczy
    cout << "Witaj w grze Kolo fortuny! Podaj ilosc graczy:"; cin >> n;
    if(n<=4){
    for(int i=0;i<n;i++){
        cout << "Podaj imie " << i+1 << " gracza:"; cin >> B[i].imie;
        B[i].punkty=0;
    }}
    else{
        cout << "Podano za duza ilosc graczy";
        return 0;}

//Podstawowe funkcje
wartosciKola(A);
kategorie(K);
hasla(H);
srand(time(NULL));
//Kto rozpoczyna gre

int zacz=start(A,B,n,ilosc);
cout << "Gre rozpoczyna gracz:" << B[zacz].imie << endl;
for(int i=0;i<n;i++){
    B[i].punkty=0;
}

//Runda 1
cout << "RUNDA 1! POWODZENIA!!!" << endl;

    kategoria=K[ rand() % 8 ];
    haslo = losowanieHasla(kategoria, haslo, K, H);
    cout << "Kategoria pytania to:" << kategoria << endl;
    ukryteHaslo(ukryte, haslo);
        for(int r=1;r<=10;r++){
            for(int i=0; i<n; i++){
                if(gameover!=true){
                    cout << "Gracz " << B[i].imie << endl;
                        do{
                            menu(samogloska,spolgloska,B,i,ukryte,haslo,A,21,ilosc,koniec,gameover);}
                        while
                            (koniec != true);}}}

//Runda 2
system("cls");
cout << "RUNDA 2! POWODZENIA!!!" << endl;
    kategoria2=K[ rand() % 8 ];
    haslo2 = losowanieHasla(kategoria2, haslo2, K, H);
    cout << "Kategoria pytania to:" << kategoria2 << endl;
    ukryteHaslo(ukryte2, haslo2);
        for(int r=1;r<=10;r++){
            for(int i=0; i<n; i++){
                if(gameover2!=true){
                    cout << "Gracz " << B[i].imie << endl;
                        do{
                            menu2(samogloska,spolgloska,B,i,ukryte2,haslo2,A,21,ilosc,koniec2,gameover2);}
                        while
                            (koniec2 != true);}}}

//Runda 3
system("cls");
cout << "RUNDA 3! POWODZENIA!!!";
    kategoria3=K[ rand() % 8 ];
    haslo3 = losowanieHasla(kategoria3, haslo3, K, H);
    cout << "Kategoria pytania to:" << kategoria3 << endl;
    ukryteHaslo(ukryte3, haslo3);
        for(int r=1;r<=10;r++){
            for(int i=0; i<n; i++){
                if(gameover3!=true){
                    cout << "Gracz " << B[i].imie << endl;
                        do{
                            menu3(samogloska,spolgloska,B,i,ukryte3,haslo3,A,21,ilosc,koniec3,gameover3);}
                        while
                            (koniec3 != true);}}}

//Podsumowanie
system("cls");
cout << "KONIEC GRY!!! GRATULUJACJE DLA UCZESTNIKOW!" << endl << "Wyniki:" << endl;
    for (int i=0;i<n;i++){
        cout << "Gracz " << B[i].imie << " zdobyl " << B[i].punkty << endl;}

int wygrany=zwyciezca(B,n);
cout << "Gre wygral gracz" << B[wygrany].imie << " z wygrana " << B[wygrany].punkty;
return 0;
}
