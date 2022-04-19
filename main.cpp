#include <iostream>

using namespace std;

class Insan{
    public:
    string isim;
    int yas;

    void isimVeYasSoyle(){
        cout<<isim<<" "<<yas<<endl;
    }

};

int main()
{
    Insan insan1,insan2;
    insan1.isim = "Murat";
    insan1.yas = 26;
    insan2.isim = "Ulas";
    insan2.yas = 27;

    insan1.isimVeYasSoyle();
    insan2.isimVeYasSoyle();
    return 0;
}
