#include <iostream>

using namespace std;

class account{
private:
    int bakiye;

public:

    account(int balance){
        if(bakiye>0){
            bakiye = 0;
        }
        if(bakiye == 0){
            bakiye = 0;
            cerr<<"İlk hesap bakiyesi"<<" "<<bakiye<<" 'dır";
        }
    }
    void Credit(int maas){
        bakiye = bakiye + maas;
    }
    void Debit(int harcama){
        if(harcama>bakiye){
            harcama = 0;
            cerr<<"Hesabınızda yeterli"<<" "<<"bakiye yoktur"<<endl;
        }
        if(harcama<=bakiye){
            bakiye = bakiye-harcama;
        }
    }
    int getsBakiye(){
        return bakiye;
    }
    void displayMessage(){
        cout<<"Güncel Bakiye:"<<getsBakiye()<<endl;
    }
};
int main()
{
    int bitti;
    cout<<"Bakiye giriniz:";        cin>>bitti;

    account durum1(13123);

    account durum2(90103129);
}
