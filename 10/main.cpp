#include <iostream>
using namespace std;
char harf;
int sayi;
//WHILE IKINCI CALISMA....
int main()
{
    cout << "NOKTAYLA BITEN IKI TANE CUMLE GIRINIZ" << endl;
    cout << "*****CUMLELERIN SONUNDA KESINLIKLE NOKTA BULUNMALI AKSI TAKTIRDE ISLEM SONSUZ DONGUYE GIRER VE CALISTIRMAK ISTEDIGINIZ KOD CALISMAZ****" << endl;
    cout << "NOKTAYLA BITEN IKI TANE CUMLE GIRINIZ" << endl;
    for(int i=1; i<=2; i++)
    {
        sayi=0;
        cin>>harf;
        while((harf!='.'))
        {
            if((harf=='A')||(harf=='a'))
            {
               sayi++;

            }
        cin>>harf;


        }
      cout<<i<<". cumlede "<<sayi<<"tane A harfi vardir.."<<endl;
    }
    return 0;
}
