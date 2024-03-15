/**
 * Utilizzo di variabile statica
*/
#include <iostream>
#include <cstdlib>

class A {
    private:

        static int contatore;
        int i_val;
        float f_val;

    public:

        // Costruttore per il valore intero
        A(int a) : i_val(a) {}

        // Costruttore per il valore float
        A(float b) : f_val(b) {}


        // incrementa la variabile statica
        static void incrementCounter() {
            contatore++;
        }

        // decrementa la variabile statica
        static void decrementCounter() {
            contatore--;
        }

        // Ottieni la variabile statica
        static int getCounter() {
            return contatore;
        }

};

// Init la variabile statica
int A::contatore = 12345;


int main(int argc, char** argv) 
{

    std::cout << "Static variable demo" << std::endl;
    std::cout << "Current val of static variable:\t" << A::getCounter() << std::endl;
    A::incrementCounter();
    std::cout << "Current val of static variable:\t" << A::getCounter() << std::endl;
    A::incrementCounter();
    std::cout << "Current val of static variable:\t" << A::getCounter() << std::endl;
    A::decrementCounter();
    std::cout << "Current val of static variable:\t" << A::getCounter() << std::endl;
    A::decrementCounter();
    A::decrementCounter();
    A::decrementCounter();
    A::decrementCounter();
    std::cout << "Current val of static variable:\t" << A::getCounter() << std::endl;

    return EXIT_SUCCESS;
}