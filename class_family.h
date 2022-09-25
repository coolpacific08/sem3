#include <string>
using namespace std;

// Making class that contains name and age of family members and pointer for next and previous member.
class Family
{
    public :
    Family *prev;
    string name; // name of member
    int age;
    Family *next;

    Family(string name, int age)
    {
        this->name = name;
        this->age = age;
        this->prev = NULL;
        this->next = NULL;
    }

};