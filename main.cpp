#include <iostream>
using namespace std;
// Example on single inheritance
// for lesson https://www.youtube.com/watch?v=1nhIK34BEyY
// for more lessons visit https://s4ifbn.com
// By Saif Bashar 2017

class person
{

protected:

    string name;
    int age;

public:

    void set_values(string s, int a)
    {
        name=s;
        age=a;
    }

    void print()
    {
        cout<<name<<" "<<age<<endl;
    }
};

class student : public person
{

private:

    int level;

public:
    void set_level(int L)
    {
        level = L;
    }

    void print_level()
    {
        cout<<level;
    }
};

int main()
{

    person p1;

    p1.set_values("ahmed", 40);
    p1.print();

    student s1;
    s1.set_values("ali", 20);
    s1.set_level(4);
    s1.print();
    s1.print_level();

    return 0;
}
