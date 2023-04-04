#include <iostream>

using namespace std;

int N;


struct Person
{
    char name[50];
    int age;
    Person* parent;
};


int Sum(int a, int b)
{
    N = 100;
    return a + b;
}

int Mult(int a, int b)
{
    N = 200;
    return a * b;
}

int Calc(int a, int b, int (*oper)(int, int))
{
    return oper(a, b);
}

int Counter()
{
    static int count = 0;
    return ++count;
}


int main()
{
    int (*fptr)(int, int);
    
    fptr = Sum;
    cout << fptr(10, 20) << "\n";

    fptr = Mult;
    cout << fptr(10, 20) << "\n";

    cout << Calc(10, 20, Sum) << "\n";
    cout << Calc(10, 20, Mult) << "\n";


    int* ptr = new int;
    *ptr = 30;


    Person personStack;
    personStack.age = 30;



    Person* person = new Person;
    person->age = 30;

    delete person;


    for (int i = 0; i < 5; i++)
    {
        cout << Counter() << "\n";
    }

}
