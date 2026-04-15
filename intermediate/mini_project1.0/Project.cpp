#include<iostream>
int main(){
    int n;
    std::string name[100]; 
    int marks[100];

    std::cout<<"Enter the number of students:";
    std::cin>>n;

    //input
    for(int i=0;i<n;i++){
        std::cout<<"Enter student "<<i+1<<" name:";
        std::cin>>name[i];
        std::cout<<"Enter student "<<i+1<<" marks:";
        std::cin>>marks[i];
    }

    //diplay
    for(int i=0;i<n;i++){
        std::cout<<"student " <<i+1 <<" name is:";
        std::cout<<name[i]<<"\n";
        std::cout<<"student " <<i+1 <<" marks is:";
        std::cout<<marks[i]<<"\n";
    }

    //highest marks
    int max=marks[0];
    std::string Topper;
    for(int i=1;i<n;i++){
        if(marks[i]>max){
            max=marks[i];
           
        }
    }
    std::cout<<"The highest marks is :"<<max<<"\n";
    
    
    //number of passed students
    int count=0;
    for(int i=0;i<n;i++){
        if(marks[i]>=40){
            count++;
        }
    }
    std::cout<<"The number of passed students is:"<<count<<"\n";

    return 0;
}

