#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Question{
    string text;
    int correctAnswer;
};

bool sumTwoDigits(){

    int answer = 20;

    int a = 0;
    int b = 0;

    cout << "Enter First digit:";
    cin >> a;
    cout << "Enter Second digit:";
    cin >> b;

    if(answer == (a+b)){
        return true;
    }else{
        return false;
    }
}

int main() {

    vector<Question> questions;

    Question q1;

    q1.text = "What is biggest even number from given sequence: 8, 25, 45, 32, 7?";
    q1.correctAnswer = 32;

    Question q2;
    Question q3;


    questions.push_back(q1);



    int score = 0;

    int input = 1;

    while(input != 0){
        cout << "Math Exam!"<<endl;
        cout << "Your score: " << score<<endl;
        cout << "=================================="<<endl;
        cout << "1. Calc sum of 2 digits!"<<endl;
        cout << "2. Random question!"<<endl;
        cout << "0. Close program."<<endl;
        cout << "=================================="<<endl;
        cout << "Enter your topic number: ";
        cin >> input;

        switch (input) {
            case 0:
                break;
            case 1:{
                bool temp = sumTwoDigits();
                if(temp)
                    score++;
                else
                    score--;
                break;
            }
            case 2:{
                int ans = 0;
                cout << q1.text << endl;
                cin >> ans;
                if(ans == q1.correctAnswer){
                    score++;
                }else{
                    score--;
                }
            }
                break;
            default:
                cout << "Pick a different number 1,2 or 0 to close app!"<<endl;
                break;
        }

    }










    return 0;
}
