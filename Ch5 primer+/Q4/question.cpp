/*Daphne invests $100 at 10% simple interest.That is, every year, the investment earns
10% of the original investment, or $10 each and every year:
interest = 0.10 × original balance
At the same time, Cleo invests $100 at 5% compound interest.That is, interest is 5%
of the current balance, including previous additions of interest:
interest = 0.05 × current balance
Cleo earns 5% of $100 the first year, giving her $105.The next year she earns 5% of
$105, or $5.25, and so on.Write a program that finds how many years it takes for
the value of Cleo’s investment to exceed the value of Daphne’s investment and then
displays the value of both investments at that time.*/

#include <iostream>

using namespace std;

int main(){
    int balance_daphne = 100;
    int balance_cleo = 100;
    double intrest_cleo = 0.05;
    double profit_daphne , profit_cleo;
    double formula_daphne = (0.1 * balance_daphne);
    for (int year = 1; profit_cleo < balance_daphne; year++)
    {
        cout << "After " << year << " year" << endl;
        balance_daphne = balance_daphne + formula_daphne;
        cout << "Daphne : "  << balance_daphne << endl;
        double formula_cleo = (0.05 * balance_cleo);
        profit_cleo = balance_cleo + formula_cleo;
        balance_cleo = profit_cleo;
        cout << "Cleo : " << profit_cleo << endl;

    }
    
    return 0;
}
