#include <iostream>
#include "person.h"
#include "baker.h"

using namespace std;

Baker::Baker(string m_name): Person(m_name) {

}

void Baker::sayHello() {
    cout << "Hi I'm " << m_name << endl;
    cout << "I like bread!" << endl;
}
