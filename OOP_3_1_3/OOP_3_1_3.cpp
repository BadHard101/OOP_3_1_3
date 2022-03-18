#include <iostream>
#include <vector>
#include <iomanip>
#include "Stek.h"
using namespace std;

int main()
{
    string name1;
    string name2;
    int n1;
    int n2;
    int elem;
    bool flag1 = true;
    bool flag2 = true;

    cin >> name1 >> n1;
    cin >> name2 >> n2;

    Stek stek1(name1, n1);
    Stek stek2(name2, n2);
    
    while (not(flag1==false and flag2==false))
    {
        cin >> elem;

        //choose

        /*if (flag1 != false)
            flag1 = stek1.add_elem(elem);
        if (flag2 != false)
            flag2 = stek2.add_elem(elem);*/

        if (stek1.get_size() < stek2.get_size())
        {
            flag1 = stek1.add_elem(elem);
            if (flag1 == false)
                break;
            flag2 = stek2.add_elem(elem);
            if (flag2 == false)
                break;
        }
        else {
            flag2 = stek2.add_elem(elem);
            if (flag2 == false)
                break;
            flag1 = stek1.add_elem(elem);
            if (flag1 == false)
                break;
        }

        
    }

    cout << stek1.get_name() << " " << stek1.get_size() << endl;
    cout << stek2.get_name() << " " << stek2.get_size() << endl;

    cout << setw(15) << left << stek1.get_name();
    //cout << stek1.get_elem() << "   " << stek1.get_n_elem();
    cout << setw(15) << left << stek2.get_name() << endl;
    //cout << stek2.get_elem() << "   " << stek2.get_n_elem();

    do {
        cout << setw(15) << right;
        if (stek1.get_n_elem() != 0) {
            cout << stek1.get_elem();
            stek1.del_elem();
        }
        else
            cout << " ";

        cout << setw(15) << right;
        if (stek2.get_n_elem() != 0) {
            cout << stek2.get_elem();
            stek2.del_elem();
        }
        else
            cout << " ";

        if (stek1.get_n_elem() == 0 and stek2.get_n_elem() == 0)
            return 0;
        else
            cout << endl;
    } while (not(stek1.get_n_elem() == 0 and stek2.get_n_elem() == 0));
}