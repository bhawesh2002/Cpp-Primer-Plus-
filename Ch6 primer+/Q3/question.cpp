/*Write a precursor to a menu-driven program.The program should display a menu
offering four choices, each labeled with a letter. If the user responds with a letter
other than one of the four valid choices, the program should prompt the user to
enter a valid response until the user complies.Then the program should use a
switch to select a simple action based on the user’s selection.A program run could
look something like this:
Please enter one of the following choices:
c) carnivore p) pianist
t) tree g) game
f
Please enter a c, p, t, or g: q
Please enter a c, p, t, or g: t
A maple is a tree.*/

#include <iostream>

using namespace std;

int main(){ 
    cout << "Please enter one of the following choices :" << "\nc) carnivore      p)painist      q)quit" 
    << "\nt) tree      g)game" << endl;
    char choice;
    cin >> choice;
    while (choice != 'q')
    {
        switch (choice)
        {
        case 'c' : cout << "Tiger is a carnivore" << endl;
            break;        
        case 'p' : cout << "Tom play's paino" << endl;
            break;
        case 't' : cout << "A maple is a tree" << endl;
            break;
        case 'g' : cout << "Football is a game" << endl;
            break;        
        default : cout << "This is not a choice" << "\nplease enter c , p , t , g or q" ;                                     
            break;
        }
        cout << "Please enter one of the following choices :" << "\nc) carnivore      p)painist      q)quit" 
        << "\nt) tree      g)game" << endl;
        cin >> choice;
    }
    cout << "You Entered \'q\'. The program will now terminate";
    return 0;   
}
