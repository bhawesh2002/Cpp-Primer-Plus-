/*When you join the Benevolent Order of Programmers, you can be known at BOP
meetings by your real name, your job title, or your secret BOP name.Write a program
that can list members by real name, by job title, by secret name, or by a member’s
preference. Base the program on the following structure:
// Benevolent Order of Programmers name structure
struct bop {
char fullname[strsize]; // real name
char title[strsize]; // job title
char bopname[strsize]; // secret BOP name
int preference; // 0 = fullname, 1 = title, 2 = bopname
};
In the program, create a small array of such structures and initialize it to suitable
values. Have the program run a loop that lets the user select from different alternatives:
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Note that “display by preference” does not mean display the preference member; it
means display the member corresponding to the preference number. For instance, if
preference is 1, choice d would display the programmer’s job title.A sample run
may look something like the following:
Benevolent Order of Programmers Report
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
Next choice: q
Bye!*/

#include <iostream>
#include <cstring>

using namespace std;

struct bop
{
    char fullname[30]; // real name
    char title[20];    // job title
    char bopname[20];  // secret BOP name
    int preference;    // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
    bop details[5] = {{"Wimp Macho", "Front-end dev", "machoWimp"}, {"Raki Rhodes", "Junior Programmer", "rhodesRaki"}, {"Celia Leiter", "MIPS", "leitherCelia"}, {"Hoppy Hipman", "Analyst Trainee", "hipmanHoppy"}, {"Pat Hand", "LOOPY", "handPat"}};
    char opt;
    cout << "a. display by name"
         << "\tb. display by title"
         << "\tc. display by bopname"
         << "\nd. display by preference"
         << "\tq. quit" << endl;
    cout << "Make  a choice: ";
    cin >> opt;
    while (opt != 'q')
    {
        switch (opt)
        {
        case 'a':
        {
            cout << details[0].fullname << endl;
            cout << details[1].fullname << endl;
            cout << details[2].fullname << endl;
            cout << details[3].fullname << endl;
            cout << details[4].fullname << endl;
        }
        break;

        case 'b':
        {
            cout << details[0].title << endl;
            cout << details[1].title << endl;
            cout << details[2].title << endl;
            cout << details[3].title << endl;
            cout << details[4].title << endl;
        }
        break;

        case 'c':
        {
            cout << details[0].bopname << endl;
            cout << details[1].bopname << endl;
            cout << details[2].bopname << endl;
            cout << details[3].bopname << endl;
            cout << details[4].bopname << endl;
        }
        break;

        case 'd':
        {
            int num;
            cout << "\'0\' for fullname\t\'1\' for title\t\'2\' for bopname" << endl;
            cout << "Enter your  preference: ";
            cin >> num;
            if (num == 0)
            {
                cout << details[0].fullname << endl;
                cout << details[1].fullname << endl;
                cout << details[2].fullname << endl;
                cout << details[3].fullname << endl;
                cout << details[4].fullname << endl;
            }
            else if (num == 1)
            {
                cout << details[0].title << endl;
                cout << details[1].title << endl;
                cout << details[2].title << endl;
                cout << details[3].title << endl;
                cout << details[4].title << endl;
            }
            else if (num == 2)
            {
                cout << details[0].bopname << endl;
                cout << details[1].bopname << endl;
                cout << details[2].bopname << endl;
                cout << details[3].bopname << endl;
                cout << details[4].bopname << endl;
            }
            else
            {
                cerr << "Invalid Inpuut" << endl;
            }
        }
        default:
        {
            cerr << "Enter a valid character" << endl;
        }
        break;
        }
        cout << "a. display by name"
             << "\tb. display by title"
             << "\tc. display by bopname"
             << "\nd. display by preference"
             << "\tq. quit" << endl;
        cout << "Make  a choice: ";
        cin >> opt;
    }
    cout << "terminating" << endl;
    return 0;
}