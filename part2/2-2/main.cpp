// constructor, destructor examples
#include "person.h"

int main()
{
    // Person p1 = Person("Eric Clapton");
    // Person p1("Eric Clapton");
    // p1.sayHello();


    Person *p1 = new Person("Eric Clapton");
    p1->sayHello();
    delete p1;

    cout << "Good bye " << endl;
    return 0;
}
