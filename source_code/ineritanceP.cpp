// ineritanceP.cpp
//

#include <iostream>
#include <vector>

using namespace std;

// define super-classes
//
class SuperClassPri {
private:
    int number;

public:
    SuperClassPri(int a) : number(a) {};
};

class SuperClassPro {
protected:
    int number;
    
public:
    SuperClassPro(int a) : number(a) {};
};

class SuperClassPub {
public:
    int number;

    SuperClassPub(int a) : number(a) {};
};
 
// define sub-classes
//
class SubClassPri : public SuperClassPri {
public:
    SubClassPri(int a) : SuperClassPri(a) {};
    //void show() { cout << number << endl; } // error!!
};

class SubClassPro : public SuperClassPro {
public:
    SubClassPro(int a) : SuperClassPro(a) {};
    void show() { cout << number << endl; }
};

class SubClassPub : public SuperClassPub {
public:
    SubClassPub(int a) : SuperClassPub(a) {};
    void show() { cout << number << endl; }
};
 


int main() {

    SubClassPri object1(1);
    SubClassPro object2(2);
    SubClassPub object3(3);
    
    //object1.show();
    object2.show();
    object3.show();

    return 0;
}
