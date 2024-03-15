/**
 * C++ equivalent of simple_c_based_example.c
*/
#include <iostream>
#include <cstdlib>

class Person {
    private:
        int age;
        float social_score;
        std::string name;

    public:
        // Initialization list syntax -- simile a initStruct()
        Person(int a, float s_score, std::string n) : age(a), social_score(s_score), name(n) {}

        /**
         * Una sintassi alternativa e' quella di dichiararli esplicitamente
         * Person(int a, float s_score, std::string n) {
         *      this->age = a;
         *      this->social_score = s_score;
         *      this->name = n;
         * }
        */

       // Equivalente a printStruct()
       void showPerson() {
            std::cout << "------ Person Details ------" << std::endl;
            std::cout << "Age:\t" << this->age << std::endl;
            std::cout << "Social Score:\t" << this->social_score << std::endl;
            std::cout << "Name:\t" << this->name << std::endl;
       }

       
};

int main(int argc, char** argv)
{

    std::cout << "C++ Basic OOP Example" << std::endl;

    // Instanziazione di un oggetto mediante variabile normale
    Person p = Person(22, 3.14, "Picasso");

    // Instanziatione di un oggetto mediante variabile puntatore
    Person *p2 = new Person(45, 0.8, "O.J. Simpson");


    // Mostra i valori degli oggetti
    p.showPerson();

    // Da notare la differenza nelle invocazioni
    p2->showPerson();


    return EXIT_SUCCESS;
}