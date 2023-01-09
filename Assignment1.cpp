// Define a class Animal with their basic features as class members.Create two derived classes from Animal named herbivores and Carnivores(type) with their own features too.Accept name of animal with type and display all the related information.

#include <iostream>
using namespace std;
class Animal
{
public:
     char name[30], type[30];

public:
     void Herbivores(char name[]);
     void Carnivores(char name[]);
};

void Animal::Herbivores(char name[])
{
     cout << "\n"
          << name << " carry on with a daily existence in the light of plants in particular. ";
     cout << "\n"
          << name << " are the animals that are the primary consumers on the earth. ";
     cout << "\n"
          << name << " have a mutualistic gut for digestion on a plant basis.";
}
void Animal::Carnivores(char name[])
{
     cout << "\n"
          << name << " have sharp and pointed front teeth (canines). They also have sharp claws and powerful jaws which help them to tear flesh. ";
     cout << "\n"
          << name << " are very fast animals since they often have to chase and kill their prey.  ";
     cout << "\n"
          << name << " Their possess acidic saliva that helps them digest food easily. ";
}

int main()
{
     Animal a1;
     char choice;
     cout << "\n Enter Animal Name : ";
     cin >> a1.name;
     cout << "\n Enter Animal Type : \n [H] for Herbivores \n [C] for Carnivores \n";
     cin >> choice;
     if (choice == 'H')
     {
          a1.Herbivores(a1.name);
     }
     else if (choice == 'C')
     {
          a1.Carnivores(a1.name);
     }
     else
     {
          cout << " Invalid ";
     }
}