#include <iostream>
using namespace std;

void capital(char a);
void small(char a);

int main()
{
    char character;
    cout<<" ENTER A OR a: ";
    cin>>character;

    if(character == 'A'){
        capital(character);
    }
    else if( character == 'a'){
        small(character);
    }
    else{
        cout<<"WRONG LETTER";
    }
    return 0;
}

void capital(char a)
{
    cout << "You have entered capital A";
}
void small(char a)
{
    cout << "You have entered small a";
}