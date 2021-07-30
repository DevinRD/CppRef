#include <iostream>

class LinkedNode
{
private:
    int value;
    LinkedNode* next;

public:
    LinkedNode(int value)
    {
        this->value = value;
        next = NULL;
    }

    void add(int num)
    {
        LinkedNode* current = this;

        while(current->next)
            current = current->next;

        current->next = new LinkedNode(num);
    }

    int get(int index)
    {
        LinkedNode* current = this;

        for (int i = 0; i < index; i++)
            current = current->next;

        return current->value;
    }

    void print()
    {
        LinkedNode* current = this;

        std::cout << "[";

        while (current->next)
        {
            std::cout << current->value << ", ";
            current = current->next;
        }

        std::cout << current->value << "]" << std::endl;
    }
};

int main()
{
    LinkedNode list(5);
    list.add(6);
    list.print();
}