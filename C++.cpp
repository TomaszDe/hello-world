#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{

    int i;
    for(i=0;i<10;i++)
    {
        cout<<"tekst: "<<i<<endl;
        i=11; 
        continue;
        cout<<"kontrola: "<<i<<endl;
    }

    system("pause");
    return 0;
}
