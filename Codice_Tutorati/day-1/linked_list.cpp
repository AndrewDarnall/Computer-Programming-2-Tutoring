// Lista singolarmente concatenata (singly linked list)
#include <iostream>
#include <cstdlib>

class Node {
    public:
        int key;
        Node* nextNode;
        Node(int k, Node *n) : key(k), nextNode(n) {}
};
/**
 * Node(int k, Node *n) : key(k), nextNode(n) {}
 * 
 * e' la forma piu' concisa di
 * 
 * Node(int k, Node *n) {
 *  
 *  key = k;
 *  netNode = n;
 * 
 * }
 * 
 * La forma concisa si chiama 'member initializer list'
*/

class LinkedList {
    private:
        Node *head;

    public:

        LinkedList() : head(nullptr) {}

        /**
         * Il metodo prende una chiave da aggiungere, crea un nuovo nodo, lo aggiunge alla lista
         * e aggiorna la 'HEAD' della list
        */
        void addNode(int key) {
            Node *newNode = new Node(key, head);
            this->head = newNode;
        }

        // Cerca l'indirizzo del nodo che contiene una specifica chiave
        Node* searchNode(int k) {
            Node *iter = this->head;
            while(iter != nullptr) {
                if (iter->key == k) return iter;
                iter = iter->nextNode;
            }
            std::cout << "The node is not in the list." << std::endl;
            return nullptr;
        }

        // Stampa a STDOUT il contenuto della lista concatenata
        void printList() {
            Node* iter = this->head;
            while(iter != nullptr) {
                std::cout << iter->key << " --> ";
                iter = iter->nextNode;
            }
            std::cout << " NIL " << std::endl;
        }

        // Il distruttore che si occupa di de-allocare la memoria, in C++ va fatto manualmente
        // in Java e' automatico grazie al garbage collector
        ~LinkedList() {
            Node* iter = this->head;
            while(iter != nullptr) {
                Node* tmp = iter;
                iter = iter->nextNode;
                delete tmp;
            }
            delete iter;
        }
};


int main(int argc, char** argv)
{

    std::cout << "Linked List C++ Demo" << std::endl;

    // Cero/istanzio un oggetto
    LinkedList* list = new LinkedList();

    for (int i = 0; i < 10; i++) {
        list->addNode(i+1);
    }

    std::cout << "Indirizzo di nodo con chiave - 6:\t" << list->searchNode(6) << std::endl;
    std::cout << "Indirizzo di nodo con chiave - 11:\t" << list->searchNode(11) << std::endl;
    

    std::cout << "Contenuto della lista: " << std::endl;
    list->printList();


    return EXIT_SUCCESS;
}