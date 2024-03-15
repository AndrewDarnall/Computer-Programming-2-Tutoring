/**
 * Template Linked List Data Structure
 * 
*/
#include <iostream>
#include <cstdlib>


template <typename T>
class Node {

    public:

        T key;
        Node<T>* nextNode;
        Node<T>(T k, Node<T>* nNode) : key(k), nextNode(nNode) {}

};

template <typename T>
class LinkedList {

    private:

        Node<T>* head;


    public:

        LinkedList<T>() : head(nullptr) {}

        void insert(T k) {
            Node<T>* newNode = new Node<T>(k, head);
            this->head = newNode;
        }

        void printList() {
            Node<T>* iter = this->head;
            while(iter != nullptr) {
                std::cout << iter->key << " --> ";
                iter = iter->nextNode;
            }
            std::cout << " NIL " << std::endl;

        }

};

int main(int argc, char** argv)
{

    std::cout << "C++ Template Example of Linked List" << std::endl;

    // Declare the object var
    LinkedList<int>* i_list = new LinkedList<int>();
    

    // Add a node to the list
    i_list->insert(25);
    i_list->insert(35);
    i_list->insert(45);
    i_list->insert(55);
    i_list->insert(65);

    // Print the list
    i_list->printList();


    // E se volessi ri-usare la struttura per stringhe?
    LinkedList<std::string>* s_list = new LinkedList<std::string>();

    s_list->insert("Ciao");
    s_list->insert("Machine Learning");
    s_list->insert("CyberSecurity");
    s_list->insert("Software Engineering");
    s_list->insert("Robotics");

    s_list->printList();

    return EXIT_SUCCESS;
}