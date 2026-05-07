#include<iostream>
using namespace std;

class Payment{
    public:
    virtual void processPayment(double amount)=0;
    virtual ~Payment(){}
};

class CreditCard:public Payment{
    public:
    void processPayment(double amount)override{
        cout<<"proccesing credit card payment of $"<<amount<<endl;

    }
};
class Cash:public Payment{
    public:
    void processPayment(double amount)override{
        cout<<"proccesing cash payment of $"<<amount<<endl;

    }
};
class MobileBanking:public Payment{
    public:
    void processPayment(double amount)override{
        cout<<"proccesing mobile banking payment of $"<<amount<<endl;

    }
    
};
int main()
{
    Payment* p;

    CreditCard cc;
    MobileBanking mb;
    Cash cash;

    p=&cc;
    p->processPayment(500.00);
    p=&mb;
    p->processPayment(200.00);
    p=&cash;
    p->processPayment(150.00);

    return 0;

}