/*
//******************************** SUDENAZIN YOL BİLGİ SİSTEMİ KODU ***************************************
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int yas, arkadasSayisi, hava, ruzgarHizi;
    float mesafe;
    string bisikletYolu;
    
    do {
        cout << "yasınızı giriniz (6-35):";
        cin >> yas;
    } while (yas < 6 || yas > 35);

    do {
        cout << "mesafeyi giriniz (0.1-20):";
        cin >> mesafe;
    } while (mesafe < 0.1 || mesafe > 20);

    do {
        cout << "arkadas sayisini giriniz (0-10):";
        cin >> arkadasSayisi;
    } while (arkadasSayisi < 0 || arkadasSayisi > 10);

    srand(time(0));

    hava = rand() % 5 + 1;
    ruzgarHizi = rand() % 6;
    bisikletYolu = (rand() % 2 == 0) ? "var" : "yok";

    cout << "hava durumu:";
    if (hava == 1) {
        cout << "acik" << endl;
    } else if (hava == 2) {
        cout << "bulutlu" << endl;
    } else if (hava == 3) {
        cout << "yagmurlu" << endl;
    } else if (hava == 4) {
        cout << "karli" << endl;
    } else if (hava == 5) {
        cout << "firtinali" << endl;
    }

    cout << "ruzgar hizi:" << ruzgarHizi << endl;
    cout << "bisiklet yolu:" << bisikletYolu << endl;

    if ((hava == 3 || hava == 4 || hava == 5) || (hava == 1 && ruzgarHizi > 3)) {
        cout << "tavsiye - arabayla gidiniz" << endl;
    } else if (bisikletYolu == "yok" && mesafe < 1) {
        cout << "tavsiye - bisiklet yolu yok, yuruyerek gidiniz" << endl;
    } else if (yas < 10 || mesafe > 1.5) {
        cout << "tavsiye - araba ile gidiniz" << endl;
    } else if (yas > 10 && mesafe < 1) {
        cout << "tavsiye - yuruyerek gidiniz" << endl;
    } else if (yas > 10 && mesafe >= 1 && mesafe <= 1.5 && arkadasSayisi > 0 && bisikletYolu == "var") {
        cout << "tavsiye - bisiklet ile gidiniz" << endl;
    } else {
        cout << "tavsiye - araba ile gidiniz" << endl;
    }

    return 0;
}


*/

