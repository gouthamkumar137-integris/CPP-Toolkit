#include<iostream>
#include<string>
#include<vector>
class Question{
    public:
    std::string question_text,option_A,option_B,option_C,option_D;
    char correct_answer;
};
void loadQuiz(std::vector<Question>&questions){
    Question q1;
    q1.question_text="Which language is used for system programming?";
    q1.option_A="A. C++";
    q1.option_B="B. Python";
    q1.option_C="C. C";
    q1.option_D="D. Javascript";
    q1.correct_answer='C';
    questions.push_back(q1);

    Question q2;
    q2.question_text="When did Artificial Intelligence take official birth?";
    q2.option_A="A. 1997";
    q2.option_B="B. 1985";
    q2.option_C="C. 2011";
    q2.option_D="D. 2019";
    q2.correct_answer='B';
    questions.push_back(q2);
}
void startQuiz(std::vector<Question>&questions){
    int score=0;
    char user_answer;
    for(int i=0;i<questions.size();i++){
        std::cout<<"Question:"<<i+1<<"\t"<<questions[i].question_text<<"\n";
        std::cout<<questions[i].option_A<<"\n";
        std::cout<<questions[i].option_B<<"\n";
        std::cout<<questions[i].option_C<<"\n";
        std::cout<<questions[i].option_D<<"\n";
        std::cout<<"Enter Your Answer(A/B/C/D):";
        std::cin>>user_answer;
        if(toupper(user_answer)==questions[i].correct_answer){
            score++;
            std::cout<<"Welll Done !!!\n";
        }
        else{
            std::cout<<"Wrong Answer ";
        }
    }
    std::cout<<"Quiz Finished \n";
    std::cout<<"Total Score="<<score<<"/"<<questions.size();
}
int main(){
    std::vector<Question>questions;
    loadQuiz(questions);
    startQuiz(questions);
    return 0;
}