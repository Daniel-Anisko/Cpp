//POP 2020-01-20 projekt 2 Aniœko Daniel EiT 4 180188 (-std=c++11) (-static-libgcc)
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void menu(){
    cout << "**************Menu**************" << endl;
    cout << "*   1.Dodaj osobe" << setw(15) << "*" <<  endl;
    cout << "*   2.Pokaz osoby z bazy" << setw(8) << "*"  << endl;
    cout << "*   3.Znajdz osobe" << setw(14) << "*" << endl;
    cout << "********************************" << endl;
}
void urodzinyTydzien(){
	string imie;
	string nazwisko;
	string urodziny;
	string imieniny;
    time_t t = time(0);   
    tm* now = localtime(&t); 
    int rok=now->tm_year + 1900; //Pobranie daty
    int miesiac=now->tm_mon + 1;
    int dzien=now->tm_mday;

	int tabUrodziny[3];
	int tabImieniny[2];
	cout << "************************************" << endl;
	cout << "*      Dzisiaj mamy " <<  dzien << "." << miesiac << "." << rok << "      *" << endl;
	cout << "************************************" << endl << endl;
	ifstream pliki("imieniny.txt");
	cout << "W tym tygodniu urodziny maja:" << endl << endl;
	while(pliki >> imie >> nazwisko >> urodziny >> imieniny){
		if(urodziny[4]=='-'&&urodziny[7]=='-'&&urodziny[0]>='0'&&urodziny[0]<='9'&&urodziny[1]>='0'&&urodziny[1]<='9'&&urodziny[2]>='0'&&urodziny[2]<='9'&&urodziny[3]>='0'&&urodziny[3]<='9'&&urodziny[5]>='0'&&urodziny[5]<='9'&&urodziny[6]>='0'&&urodziny[6]<='9'&&urodziny[8]>='0'&&urodziny[8]<='9'&&urodziny[9]>='0'&&urodziny[9]<='9')
		   {
			int a=(urodziny[0]-48)*1000;
			int b=(urodziny[1]-48)*100;
			int c=(urodziny[2]-48)*10;
			int d=(urodziny[3]-48);
			int rok=a+b+c+d;  
			tabUrodziny[0]=rok; //pierwszy wyraz tablica to rok
			string e;
			e=e+urodziny[5];
			e=e+urodziny[6];
			tabUrodziny[1]=stoi(e); //zamiana stringa w int, drugi wyraz tablicy to miesiac
			string f;
			f=f+urodziny[8];
			f=f+urodziny[9];
			tabUrodziny[2] = stoi(f); //zamiana stringa w int, trzeci wyraz tablicy to dzien


		   }

		if (urodziny[2]=='.'&&urodziny[5]=='.'&&urodziny[0]>='0'&&urodziny[0]<='9'&&urodziny[1]>='0'&&urodziny[1]<='9'&&urodziny[7]>='0'&&urodziny[7]<='9'&&urodziny[3]>='0'&&urodziny[3]<='9'&&urodziny[4]>='0'&&urodziny[4]<='9'&&urodziny[6]>='0'&&urodziny[6]<='9'&&urodziny[8]>='0'&&urodziny[8]<='9'&&urodziny[9]>='0'&&urodziny[9]<='9'){
			 
			int a=(urodziny[6]-48)*1000;
			int b=(urodziny[7]-48)*100;
			int c=(urodziny[8]-48)*10;
			int d=(urodziny[9]-48);
			tabUrodziny[0]=a+b+c+d;
			string e;
			e=e+urodziny[3];
			e=e+urodziny[4];
			tabUrodziny[1]=stoi(e);
			string f;
			f=f+urodziny[0];
			f=f+urodziny[1];
			tabUrodziny[2] = stoi(f);

		
			}
		
		
         if (urodziny[2]=='/'&&urodziny[5]=='/'&&urodziny[0]>='0'&&urodziny[0]<='9'&&urodziny[1]>='0'&&urodziny[1]<='9'&&urodziny[7]>='0'&&urodziny[7]<='9'&&urodziny[3]>='0'&&urodziny[3]<='9'&&urodziny[4]>='0'&&urodziny[4]<='9'&&urodziny[6]>='0'&&urodziny[6]<='9'&&urodziny[8]>='0'&&urodziny[8]<='9'&&urodziny[9]>='0'&&urodziny[9]<='9'){
				  
			int a=(urodziny[6]-48)*1000;
			int b=(urodziny[7]-48)*100;
			int c=(urodziny[8]-48)*10;
			int d=(urodziny[9]-48);
			tabUrodziny[0]=a+b+c+d;
			string e;
			e=e+urodziny[0];
			e=e+urodziny[1];
			tabUrodziny[1]=stoi(e);
			string f;
			f=f+urodziny[3];
			f=f+urodziny[4];
			tabUrodziny[2] = stoi(f);
			
		}
		

		// jezeli istnieje data w aktualnym miesiacu i od tego dnia w przod (6) to wyswietl daty urodzin
	if(tabUrodziny[1]==miesiac && (tabUrodziny[2]==dzien||tabUrodziny[2]+1==dzien||tabUrodziny[2]+2==dzien||tabUrodziny[2]+3==dzien||tabUrodziny[2]+4==dzien||tabUrodziny[2]+5==dzien||tabUrodziny[2]+6==dzien)){

        cout << imie << ' ' << nazwisko << " Data urodzin: " << urodziny<<endl;
                }
  
  	}

}
void imieninyTydzien(){
	string imie;
	cout<<""<<endl;
	string nazwisko;
	string urodziny;
	string imieniny;
    time_t t = time(0);   
    tm* now = localtime(&t); 
    int rok=now->tm_year + 1900;
    int miesiac=now->tm_mon + 1;
    int dzien=now->tm_mday;
	int tabUrodziny[3];
	int tabImieniny[2];
	ifstream pliki("imieniny.txt");
	cout << "W tym tygodniu imieniny maja:"<< endl << endl;   


     while(pliki >> imie >> nazwisko >> urodziny >> imieniny){
		if(imieniny[2]=='-'&&imieniny[0]>='0'&&imieniny[0]<='9'&&imieniny[1]>='0'&&imieniny[1]<='9'&&imieniny[3]>='0'&&imieniny[3]<='9'&&imieniny[4]>='0'&&imieniny[4]<='9')
		   {	
			string e;
			e=e+imieniny[0];
			e=e+imieniny[1];
			tabImieniny[0]=stoi(e);
			string f;
			f=f+imieniny[3];
			f=f+imieniny[4];
			tabImieniny[1] = stoi(f);
			}
		   

		if (imieniny[2]=='.'&&imieniny[0]>='0'&&imieniny[0]<='9'&&imieniny[1]>='0'&&imieniny[1]<='9'&&imieniny[3]>='0'&&imieniny[3]<='9'&&imieniny[4]>='0'&&imieniny[4]<='9'){
				  
		    
			string e;
			e=e+imieniny[3];
			e=e+imieniny[4];
			tabImieniny[0]=stoi(e);
			string f;
			f=f+imieniny[0];
			f=f+imieniny[1];
			tabImieniny[1] = stoi(f);

			}
		
				
        if (imieniny[2]=='/'&&imieniny[0]>='0'&&imieniny[0]<='9'&&imieniny[1]>='0'&&imieniny[1]<='9'&&imieniny[3]>='0'&&imieniny[3]<='9'&&imieniny[4]>='0'&&imieniny[4]<='9'){

			string e;
			e=e+imieniny[0];
			e=e+imieniny[1];
			tabImieniny[0]=stoi(e);
			string f;
			f=f+imieniny[3];
			f=f+imieniny[4];
			tabImieniny[1] = stoi(f);

				}
		
	if(tabImieniny[0]==miesiac && (tabImieniny[1]==dzien||tabImieniny[1]+1==dzien||tabImieniny[1]+2==dzien||tabImieniny[1]+3==dzien||tabImieniny[1]+4==dzien||tabImieniny[1]+5==dzien||tabImieniny[1]+6==dzien)){
        cout << imie << ' ' << nazwisko<< " Data imienin: "  << imieniny << endl;	
}
}
}
void imieninyDzien(){
	string imie;
	cout<<""<<endl;
	string nazwisko;
	string urodziny;
	string imieniny;
    time_t t = time(0);   
    tm* now = localtime(&t); 
    int rok=now->tm_year + 1900;
    int miesiac=now->tm_mon + 1;
    int dzien=now->tm_mday;
	int tabUrodziny[3];
	int tabImieniny[2];
	ifstream pliki("imieniny.txt");
    cout << "Dzisiaj imieniny maja:" << endl << endl;           
     while(pliki >> imie >> nazwisko >> urodziny >> imieniny){
		if(imieniny[2]=='-'&&imieniny[0]>='0'&&imieniny[0]<='9'&&imieniny[1]>='0'&&imieniny[1]<='9'&&imieniny[3]>='0'&&imieniny[3]<='9'&&imieniny[4]>='0'&&imieniny[4]<='9')
		   {	
			string e;
			e=e+imieniny[0];
			e=e+imieniny[1];
			tabImieniny[0]=stoi(e);
			string f;
			f=f+imieniny[3];
			f=f+imieniny[4];
			tabImieniny[1] = stoi(f);
			}
		   

		else if (imieniny[2]=='.'&&imieniny[0]>='0'&&imieniny[0]<='9'&&imieniny[1]>='0'&&imieniny[1]<='9'&&imieniny[3]>='0'&&imieniny[3]<='9'&&imieniny[4]>='0'&&imieniny[4]<='9'){
				  
		    
			string e;
			e=e+imieniny[3];
			e=e+imieniny[4];
			tabImieniny[0]=stoi(e);
			string f;
			f=f+imieniny[0];
			f=f+imieniny[1];
			tabImieniny[1] = stoi(f);
			}
		
				
        else if (imieniny[2]=='/'&&imieniny[0]>='0'&&imieniny[0]<='9'&&imieniny[1]>='0'&&imieniny[1]<='9'&&imieniny[3]>='0'&&imieniny[3]<='9'&&imieniny[4]>='0'&&imieniny[4]<='9'){

			string e;
			e=e+imieniny[0];
			e=e+imieniny[1];
			tabImieniny[0]=stoi(e);
			string f;
			f=f+imieniny[3];
			f=f+imieniny[4];
			tabImieniny[1] = stoi(f);

				}      
	if(tabImieniny[0]==miesiac && tabImieniny[1]==dzien){
        cout << imie << ' ' << nazwisko<< " Data imienin: "  << imieniny << endl;	
}
}

}
void urodzinyDzien(){
	string imie;
	cout<<""<<endl;
	string nazwisko;
	string urodziny;
	string imieniny;
    time_t t = time(0);   
    tm* now = localtime(&t); 
    int rok=now->tm_year + 1900;
    int miesiac=now->tm_mon + 1;
    int dzien=now->tm_mday;
	int tabUrodziny[3];
	int tabImieniny[2];
	cout<<""<<endl;
	ifstream pliki("imieniny.txt");
	cout << "Dzisiaj urodziny maja:" << endl << endl;
	while(pliki >> imie >> nazwisko >> urodziny >> imieniny){
		if(urodziny[4]=='-'&&urodziny[7]=='-'&&urodziny[0]>='0'&&urodziny[0]<='9'&&urodziny[1]>='0'&&urodziny[1]<='9'&&urodziny[2]>='0'&&urodziny[2]<='9'&&urodziny[3]>='0'&&urodziny[3]<='9'&&urodziny[5]>='0'&&urodziny[5]<='9'&&urodziny[6]>='0'&&urodziny[6]<='9'&&urodziny[8]>='0'&&urodziny[8]<='9'&&urodziny[9]>='0'&&urodziny[9]<='9')
		   {
			int a=(urodziny[0]-48)*1000;
			int b=(urodziny[1]-48)*100;
			int c=(urodziny[2]-48)*10;
			int d=(urodziny[3]-48);
			int rok=a+b+c+d;
			tabUrodziny[0]=rok;
			string e;
			e=e+urodziny[5];
			e=e+urodziny[6];
			tabUrodziny[1]=stoi(e);
			string f;
			f=f+urodziny[8];
			f=f+urodziny[9];
			tabUrodziny[2] = stoi(f);


		   }

		else if (urodziny[2]=='.'&&urodziny[5]=='.'&&urodziny[0]>='0'&&urodziny[0]<='9'&&urodziny[1]>='0'&&urodziny[1]<='9'&&urodziny[7]>='0'&&urodziny[7]<='9'&&urodziny[3]>='0'&&urodziny[3]<='9'&&urodziny[4]>='0'&&urodziny[4]<='9'&&urodziny[6]>='0'&&urodziny[6]<='9'&&urodziny[8]>='0'&&urodziny[8]<='9'&&urodziny[9]>='0'&&urodziny[9]<='9'){
			 
			int a=(urodziny[6]-48)*1000;
			int b=(urodziny[7]-48)*100;
			int c=(urodziny[8]-48)*10;
			int d=(urodziny[9]-48);
			tabUrodziny[0]=a+b+c+d;
			string e;
			e=e+urodziny[3];
			e=e+urodziny[4];
			tabUrodziny[1]=stoi(e);
			
			string f;
			f=f+urodziny[0];
			f=f+urodziny[1];
			tabUrodziny[2] = stoi(f);

				
		
			}
		
		
        else if (urodziny[2]=='/'&&urodziny[5]=='/'&&urodziny[0]>='0'&&urodziny[0]<='9'&&urodziny[1]>='0'&&urodziny[1]<='9'&&urodziny[7]>='0'&&urodziny[7]<='9'&&urodziny[3]>='0'&&urodziny[3]<='9'&&urodziny[4]>='0'&&urodziny[4]<='9'&&urodziny[6]>='0'&&urodziny[6]<='9'&&urodziny[8]>='0'&&urodziny[8]<='9'&&urodziny[9]>='0'&&urodziny[9]<='9'){
					  
			int a=(urodziny[6]-48)*1000;
			int b=(urodziny[7]-48)*100;
			int c=(urodziny[8]-48)*10;
			int d=(urodziny[9]-48);
			tabUrodziny[0]=a+b+c+d;
			string e;
			e=e+urodziny[0];
			e=e+urodziny[1];
			tabUrodziny[1]=stoi(e);
			string f;
			f=f+urodziny[3];
			f=f+urodziny[4];
			tabUrodziny[2] = stoi(f);
		}		
		
	if(tabUrodziny[1]==miesiac && tabUrodziny[2]==dzien){

        cout << imie << ' ' << nazwisko << " Data urodzin: " << urodziny<<endl;
                }
  
}

}
bool czyMniejsze(int a,int b,int c){
	
	time_t t = time(0);   
    tm* now = localtime(&t);  //tablica na czas terazniejszy
    cout<<now->tm_wday;   
    if (now->tm_year + 1900>a){    
    return true;}
    
    if (now->tm_year + 1900<a){
    return false;}	
	
	if (now->tm_mon + 1>b){
		return true;}
	
	
    if (now->tm_mon + 1 <b){
    return false;}
    	
	if (now->tm_mday>=c){
		return true;}
		
    return false;
}
string poprawneImie(){
	string imie;
	cout << "Dodaj osobe:Podaj imie: " << endl;
	cin >> imie;
    system("cls");
    for (int i=0; i<imie.length(); i++)
    {
    	if((imie[i]>=65 &&imie[i]<=90) || (imie[i]>=97&&imie[i]<=122)){ // jezeli imie zawiera same litery to zw
		return imie;
		}
		else{
		
		cout<<"Podaj imie zawierajace tylko litery\n";
		return poprawneImie();
		}
	}
	
}
string poprawneNazwisko(){
	string nazwisko;
	int count;
	cout << "Dodaj osobe:Podaj nazwisko: " << endl;
    cin>>nazwisko;
    system("cls");
    for (int i=0; i<nazwisko.length(); i++)
    {
    	if((nazwisko[i]>=65 &&nazwisko[i]<=90) || (nazwisko[i]>=97&&nazwisko[i]<=122) || nazwisko[i]==45){
		
		}
		else{
		
		cout<<"Podaj nazwisko zawierajace tylko litery(ewentualnie -)\n";
		return poprawneNazwisko();
		}
	
	}
	for (int j = 0; j < nazwisko.length(); j++) {
    if (nazwisko[j] == 45) {
        count++;
    }
	}	
    if (count>1){
    	cout<<"Maksymalnie jeden '-' \n";
    	return poprawneNazwisko();
	}
	return nazwisko;
}
string poprawnaData(){
	string test;
	cout << "Dodaj osobe:Podaj date urodzin: " << endl;
    cin >> test;
    system("cls");
	if(test.length()==10){		
   		if(test[4]=='-'&&test[7]=='-'&&test[0]>='0'&&test[0]<='9'&&test[1]>='0'&&test[1]<='9'&&test[2]>='0'&&test[2]<='9'&&test[3]>='0'&&test[3]<='9'&&test[5]>='0'&&test[5]<='9'&&test[6]>='0'&&test[6]<='9'&&test[8]>='0'&&test[8]<='9'&&test[9]>='0'&&test[9]<='9')
		   {
			int a=(test[0]-48)*1000;
			int b=(test[1]-48)*100;
			int c=(test[2]-48)*10;
			int d=(test[3]-48);
			int rok=a+b+c+d;
			string e;
			e=e+test[5];
			e=e+test[6];
			int miesiac=stoi(e);
			string f;
			f=f+test[8];
			f=f+test[9];
			int dzien = stoi(f);
			bool poprawnosc=czyMniejsze(rok,miesiac,dzien);
			if (miesiac<1||miesiac>12){
				cout<<"Taki miesiac nie istnieje\n";
				return poprawnaData();
			}
			if (poprawnosc==false){
				cout<<"Data jeszcze nie nastapila\n";
				return poprawnaData();
			}
			if(rok<1900){
				cout<<"Rok musi byæ wiekszy badz rowny 1900\n";
				return poprawnaData();
			}
			if (miesiac%2==0&&miesiac!=2){
				if(dzien>0&&dzien<31){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaData();}
				
				
			}
			if (miesiac%2!=0){
				if(dzien>0&&dzien<=31){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaData();}
				
			}
			if (miesiac==2){
				if(dzien>0&&dzien<=28){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaData();}
				
			}
		   }

		else if (test[2]=='.'&&test[5]=='.'&&test[0]>='0'&&test[0]<='9'&&test[1]>='0'&&test[1]<='9'&&test[7]>='0'&&test[7]<='9'&&test[3]>='0'&&test[3]<='9'&&test[4]>='0'&&test[4]<='9'&&test[6]>='0'&&test[6]<='9'&&test[8]>='0'&&test[8]<='9'&&test[9]>='0'&&test[9]<='9'){
				  
			int a=(test[6]-48)*1000;
			int b=(test[7]-48)*100;
			int c=(test[8]-48)*10;
			int d=(test[9]-48);
			int rok=a+b+c+d;
			string e;
			e=e+test[3];
			e=e+test[4];
			int miesiac=stoi(e);
			string f;
			f=f+test[0];
			f=f+test[1];
			int dzien = stoi(f);
			bool poprawnosc=czyMniejsze(rok,miesiac,dzien);
			if (miesiac<1||miesiac>12){
				cout<<"Taki miesiac nie istnieje\n";
				return poprawnaData();
			}
			if (poprawnosc==false){
				cout<<"Data jeszcze nie nastapila\n";
				return poprawnaData();
			}
			if(rok<1900){
				cout<<"Rok musi byæ wiêkszy badz rowny 1900\n";
				return poprawnaData();
			}
			if (miesiac%2==0&&miesiac!=2){
				if(dzien>0&&dzien<31){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaData();}
				
				
			}
			if (miesiac%2!=0){
				if(dzien>0&&dzien<=31){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaData();}
				
			}
			if (miesiac==2){
				if(dzien>0&&dzien<=28){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaData();}
				
			}
		
		}
		
		
        else if (test[2]=='/'&&test[5]=='/'&&test[0]>='0'&&test[0]<='9'&&test[1]>='0'&&test[1]<='9'&&test[7]>='0'&&test[7]<='9'&&test[3]>='0'&&test[3]<='9'&&test[4]>='0'&&test[4]<='9'&&test[6]>='0'&&test[6]<='9'&&test[8]>='0'&&test[8]<='9'&&test[9]>='0'&&test[9]<='9'){
					  
			int a=(test[6]-48)*1000;
			int b=(test[7]-48)*100;
			int c=(test[8]-48)*10;
			int d=(test[9]-48);
			int rok=a+b+c+d;
			string e;
			e=e+test[0];
			e=e+test[1];
			int miesiac=stoi(e);
			string f;
			f=f+test[3];
			f=f+test[4];
			int dzien = stoi(f);
			bool poprawnosc=czyMniejsze(rok,miesiac,dzien);
			if (miesiac<1||miesiac>12){
				cout<<"Taki miesiac nie istnieje\n";
				return poprawnaData();
			}
			if (poprawnosc==false){
				cout<<"Data jeszcze nie nastapila\n";
				return poprawnaData();
			}
			if(rok<1900){
				cout<<"Rok musi byc wiekszy badz rowny 1900\n";
				return poprawnaData();
			}
			if (miesiac%2==0&&miesiac!=2){
				if(dzien>0&&dzien<31){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaData();}
				
				
			}
			if (miesiac%2!=0){
				if(dzien>0&&dzien<=31){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaData();}
				
			}
			if (miesiac==2){
				if(dzien>0&&dzien<=28){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaData();}
				
			}
		}
		

			
		else {
				cout<<"zly format daty\n";
				return poprawnaData();}
		
	
	
	
}
	else {
			cout<<"zla dlugosc\n";
			return poprawnaData();}
		
}
string poprawnaDataImienin(){  
	string test;
	cout << "Dodaj osobe:Podaj date imienin: " << endl;
    cin >> test;
    system("cls");
	if(test.length()==5){		
   		if(test[2]=='-'&&test[0]>='0'&&test[0]<='9'&&test[1]>='0'&&test[1]<='9'&&test[3]>='0'&&test[3]<='9'&&test[4]>='0'&&test[4]<='9')
		   {	
			string e;
			e=e+test[0];
			e=e+test[1];
			int miesiac=stoi(e);
			string f;
			f=f+test[3];
			f=f+test[4];
			int dzien = stoi(f);

			if (miesiac<1||miesiac>12){
				cout<<"Taki miesiac nie istnieje\n";
				return poprawnaDataImienin();
			}
		
			
			if (miesiac%2==0&&miesiac!=2){
				if(dzien>0&&dzien<31){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaDataImienin();}
				
				
			}
			if (miesiac%2!=0){
				if(dzien>0&&dzien<=31){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaDataImienin();}
				
			}
			if (miesiac==2){
				if(dzien>0&&dzien<=28){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaDataImienin();}
				
			}
		   }

		else if (test[2]=='.'&&test[0]>='0'&&test[0]<='9'&&test[1]>='0'&&test[1]<='9'&&test[3]>='0'&&test[3]<='9'&&test[4]>='0'&&test[4]<='9'){
				  
			string e;
			e=e+test[3];
			e=e+test[4];
			int miesiac=stoi(e);
			string f;
			f=f+test[0];
			f=f+test[1];
			int dzien = stoi(f);

			
			if (miesiac%2==0&&miesiac!=2){
				if(dzien>0&&dzien<31){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaDataImienin();}
				
				
			}
			if (miesiac%2!=0){
				if(dzien>0&&dzien<=31){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaDataImienin();}
				
			}
			if (miesiac==2){
				if(dzien>0&&dzien<=28){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaDataImienin();}
				
			}
		
		}
		
		
        else if (test[2]=='/'&&test[0]>='0'&&test[0]<='9'&&test[1]>='0'&&test[1]<='9'&&test[3]>='0'&&test[3]<='9'&&test[4]>='0'&&test[4]<='9'){
					  
			
			string e;
			e=e+test[0];
			e=e+test[1];
			int miesiac=stoi(e);
			string f;
			f=f+test[3];
			f=f+test[4];
			int dzien = stoi(f);
			
			if (miesiac%2==0&&miesiac!=2){
				if(dzien>0&&dzien<31){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaDataImienin();}
				
				
			}
			if (miesiac%2!=0){
				if(dzien>0&&dzien<=31){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaDataImienin();}
				
			}
			if (miesiac==2){
				if(dzien>0&&dzien<=28){
					return test;
				}
				else {
				cout<<"zla d³ugosc miesiaca\n";
				return poprawnaDataImienin();}
				
			}
		}
		

			
		else {
				cout<<"zly format daty\n";
				return poprawnaDataImienin();}
		
	
	
	
}
	else {
			cout<<"zla dlugosc\n";
			return poprawnaDataImienin();}
		
}
void dodajOsobe(){
	system("cls");
    string imie;
    string nazwisko;
    string urodziny;
    string imieniny;
    ofstream plik("imieniny.txt", ios::app);
    nazwisko=poprawneNazwisko();
    imie=poprawneImie();
	urodziny=poprawnaData();
    imieniny=poprawnaDataImienin();
    plik << '#' << imie << ' ' << nazwisko << ' ' << urodziny << ' ' << imieniny<< endl;
    plik.close();
}
void pokazOsoby(){
	cout << std::ifstream("imieniny.txt").rdbuf() << '\n';
    }
