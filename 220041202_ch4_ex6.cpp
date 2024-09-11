#include<iostream>
 using namespace std;
  int main()
{
    enum etype{
        labourer,
        secretary ,
        manager,
        accountant ,
        executive ,
        researcher
    };

    etype emp1 ;
    char type;
    cout << "Enter employee type:";
    cin >> type;
    switch(type)
    {
        case 'l' :
        emp1 = labourer;
        break;
        case 's' :
        emp1 = secretary;
        break;
        case 'm' :
        emp1 = manager;
        break;
        case 'a' :
        emp1 = accountant;
        break;
        case 'e' :
        emp1 = executive;
        break;
        case 'r' :
        emp1 = researcher;
        break;
        default:
        break;

    }

    switch(emp1)
    {
        case labourer :
        cout << "Employee type is laborer";
        break;
        case secretary :
        cout << "Employee type is secretary";
        break;
        case manager :
        cout << "Employee type is manager";
        break;
        case accountant :
        cout << "Employee type is accountant";
        break;
        case executive :
        cout << "Employee type is executive";
        break;
        case researcher :
        cout << "Employee type is researcher";
        break;
        default:
        break;
    }
    return 0 ;
}