/*
//************************** ÖĞRENCİ KALDI GEÇTİ ********************************
#include <iostream>
#include <iomanip>
#include <ctime> //time()
#include <cstdlib> // srand() ve rand()
#include <cmath>
using namespace std;

--void grafikCiz(int adet)
{
     for(int k=0; k < adet;k++)
               cout<<'*';
     cout << "\n";
} --
int main()
{
   const int OGR_SAYISI = 50;
   const int NOTLAR = 3;
   //int donguSayisi=0;

   int notlar[OGR_SAYISI][NOTLAR]; // array s has 10 elements
   int kaldi=0,gecti=0,genelToplam=0;

   srand( time( 0 ) );

   for ( int i = 0; i < OGR_SAYISI ; i++ ) // set the values
   {
       cout<<i+1<<". ogrenci : ";
       for(int j=0;j<NOTLAR-1;j++)
       {
         notlar[i][j] = rand()%101;  // 0-100 arasÃ½nda not Ã¼retir

         cout<<setw(3)<<notlar[i][j];
        // donguSayisi++;
       }
       notlar[i][2]=round(notlar[i][0]*.4+notlar[i][1]*.6);
       genelToplam+=notlar[i][2];
       cout<<setw(5)<<notlar[i][2];
       if(notlar[i][2]<50)
         {cout<<"   Kaldi";kaldi++;}
       else
         {cout<<"   Gecti";gecti++;}

    cout<<endl;
   }
   //cout<<"donguSayisi:"<<donguSayisi;

   cout<<"kalan: "<<kaldi<<"  gecen: "<<gecti << "ortalama: "<< genelToplam/50.0f;


  system("pause");
  return 0;
}

*/ 
/*
//*********************************************** SAMET KOCA TAVSİYE ******************************************** 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");

    int yas, arkadas_sayisi;
    double mesafe_degeri;
    int hava_durumu, ruzgar_hizi;
    string bisiklet_yolu_olma_durumu;
    srand(time(0));

    cout << "Yasınızı giriniz (6-35): ";
    cin >> yas;
    while (yas < 6 || yas > 35) {
        cout << "Hatalı giriş, yasınızı tekrar giriniz (6-35): ";
        cin >> yas;
    }

    cout << "Mesafeyi girin (0.1-20 km): ";
    cin >> mesafe_degeri;
    while (mesafe_degeri < 0.1 || mesafe_degeri > 20) {
        cout << "Hatalı giriş! Mesafeyi tekrar girin (0.1-20 km): ";
        cin >> mesafe_degeri;
    }

    cout << "Arkadaş sayısını girin (0-10): ";
    cin >> arkadas_sayisi;
    while (arkadas_sayisi < 0 || arkadas_sayisi > 10) {
        cout << "Hatalı giriş! Arkadaş sayısını tekrar girin (0-10): ";
        cin >> arkadas_sayisi;
    }

    hava_durumu = rand() % 5 + 1;
    ruzgar_hizi = rand() % 6;
    bisiklet_yolu_olma_durumu = (rand() % 2 == 0) ? "Var" : "Yok";

    cout << "Hava durumu: ";
    if (hava_durumu == 1)
        cout << "Açık";
    else if (hava_durumu == 2)
        cout << "Bulutlu";
    else if (hava_durumu == 3)
        cout << "Yağmurlu";
    else if (hava_durumu == 4)
        cout << "Karlı";
    else
        cout << "Fırtına" << endl;

    cout << "Rüzgar hızı: " << ruzgar_hizi << endl;
    cout << "Bisiklet yolu: " << bisiklet_yolu_olma_durumu << endl;

    if (yas < 10 || mesafe_degeri > 1.5) {
        cout << "Tavsiye: Araba ile gidin." << endl;
    } else if (mesafe_degeri < 1) {
        if (hava_durumu >= 3 || ruzgar_hizi > 3) {
            cout << "Tavsiye: Araba ile gidin." << endl;
        } else {
            cout << "Tavsiye: Yürüyün." << endl;
        }
    } else if (mesafe_degeri >= 1 && mesafe_degeri <= 1.5) {
        if (arkadas_sayisi > 0 && bisiklet_yolu_olma_durumu == "Var") {
            if (hava_durumu >= 3 || ruzgar_hizi > 3) {
                cout << "Tavsiye: Araba ile gidin." << endl;
            } else {
                cout << "Tavsiye: Bisikletle gidin." << endl;
            }
        } else {
            cout << "Tavsiye: Yürüyün." << endl;
        }
    }

    cout << "Tavsiyemizi dinlediğiniz için teşekkür ederiz" << endl;

    return 0;
}


*/ /*
//***************************************** SAMET KOCA KÜTÜPHANE SİSTEMİ ************************************** 
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

typedef struct {
    string isim;
    string yazan;
    int yil;
    string kod;
} Kayit;

vector<Kayit> liste;
const string dosyaAdi = "veriler.txt";

void ekle();
void listele();
void ara();
void sil();
void guncelle();
void dosyaOku();
void dosyaYaz();

int main() {
    dosyaOku();

    while(true) {
        cout << "\n--- Kitap Sistemi ---\n";
        cout << "1. Ekle\n";
        cout << "2. Listele\n";
        cout << "3. Ara\n";
        cout << "4. Sil\n";
        cout << "5. Guncelle\n";
        cout << "6. Cikis\n";
        cout << "Secim: ";

        int sec;
        cin >> sec;
        cin.ignore();

        switch(sec) {
            case 1:
                ekle();
                break;
            case 2:
                listele();
                break;
            case 3:
                ara();
                break;
            case 4:
                sil();
                break;
            case 5:
                guncelle();
                break;
            case 6:
                dosyaYaz();
                cout << "Cikis yapiliyor...\n";
                return 0;
            default:
                cout << "Hatali giris!\n";
        }
    }
}

void ekle() {
    Kayit yeni;
    cout << "Kitap ismi: ";
    getline(cin, yeni.isim);
    cout << "Yazar ismi: ";
    getline(cin, yeni.yazan);
    cout << "Yayin yili: ";
    cin >> yeni.yil;
    cin.ignore();
    cout << "ISBN: ";
    getline(cin, yeni.kod);

    liste.push_back(yeni);
    cout << "Ekleme basarili!\n";
    dosyaYaz();
}

void listele() {
    if(liste.empty()) {
        cout << "Hic kitap yok.\n";
        return;
    }

    for(size_t i = 0; i < liste.size(); i++) {
        cout << "Kitap " << i + 1 << ":\n";
        cout << "  Isim: " << liste[i].isim << "\n";
        cout << "  Yazar: " << liste[i].yazan << "\n";
        cout << "  Yil: " << liste[i].yil << "\n";
        cout << "  ISBN: " << liste[i].kod << "\n";
        cout << "-------------------\n";
    }
}

void ara() {
    cout << "Ara (isim/yazar): ";
    string arama;
    cin.ignore();
    getline(cin, arama);

    transform(arama.begin(), arama.end(), arama.begin(), ::tolower);

    bool bulundu = false;
    for (const auto& k : liste) {
        string isimK = k.isim, yazanK = k.yazan;
        transform(isimK.begin(), isimK.end(), isimK.begin(), ::tolower);
        transform(yazanK.begin(), yazanK.end(), yazanK.begin(), ::tolower);

        if (isimK.find(arama) != string::npos || yazanK.find(arama) != string::npos) {
            cout << "Bulundu:\n";
            cout << "  Isim: " << k.isim << "\n";
            cout << "  Yazar: " << k.yazan << "\n";
            cout << "  Yil: " << k.yil << "\n";
            cout << "  ISBN: " << k.kod << "\n";
            bulundu = true;
        }
    }

    if (!bulundu) {
        cout << "Bulunamadi.\n";
    }
}

void sil() {
    cout << "Sil (isim/ISBN): ";
    string arama;
    cin.ignore();
    getline(cin, arama);

    transform(arama.begin(), arama.end(), arama.begin(), ::tolower);

    for (auto it = liste.begin(); it != liste.end(); ++it) {
        string isimK = it->isim, kodK = it->kod;
        transform(isimK.begin(), isimK.end(), isimK.begin(), ::tolower);
        transform(kodK.begin(), kodK.end(), kodK.begin(), ::tolower);

        if (isimK.find(arama) != string::npos || kodK.find(arama) != string::npos) {
            liste.erase(it);
            cout << "Silindi.\n";
            return;
        }
    }

    cout << "Silinemedi.\n";
}

void guncelle() {
    cout << "Guncelle (isim/ISBN): ";
    string arama;
    cin.ignore();
    getline(cin, arama);

    transform(arama.begin(), arama.end(), arama.begin(), ::tolower);

    for (auto& k : liste) {
        string isimK = k.isim, kodK = k.kod;
        transform(isimK.begin(), isimK.end(), isimK.begin(), ::tolower);
        transform(kodK.begin(), kodK.end(), kodK.begin(), ::tolower);

        if (isimK.find(arama) != string::npos || kodK.find(arama) != string::npos) {
            cout << "Guncellenen kitap:\n";
            cout << "Yeni isim (" << k.isim << "): ";
            getline(cin, k.isim);
            cout << "Yeni yazar (" << k.yazan << "): ";
            getline(cin, k.yazan);
            cout << "Yeni yayin yili (" << k.yil << "): ";
            cin >> k.yil;
            cin.ignore();
            cout << "Yeni ISBN (" << k.kod << "): ";
            getline(cin, k.kod);

            cout << "Guncelleme tamamlandi.\n";
            return;
        }
    }

    cout << "Guncellenecek kitap bulunamadi.\n";
}

void dosyaOku() {
    ifstream dosya(dosyaAdi);
    if (!dosya) {
        cout << "Kitap dosyasi bulunamadi. Yeni bir dosya olusturulacak.\n";
        return;
    }

    Kayit kitap;
    string temp;
    while (getline(dosya, kitap.isim)) {
        getline(dosya, kitap.yazan);
        dosya >> kitap.yil;
        dosya.ignore();
        getline(dosya, kitap.kod);
        liste.push_back(kitap);
        getline(dosya, temp);
    }

    dosya.close();
}

void dosyaYaz() {
    ofstream dosya(dosyaAdi);
    if (!dosya) {
        cerr << "Kitaplar dosyasina yazilamadi!\n";
        return;
    }

    for (const auto& k : liste) {
        dosya << k.isim << "\n";
        dosya << k.yazan << "\n";
        dosya << k.yil << "\n";
        dosya << k.kod << "\n";
    }

    dosya.close();
}

*/ /*
//******************* VİZE VE FİNAL HESAPLAMA ************************
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
   int vize,fin;
   char notHarf;
   cout << "vize ve final giriniz: ";
   cin >> vize >> fin;

   float ortalama = vize * .4 + fin * .6;

   cout<<"ortalamaniz: "<<ortalama<<endl;


   if ( ortalama >= 90 )       // 90 - 100 
        notHarf='A';
   else if (ortalama >= 80 )  // 80-89
        notHarf='B';
   else if (ortalama >= 70 )  // 70-79
        notHarf='C';
   else if (ortalama >= 60 )  // 60-69
        notHarf='D';
   else if (ortalama >= 50 )
        notHarf='E';
   else                     // 0 - 60   cout << "F";
        notHarf='F';


   switch(notHarf)
   {
			case 'A' :
				cout<<("A - mukemmel!");
				break;
			case 'B' :
                cout<<("B - Cok iyi");
				break;

			case 'C' :
				cout<<("C - iyi");
				break;
			case 'D' :
				cout<<("D - gectiniz");
				break;
			case 'E' :
				cout<<("E - zar zor gectiniz");
				break;
			case 'F' :
				cout<<("F - kaldiniz");
				break;
			default :
				cout<<("gecersiz not girdiniz...");
   }

   //cout<<"ortalamanÃ½zÃ½n harf karÃ¾Ã½lÃ½gÃ½:"<<ortalama;
   cout<< endl;
   system("pause");
   return 0;
}

*/ /*
//
#include <iostream>
#include <string>

using namespace std;
//
int main()
{
    string ad1;
    //cin.get(ad1,80);	    //for(int i=1;i<=ad1.length();i++)
    //        cout<<ad1[ad1.length()-i];
    
    getline(cin,ad1);  //BoÃ¾luÃ°u da okur...

    for(int i=ad1.length()-1;i>=0;i--)
            cout<<ad1[i];
    
    
        system("pause");
    return 0;
}

*/
/*
//******************* BASİT KARAKTER DEĞİŞKENİ *******************
#include <iostream>
using namespace std;

int main()
{
   const int MAX = 80;              //karakter dizisindeki maksimum karakter sayısı
   char str[MAX];                   //string variable str

   cout << "Karakter dizisi gir :"<<endl;
   cin >> str;                      //karakter dizisini str değişkenine yerleştir
                                    //str değişkenindeki karakter dizisini göster
   cout << "Girilen karakter dizisi--> " << str << endl;
   //system("pause");
   return 0;
}


*/ /*
//***************** BASİT KARAKTER DEĞİŞKENİ **********************
#include <iostream>
#include <iomanip>
#include <cstring> //for strlen()
using namespace std;
int main(){
    char str1[] = "Kocaeli Universitesi";
    const int MAX = 80;
    char str2[MAX];
    int i;
    for(i=0; i<strlen(str1); i++)
            str2[i] = str1[i];
    str2[i] ='\0';
    cout << str2 << endl;
    return 0;
    }

*/ /*
//***************** BASİT KARAKTER DEĞİŞKENİ **********************
#include <iostream>
using namespace std;

int main()
   {
   const int MAX = 80;              //karakter dizisindeki maksimum karakter sayısı
   char str[MAX],str2[MAX];                   //string variable str   \0

   cout << "Karakter dizisi gir";
   //cin >> str;
   cin.get(str, MAX);
   cout << "Girilen karakter dizisi" << str << endl;

    cout << "Karakter dizisi (cok satir) gir";
   cin.get(str, MAX,'.');
   cout << "Girilen karakter dizisi" << str << endl;

   //system("pause");
   return 0;
   }


*/
/*
//
#include <iostream>
#include <iomanip>
#include <cstdlib>

//#define ESAY 10

using namespace std;

const int ESAY=10;

int main()
{
	int sayilar[ ESAY ] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };

	cout<<setw(5)<<"indis"<<setw(12)<<"Deger"<<endl;

	for ( int i = 0; i < ESAY; i++ )
	{
		cout<<setw(5)<<i<<setw(12)<<sayilar[i]<<endl;
	}

	int dizi[5] = {10, 20}; // Sadece 2 eleman atanÃÂ½yor
    cout << "1. Eleman: " << dizi[0] << endl; // ÃÂÃÂ½ktÃÂ½: 10
    cout << "2. Eleman: " << dizi[1] << endl; // ÃÂÃÂ½ktÃÂ½: 20
    cout << "3. Eleman: " << dizi[2] << endl; // ÃÂÃÂ½ktÃÂ½: 0 (VarsayÃÂ½lan deÃÂ°er)
    cout << "4. Eleman: " << dizi[3] << endl;
    cout << "5. Eleman: " << dizi[4] << endl;
    return 0;

	//system("pause");
	//return 0;
}

*/ /*
#include <iostream>
#include <iomanip>
//#define ESAY 10

using namespace std;

const int ESAY=10;

int main()
{
	int sayilar[ ESAY ] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };

	cout<<setw(5)<<"indis"<<setw(8)<<"Deger"<<setw(20)<<"Grafik"<<endl;

	for ( int i = 0; i < ESAY; i++ )
	{
			cout<<setw(5)<<i<<setw(8)<<sayilar[i]<<setw(15);
			for(int j=0;j<sayilar[i];j++)
				{cout<<'*';}
			cout<<endl;


	}
	//system("pause");
	return 0;
}

*/ /*
#include <iostream>
#include <iomanip>
using namespace std;

const int ESAY=200;

int main()
{
    int sayi[ESAY];

    for(int i=0; i<ESAY ; i++)
    {
            sayi[i]=(i+1)*10;
            //cout<<sayi[i]<<endl;

    }


    for(int i=0; i<ESAY ; i++)
    {
            cout<<left<<setw(6)<<sayi[i];
            if((i+1)%5==0)
                cout<<endl;
   }
    //system("pause");
    return 0;
} // end main


*/ /*
#include <iostream>
#include <iomanip>
using namespace std;


void diziYaz(int dizi[], int esay);// fonksiyon prototipi

int main ()
{    int ilkDizi[] = {5, 10, 15};
     int ikinciDizi[] = {2, 4, 6, 8, 10};
     diziYaz(ilkDizi,3);
     diziYaz(ikinciDizi,2);

     //system("pause");
     return 0;
} // end main

void diziYaz(int dizi[], int esay)
{
     for (int n=0; n<esay; n++)
         cout << dizi[n] << " ";
     cout << "\n";
}

*/ /*
#include <iostream>
#include <iomanip>
#include <ctime> //time()
#include <cstdlib>// srand() ve rand()

using namespace std;


int main()
{
   const int ESAY = 25; // must bildirimde başlatma
   int dizi[ESAY]; // array s has 10 elements
   int sayi,tekrar=0;

   //do
   //{
       //tekrar=0;
       srand( time( 0 ) );

       for ( int i = 0; i < ESAY ; i++ ) // set the values
       {
           dizi[i] = rand()%11;  //
       }

       do
       {    cout<< "sayi giriniz(0-10 arasi)";

           cin>>sayi;
       }while(!(sayi>0&&sayi<10));
       //if(sayi<0)
       //   break;

       for ( int j = 0; j < ESAY ; j++ )
       {   cout<<dizi[j]<<"  ";
           	if(sayi==dizi[j])
                tekrar++;
       }

      cout<<"\n"<<tekrar<<endl;
   //}while(sayi>0);

  system("pause");
  return 0;
}

*/ /*
#include <iostream>
#include <iomanip>
#include <ctime> //time()
#include <cstdlib>// srand() ve rand()

using namespace std;

int main()
{
   const int SATIR = 6;
   const int SUTUN = 5;

   int matris[SATIR][SUTUN]; // array s has 10 elements

   srand( time( 0 ) );

   for ( int i = 0; i < SATIR ; i++ ) // set the values
   {   for(int j=0;j<SUTUN;j++)
      {
         matris[i][j] = 1 + rand()%10;
         //cout<<setw(5)<<matris[i][j];
      }
     // cout<<endl;
   }


  for ( int i = 0; i < SATIR ; i++ ) // set the values
   {   for(int j=0;j<SUTUN;j++)
      {
         cout<<setw(5)<<matris[i][j];
      }
      cout<<endl;

   }



  system("pause");
  return 0;
}

*/ /*
/*
// Kapsam...
#include <iostream>
using namespace std;

void useLocal(  ); // fonksiyon prototipi
void useGlobal(  ); // fonksiyon prototipi

int x = 1; // global deÃÂÃÂ°iÃÂÃÂ¾ken

int main()
{
   int x = 5; // local variable to main

   cout << "local x in main's outer scope is " << x << endl;

   { // start new scope
      int x = 7; // hides x in outer scope

      cout << "local x in main's inner scope is " << x << endl;
   } // end new scope

   cout << "local x in main's outer scope is " << x << endl;

   useLocal(); // useLocal has local x
  
   useGlobal(); // useGlobal uses global x
   

   cout << "\nlocal x in main is " << x << endl;
   system ("pause");
   return 0; // başarılı sonlanmayı belirtir
} // end main

// useLocal reinitializes local variable x during each call
void useLocal( )
{
   int x = 25; // initialized each time useLocal is called

   cout << "\nlocal x is " << x << " on entering useLocal" << endl;
   x++;
   cout << "local x is " << x << " on exiting useLocal" << endl;
} // end function useLocal


// useGlobal modifies global variable x during each call
void useGlobal( )
{
   cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
   x *= 10;
   cout << "global x is " << x << " on exiting useGlobal" << endl;
} // end function useGlobal


*/ /*
// Fig. 6.23: fig06_23.cpp
// Using the unary scope resolution operator.
#include <iostream>
using namespace std;
using std::cout;
//using std::endl;

int number = 7; // number adlı global değişken

int main()
{
   double number = 10.5; // local variable named number

   // yerel ve global değişkenlerin değerlerini gösterir
   cout << "Local double value of number = " << number
      << "\nGlobal int value of number = " << ::number << endl;
   return 0; // başarılı sonlanmayı belirtir
} // end main


*/ /*
//factor2.cpp
//faktöriyelleri özyineleme kullanarak hesaplar
#include <iostream>
#include <cstdlib>

using namespace std;

unsigned long faktoriyelHesapla(unsigned long);

int main()
 {
   int sayi;
   unsigned long faktoriyel;

   cout << "Sayi Giriniz ";
   cin >> sayi;
   //faktoriyel = 1;

   faktoriyel = faktoriyelHesapla(sayi);
   cout << sayi<<"Sayisinin  " << " faktoriyeli : " << faktoriyel << endl;

   // iterative ÃÂÃÂÃÂÃÂ§alÃÂÃÂÃÂÃÂ±ÃÂÃÂÃÂÃÂtÃÂÃÂÃÂÃÂ±rma
   --for (int i = sayi; i>=1; i--)
    faktoriyel *=i;
    cout << sayi<<"Sayisinin  " << " faktoriyeli : " << faktoriyel << endl;--

   system("pause");
   return 0;

   }
*//*
//-------------------------------------------------------------
// factfunc()
// faktöriyelleri hesaplamak için kendini çağırır
unsigned long faktoriyelHesapla(unsigned long n)
{

   unsigned long faktoriyel = 1;
   --if(n > 1)
      return n * faktoriyelHesapla(n-1);  //self call
   else
      return 1;--
      for (int i = n; i>=1; i--)
       faktoriyel *= i;

    return faktoriyel;
}

*/ /*
// table2.cpp
// demonstrates fonksiyon tanımı preceding function calls
#include <iostream>
#include <cstdlib>
using namespace std;                 //no fonksiyon bildirimi
//--------------------------------------------------------------
                       //fonksiyon tanımı
--void ciz(void);

//--------------------------------------------------------------
int main()                           //main() follows function
{
   ciz();                       //fonksiyon çağrısı
   cout << "Veri Tipi       Aralik" << endl;
   ciz();                       //fonksiyon çağrısı
   cout << "char        -128 to 127" << endl
        << "short       -32,768 to 32,767" << endl
        << "int         System dependent" << endl
        << "long        -2,147,483,648 to 2,147,483,647" << endl;
   ciz();
   system("pause");                      //fonksiyon çağrısı
   return 0;
}

void ciz()
{
   for(int j=0; j<45; j++)
      cout << '*';
   cout << endl;
}--


// Global deÃÂÃÂ°iÃÂÃÂ¾ken tanÃÂÃÂ½mÃÂÃÂ½
int g =50;

int main() {
   int a, b, c;

   a = 10;
   b = 20;
   c = a + b + g;

   cout << c;
   return 0;
}

*/ /*
// table2.cpp
// demonstrates fonksiyon tanımı preceding function calls
#include <iostream>
#include <cstdlib>
using namespace std;                 //no fonksiyon bildirimi
//--------------------------------------------------------------
// starline()                        
//void ciz(char , int );
void ciz(char ch='?', int n=60)
{
   for(int j=0; j<n; j++)
      cout << ch;
   cout << endl;
}


//--------------------------------------------------------------
int main()                           //main() follows function
{
   int sayi;
   char karakter;

   cout<<"basilacak karakter sayisi";
   cin>>sayi;
   cout<<"karakteri giriniz";
   cin>>karakter;

   ciz('*',60);                       //fonksiyon çağrısı
   cout << "Veri Tipi       Aralik" << endl;
   ciz('+',60);                       //fonksiyon çağrısı
   cout << "char        -128 to 127" << endl
        << "short       -32,768 to 32,767" << endl
        << "int         System dependent" << endl
        << "long        -2,147,483,648 to 2,147,483,647" << endl;
   ciz(karakter,sayi);
   ciz();
   system("pause");                      //fonksiyon çağrısı
   return 0;
}


*/ /*
// tablearg.cpp
// fonksiyon argümanlarını gösterir
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
void ciz(char , int ) ;               //fonksiyon bildirimi

int main()
   {
   ciz('-', 43);                      //fonksiyon çağrısı
   cout << "Veri Tipi     Aralik" << endl;
   ciz('=', 23);                      //fonksiyon çağrısı
   cout << "char        -128 to 127" << endl
        << "short       -32,768 to 32,767" << endl
        << "int         System dependent" << endl
        << "double      -2,147,483,648 to 2,147,483,647" << endl;
   ciz('-', 43);                      //fonksiyon çağrısı
   system("pause");

   return 0;
   }
//--------------------------------------------------------------
// ciz()
// fonksiyon tanımı
void ciz(char ch, int n)              //function declarator
   {
   for(int j=0; j<n; j++)                 //fonksiyon gövdesi
      {cout << ch;}
      cout << endl;
   }

*/ /*

// Geriye deger dondurme

#include <iostream>
#include <iomanip>
#include <cstdlib>


using namespace std;

float cevir(float);

main()
{
   float ftemp;  //for temperature in fahrenheit

   cout << "Sicakligi Giriniz(fahrenheit): ";
   cin >> ftemp;
   float ctemp = cevir(ftemp);
   //cevir(ftemp);
   cout<<cevir(ftemp)<<endl;
   cout << "Sicaklik (Celcius): " << fixed<< setprecision(2) <<ctemp << endl;
   system("pause");
   return 0;
}

float cevir(float fsicaklik)
{

       float csicaklik=(fsicaklik-32) * 5.0f / 9;

        return csicaklik;

        //return ((fsicaklik-32) * 5 / 9);
}

*/ /*
// Struct parametre gÃÂÃÂ¶nderimi
#include <iostream>
using namespace std;
//struct Olcu                
{
   int metre;
   int cmetre;
};
//void olcuGoster(Olcu); 


int main()
   {
   Olcu d1,d2;            //define two lengths
  

                               //get length d1 from user
   cout << "\nuzunluk(metre) giriniz: ";  
   cin >> d1.metre;
   cout << "uzunluk(cmetre) giriniz:: ";  
   cin >> d1.cmetre;
   
  // olcuGoster(d1);  
   
   cout << "\nuzunluk(metre) giriniz: ";  
   cin >> d2.metre;
   cout << "uzunluk(cmetre) giriniz:: ";  
   cin >> d2.cmetre;

   olcuGoster(d1);      
   olcuGoster(d2);                      

                               //display all lengths
   //cout << d1.metre << "m," << d1.cmetre << "cm + ";
   //cout << d2.metre << "m," << d2.cmetre << "cm = ";
   //cout << d3.metre << "m," << d3.cmetre << "cm\n";
   system("pause");
   return 0;
   }

void olcuGoster(Olcu a)    //parameter dd of type Distance
   {
   cout << a.metre << "m, " << a.cmetre << "cm \n";
   }

*/ /*
// Struct parametre gÃÂÃÂ¶nderimi
#include <iostream>
using namespace std;
//struct Olcu                
   {
   int metre;
   int cmetre;
   };
//void olcuGoster(Olcu); 
Olcu olcuTopla( Olcu dd1, Olcu dd2 );


int main()
   {
   Olcu d1,d2,d3;            
  

                               
   cout << "\nuzunluk(metre) giriniz: ";  
   cin >> d1.metre;
   cout << "uzunluk(cmetre) giriniz:: ";  
   cin >> d1.cmetre;
   
   cout << "\nuzunluk(metre) giriniz: ";  
   cin >> d2.metre;
   cout << "uzunluk(cmetre) giriniz:: ";  
   cin >> d2.cmetre;

   olcuGoster(d1);  
   olcuGoster(d2); 
   d3=olcuTopla(d1,d2);
   olcuGoster(d3);                          

   system("pause");
   return 0;
   }



Olcu olcuTopla( Olcu dd1, Olcu dd2 )
   {
   Olcu dd3;                

   dd3.cmetre = dd1.cmetre + dd2.cmetre;  
   dd3.metre = 0;                       
   
  // for( ;dd3.cmetre >= 100; ) 
   if(dd3.cmetre >= 100)              
      {                                
      dd3.cmetre -= 100;              
      dd3.metre++;                      
      }                                
   dd3.metre += dd1.metre + dd2.metre;    
   return dd3;                         
   }




void olcuGoster(Olcu a)    //parameter dd of type Distance
   {
   cout << a.metre << "m," << a.cmetre << "cm \n";
   }

*/ /*
#include <iostream>
using namespace std;
// inc2cm     
inline float inch2cm(float a)  
{                               
   return 2.54*a; 
}
//--------------------------------------------------------------
int main()                          
{                               
   float uzunluk;

   cout << "\nUzunluk (inch) olarak:  ";
   cin >> uzunluk;
   cout << "Girdiginiz deger cm olarak : " 
        << inch2cm(uzunluk)
        << endl;
   system("pause");
   return 0;
}


*/