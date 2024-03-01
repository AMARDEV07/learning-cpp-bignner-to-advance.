#include <iostream>
using namespace std;

class shope
{
    int items[100];
    int prize[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }

    void setprize();
    void displayprize();
};

void shope ::setprize()
{
    cout << "enter the itrms it" <<counter+1 << endl;
    cin >> items[counter];
    cout << "enter the prize it" << endl;
    cin >> prize[counter];
    counter++;
}

void shope::displayprize()
{
    for (int i = 0; i < counter; i++)
    {
        cout << items[i] << prize[i];
    }
}

int main()
{

    shope dukan;
    dukan.initcounter();
    dukan.setprize();
    dukan.setprize();
    dukan.setprize();
    dukan.displayprize();

    return 0;
}