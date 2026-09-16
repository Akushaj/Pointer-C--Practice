#include <iostream>

class Box {
public:
    Box(int value): data(new int(value)) {}
    Box() {
        delete data ;
        data = nullptr;
    }
    int value() {
        return *data;
    }
private :
    int *data;

};
int main() {

    /*int x =5;
    int *p = &x; // pointer p- stays in stack memory and &x is the memory address of x not the value of x.
    std::cout << x << std::endl;
    std::cout << *p << std::endl; // *p means (dereferencing) - the pointer and strips away the address memory of the pointer so it goes inside the memeory address and gets the value inside the address
    std::cout << p << std::endl; // (referencing) - the address itself
    *p = 10; // dereferencing going into the value and changing the value
    std::cout << *p << std::endl;
    std::cout << &x << std::endl;*/

    /*
    int* p = new int(5); // it can only store the address of the memory where it can store a int // it doesn't give a name for the address in which the value is assinged // first (5) is the value //
    std::cout << *p << std::endl; // memory made using the new key word always stays
    std::cout << p << std::endl;
    delete p; // calls destructor in classes and it frees up the memories
    p = nullptr; // explicitly disconnects a pointer variable p from any memory address, making it point to nothing*/

    Box *box1 = new Box(6);
    std::cout << box1->value() << std::endl; // -> for pointers or heap cause calling a pointer method use arrows
    // . means belong to while arrow means it doen't belong to me but exist in the memory
    delete box1; // Everything created by box1 gets deleted
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}