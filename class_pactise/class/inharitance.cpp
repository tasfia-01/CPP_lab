#include<iostream>
using namespace std;
class Animal{
    protected:
    string animalID;
    string name;
    int age;
    public:
    void setAnimalDetails(string animalID,string name,int age)
    {
        this->animalID=animalID;
        this->name=name;
        this->age=age;
    }
    void displayAnimalDetails();
};

class Dog:public Animal{
    private:
    string breed;
    bool isVaccinated;
    public:
    void setDogDetails(string breed,bool isVaccinated)
    {
        this->breed=breed;
        this->isVaccinated=isVaccinated;
    }
    void displayDogDetails();
};
class Cat:public Animal{
    private:
    string furColor;
    bool isindoor;
    public:
    void setCatDetails(string furColor,bool isindoor)
    {
        this->furColor=furColor;
        this->isindoor=isindoor;
    }
    void displayCatDetails();
};
class ServiceDog:public Dog{
    private:
    string badgeNumber;
    string assignedUnit;
    int yearsOfservice;
    public:
    void setServiceDetails(string badgeNumber,string assignedUnit,int yearsOfservice)
    {
        this->badgeNumber=badgeNumber;
        this->assignedUnit=assignedUnit;
        this->yearsOfservice=yearsOfservice;
    }
    void displayServiceDetails();
    void displayFullprofile();

};

int main()
{
    Animal a;
    a.setAnimalDetails("10001","cow",2);
    
    Dog d;
    d.setAnimalDetails("1002","cow",3);
    d.setDogDetails("abc",1);
    
    Cat c;
    c.setAnimalDetails("1003","cat",4);
    c.setCatDetails("red",1);
    

    ServiceDog s;
    s.setAnimalDetails("10001","cow",2);
    s.setDogDetails("abc",1);
    s.setServiceDetails("2001","xyz",9);

    cout<<"Animal Information"<<endl;
    a.displayAnimalDetails();
    cout<<"Dog Information"<<endl;
    d.displayAnimalDetails();
    d.displayDogDetails();
    cout<<"Cat Information"<<endl;
    c.displayAnimalDetails();
    c.displayCatDetails();
    cout<<"Service Dog information"<<endl;
    s.displayFullprofile();

}
void Animal::displayAnimalDetails()
{
    cout<<"Animal Id:"<<animalID<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;

}
void Dog::displayDogDetails()
{
    cout<<"Breed:"<<breed<<endl;
    cout<<"vaccinated:"<<isVaccinated<<endl;
}
void Cat::displayCatDetails()
{
    cout<<"fur color:"<<furColor<<endl;
    cout<<"Indor:"<<isindoor<<endl;
}
void ServiceDog::displayServiceDetails()
{
    cout<<"Badge Number:"<<badgeNumber<<endl;
    cout<<"Assigned details:"<<assignedUnit<<endl;
    cout<<"Year of service:"<<yearsOfservice<<endl;
}
void ServiceDog::displayFullprofile()
{
    displayAnimalDetails();
    displayDogDetails();
    displayServiceDetails();
}
   









