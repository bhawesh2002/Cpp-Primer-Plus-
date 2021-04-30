/*Write a program that asks the user to enter up to 10 golf scores, which are to be
stored in an array.You should provide a means for the user to terminate input prior
to entering 10 scores.The program should display all the scores on one line and
report the average score. Handle input, display, and the average calculation with
three separate array-processing functions.*/

#include <iostream>

const int count = 10;

void input (int score[]);
void display (int score[]);
void average (int score[]);

using namespace std;

int main(){
    int golf_score[count];
    input(golf_score);
    display(golf_score);
    average(golf_score);
    return 0;
}

void input (int score[count]){
    int i = 0;
    cout << "Enter 10 golf scores" << endl;
    while (i < count)
    {
        cout << "Score " << i + 1 << ": ";
        cin >> score[i];
        if (score[i] != 'q')
        {
            i++;
        }else{
            break;
        }                                
    }    
}

void display(int score[count]){
    for (int i = 0; i < count; i++)
    {
        cout << score[i] << ", " << endl;
    }    
}

void average(int score[count]){
    int i = 0;
    int sum = 0;
    while (i < count)
    {
        int sum = sum + score[i];
    }
    int average = sum/i;
    cout << "The average of golf score's is " << average << endl;
}