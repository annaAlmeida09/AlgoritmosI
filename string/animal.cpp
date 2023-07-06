#include <iostream>
#include <string>

using namespace std;

void AnimalOrganizer(string TypeBone, string TypePhylum, string TypeAnimal)
{
    if (TypeBone == "vertebrado" && TypePhylum == "ave" && TypeAnimal == "carnivoro")
    {
        cout << "aguia" << endl;
    }

    else if (TypeBone == "vertebrado" && TypePhylum == "ave" && TypeAnimal == "onivoro")
    {
        cout << "pomba" << endl;
    }

    else if (TypeBone == "vertebrado" && TypePhylum == "mamifero" && TypeAnimal == "onivoro")
    {
        cout << "homem" << endl;
    }

    else if (TypeBone == "vertebrado" && TypePhylum == "mamifero" && TypeAnimal == "herbivoro")
    {
        cout << "vaca" << endl;
    }

    else if (TypeBone == "invertebrado" && TypePhylum == "inseto" && TypeAnimal == "hematofago")
    {
        cout << "pulga" << endl;
    }

    else if (TypeBone == "invertebrado" && TypePhylum == "inseto" && TypeAnimal == "herbivoro")
    {
        cout << "lagarta" << endl;
    }

    else if (TypeBone == "invertebrado" && TypePhylum == "anelideo" && TypeAnimal == "hematofago")
    {
        cout << "sanguessuga" << endl;
    }

    else if (TypeBone == "invertebrado" && TypePhylum == "anelideo" && TypeAnimal == "onivoro")
    {
        cout << "minhoca" << endl;
    }

    else
    {
        cout << "errado" << endl;
    }
}

int main()
{
    string TypeBone;
    string TypePhylum;
    string TypeAnimal;

    getline(cin, TypeBone);
    getline(cin, TypePhylum);
    getline(cin, TypeAnimal);

    AnimalOrganizer(TypeBone, TypePhylum, TypeAnimal);

    return 0;
}