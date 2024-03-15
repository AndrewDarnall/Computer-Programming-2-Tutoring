#include <iostream>
#include <cstdlib>


class Lista {
    private:

        static int counter;

        int var;
        float v2;

    public:

        Lista(int val) {
            this->var = val;
        }

        Lista(float f) {
            this->v2 = f;
        }
        
        // Command
        void setVar(int v) {
            this->var = v;
        }

        // Query
        int getVar() {
            return this->var;
        }

        float getVal() {
            return this->v2;
        }

        static int getCounter() {
            return counter;
        }

        static void increaseCounter() {
            counter++;
        }

        static void decrementCounter() {
            counter--;
        }
};

int Lista::counter = 1234;

template <typename T>
T somma(T a, T b) {
    return a + b;
}

int main(int argc, char** argv)
{

    std::cout << "Demo" << std::endl;

    Lista *lista = new Lista(3.14f);
    Lista *l2 = new Lista(15);
    std::cout << lista->getVal() << std::endl;
    std::cout << lista->getVar() << std::endl;

    float a = 3.1234;
    float b = 4.5676;

    std::cout << somma(a, b) << std::endl;

    Lista l3 = Lista(15);
    std::cout << l3.getVar() << std::endl;
    l3.setVar(35);
    std::cout << l3.getVar() << std::endl;


    // Static portion
    std::cout << "Value of the Static Counter:\t" << Lista::getCounter() << std::endl;
    Lista::increaseCounter();
    std::cout << "Value of the Static Counter:\t" << Lista::getCounter() << std::endl;
    


    return EXIT_SUCCESS;
}