void szukajImie(){
	 string imie;
    string name;
    int i=0;
    int j=0;
    string nazwisko;
    string urodziny;
    string imieniny;
    ifstream pliki("imieniny.txt");
    cout << "Podaj szukane imie: " << endl;
    cin >> name;
    for (int i=0; i<name.length(); i++)
    {
    	if((name[i]>=65 &&name[i]<=90) || (name[i]>=97&&name[i]<=122)){ 
		}
		else{
		cout<<"Podaj imie zawierajace tylko litery\n";
		return szukajImie();
		}
	}
    string name2='#'+name;
     while(pliki >> imie >> nazwisko >> urodziny >> imieniny){
     	i=i+1;
            if(name2==imie){
    cout << imie << ' ' << nazwisko
            << " Data urodzin: " << urodziny
                << " Data imienin: "  << imieniny << endl;}	
    		if(name2!=imie){
			j=j+1;
        	
}}
		if(i==j){
		
            cout << "Nie ma takiej osoby w bazie" << endl;
    }
}

void szukajNazwisko(){
	  string imie;
    string surname;
    string nazwisko;
	string urodziny;
	int i=0;
	int j=0;
	string imieniny;
    ifstream pliki("imieniny.txt");
    cout << "Podaj szukane nazwisko: " << endl;
    cin >> surname;
    for (int i=0; i<surname.length(); i++)
    {
    	if((surname[i]>=65 &&surname[i]<=90) || (surname[i]>=97&&surname[i]<=122) || surname[i]==45){
		
		}
		else{
		
		cout<<"Podaj nazwisko zawierajace tylko litery(ewentualnie -)\n";
		return szukajNazwisko();
		}
	
	}
		
     while(pliki >> imie >> nazwisko >> urodziny>>imieniny ){
     	i=i+1;
            if(surname==nazwisko){
    cout << imie << ' ' << nazwisko
            << " Data urodzin: " << urodziny
                << " Data imienin: "  << imieniny << endl;;}}                
    		if(surname!=nazwisko){
			j=j+1;
        	
}
		if(i==j)
            cout << "Nie ma takiej osoby w bazie" << endl;
        
}
void szukajRok(){
	string imie;
    string nazwisko;
    string urodziny;
    string  imieniny;
    int rok;
    string RRRR;

    ifstream pliki("imieniny.txt");
    cout << "Podaj szukany rok: " << endl;
    cin >> RRRR;
        if(RRRR.length()==4)
    {
	if(RRRR[0]>='0'&&RRRR[0]<='9'&&RRRR[1]>='0'&&RRRR[1]<='9'&&RRRR[2]>='0'&&RRRR[2]<='9'&&RRRR[3]>='0'&&RRRR[3]<='9')
	{
	
	int rr;
    string f;
    f=f+RRRR[0];
    f=f+RRRR[1];
    f=f+RRRR[2];
    f=f+RRRR[3];
    rr=stoi(f);
     while(pliki >> imie >> nazwisko >> urodziny >> imieniny){
     		if(urodziny[4]=='-'&&urodziny[7]=='-'&&urodziny[0]>='0'&&urodziny[0]<='9'&&urodziny[1]>='0'&&urodziny[1]<='9'&&urodziny[2]>='0'&&urodziny[2]<='9'&&urodziny[3]>='0'&&urodziny[3]<='9'&&urodziny[5]>='0'&&urodziny[5]<='9'&&urodziny[6]>='0'&&urodziny[6]<='9'&&urodziny[8]>='0'&&urodziny[8]<='9'&&urodziny[9]>='0'&&urodziny[9]<='9')
		   {
			int a=(urodziny[0]-48)*1000;
			int b=(urodziny[1]-48)*100;
			int c=(urodziny[2]-48)*10;
			int d=(urodziny[3]-48);
			rok=a+b+c+d;
		
		   }
		if (urodziny[2]=='.'&&urodziny[5]=='.'&&urodziny[0]>='0'&&urodziny[0]<='9'&&urodziny[1]>='0'&&urodziny[1]<='9'&&urodziny[7]>='0'&&urodziny[7]<='9'&&urodziny[3]>='0'&&urodziny[3]<='9'&&urodziny[4]>='0'&&urodziny[4]<='9'&&urodziny[6]>='0'&&urodziny[6]<='9'&&urodziny[8]>='0'&&urodziny[8]<='9'&&urodziny[9]>='0'&&urodziny[9]<='9'){
			 
			int a=(urodziny[6]-48)*1000;
			int b=(urodziny[7]-48)*100;
			int c=(urodziny[8]-48)*10;
			int d=(urodziny[9]-48);
			rok=a+b+c+d;

			}
		
         if (urodziny[2]=='/'&&urodziny[5]=='/'&&urodziny[0]>='0'&&urodziny[0]<='9'&&urodziny[1]>='0'&&urodziny[1]<='9'&&urodziny[7]>='0'&&urodziny[7]<='9'&&urodziny[3]>='0'&&urodziny[3]<='9'&&urodziny[4]>='0'&&urodziny[4]<='9'&&urodziny[6]>='0'&&urodziny[6]<='9'&&urodziny[8]>='0'&&urodziny[8]<='9'&&urodziny[9]>='0'&&urodziny[9]<='9'){
				  
			int a=(urodziny[6]-48)*1000;
			int b=(urodziny[7]-48)*100;
			int c=(urodziny[8]-48)*10;
			int d=(urodziny[9]-48);
			rok=a+b+c+d;
		}
            if(rok==rr){
    cout << imie << ' ' << nazwisko
            << " Data urodzin: " << urodziny
                << " Data imienin: "  << imieniny << endl;}      
}
}
else
void szukajRok();
}
}
void szukajMiesiac(){
	 string imie;
    string nazwisko;
    string urodziny;
    string  imieniny;
    int miesiac;
    int rok;
    
    string mm;
	
    ifstream pliki("imieniny.txt");
    cout << "Podaj szukany miesiac (w 2-cyfrowym formacie np. 01-styczen): " << endl;
    cin >> mm;
    if(mm.length()==2)
    {
	if(mm[0]>='0'&&mm[0]<='9'&&mm[1]>='0'&&mm[1]<='9')
	{
	
	int MM;
    string f;
    f=f+mm[0];
    f=f+mm[1];
    MM=stoi(f);
     while(pliki >> imie >> nazwisko >> urodziny >> imieniny){
     		if(urodziny[4]=='-'&&urodziny[7]=='-'&&urodziny[0]>='0'&&urodziny[0]<='9'&&urodziny[1]>='0'&&urodziny[1]<='9'&&urodziny[2]>='0'&&urodziny[2]<='9'&&urodziny[3]>='0'&&urodziny[3]<='9'&&urodziny[5]>='0'&&urodziny[5]<='9'&&urodziny[6]>='0'&&urodziny[6]<='9'&&urodziny[8]>='0'&&urodziny[8]<='9'&&urodziny[9]>='0'&&urodziny[9]<='9')
		   {
		   	string e;
			e=e+urodziny[5];
			e=e+urodziny[6];
			miesiac=stoi(e);	
		   }

		if (urodziny[2]=='.'&&urodziny[5]=='.'&&urodziny[0]>='0'&&urodziny[0]<='9'&&urodziny[1]>='0'&&urodziny[1]<='9'&&urodziny[7]>='0'&&urodziny[7]<='9'&&urodziny[3]>='0'&&urodziny[3]<='9'&&urodziny[4]>='0'&&urodziny[4]<='9'&&urodziny[6]>='0'&&urodziny[6]<='9'&&urodziny[8]>='0'&&urodziny[8]<='9'&&urodziny[9]>='0'&&urodziny[9]<='9'){
			string e; 
			e=e+urodziny[3];
			e=e+urodziny[4];
			miesiac=stoi(e);
			}
		
         if (urodziny[2]=='/'&&urodziny[5]=='/'&&urodziny[0]>='0'&&urodziny[0]<='9'&&urodziny[1]>='0'&&urodziny[1]<='9'&&urodziny[7]>='0'&&urodziny[7]<='9'&&urodziny[3]>='0'&&urodziny[3]<='9'&&urodziny[4]>='0'&&urodziny[4]<='9'&&urodziny[6]>='0'&&urodziny[6]<='9'&&urodziny[8]>='0'&&urodziny[8]<='9'&&urodziny[9]>='0'&&urodziny[9]<='9'){
			string e;	  
			e=e+urodziny[0];
			e=e+urodziny[1];
			miesiac=stoi(e);
			
		}
            if(miesiac==MM){
    cout << imie << ' ' << nazwisko
            << " Data urodzin: " << urodziny
                << " Data imienin: "  << imieniny<<endl;}
}
}
else
void szukajMiesiac();
}
}
void szukajOsoby(){
    string imie;
    string nazwisko;
    int mm;
    int dd;
    int rrrr;
    int mm1;
    int dd1;
    int choose;
    system("cls");
    cout << "************************************" << endl;
    cout << "*  1. Szukaj po Imieniu            *" << endl;
    cout << "*  2. Szukaj po Nazwisku           *" << endl;
    cout << "*  3. Szukaj po Roku Urodzenia     *" << endl;
    cout << "*  4. Szukaj po Miesiacu Urodzenia *" << endl;
    cout << "************************************" << endl;
    cin >> choose;
    if(choose==1){
        szukajImie();
    }
    else if(choose==2){
        szukajNazwisko();
    }
    else if(choose==3){
        szukajRok();
    }
	else if(choose==4){
        szukajMiesiac();
    }
}
int main(){
    int wybor;
    char t,t1;
	do{
	urodzinyTydzien();
	urodzinyDzien();	
	imieninyTydzien();
    imieninyDzien();
    cout<<""<<endl;
    cout << "Jezeli chcesz kontynuowac, kliknij cokolowiek i enter" << endl;
    cout << "Jezeli chcesz odswiezyc date, wcisnij n i enter" <<endl;
    cin >> t1;
    }while(t1=='n' || t1=='N');
    system ("cls");
	do{
    system("cls");
    menu();
    cin >> wybor;
    if(wybor==1){
    dodajOsobe();}
    else if(wybor==2){
    pokazOsoby();}
    else if(wybor==3){
    szukajOsoby();}
    cout << "Czy chcesz kontynuowac?(T/N)" << endl;
    cin >> t;
    system("cls");
    }while(t=='t' || t=='T');
    return 0;
	}
