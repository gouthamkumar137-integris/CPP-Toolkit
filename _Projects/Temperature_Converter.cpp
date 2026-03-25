#include<iostream>

int main_menu(){
    int choice;
    std::cout<<"\n--------UNIT CONVERTER--------\n";
    std::cout<<"\n1. Temperature Converter\n2. Length Converter\n3. Weight Converter\n4. Exit\n";
    std::cout<<"Enter your choice:";
    std::cin>>choice;
    return choice;
}
void temperature(){
    int choice1;
    double current_temp,converted_temp;

    do{
    std::cout<<"\n------Temperature Menu-------\n";
    std::cout<<"1. Celsius->Fahrenheit\n2. Fahrenheit->Celsius\n3. Celsius->kelvin\n4. Kelvin->Celsius\n5. Back\n ";
    std::cout<<"Enter your choice:";
    std::cin>>choice1;
   
    
    switch(choice1){
        
        case 1: 
        std::cout<<"Enter the temperature in Celsius:";
        std::cin>>current_temp;
        converted_temp=(current_temp*9/5)+32;
        std::cout<<"Temperature in Fahrenheit:"<<converted_temp<<" °F\n";
        break;

        case 2:
        std::cout<<"Enter the temperature in Fahrenheit:";
        std::cin>>current_temp;
        converted_temp=(current_temp-32)*5/9;
        std::cout<<"Temperature in Celsius:"<<converted_temp<<" °C\n";
        break;

        case 3:
        std::cout<<"Enter the temperature in Celsius:";
        std::cin>>current_temp;
       converted_temp=current_temp+273.15;
        std::cout<<"Temperature in Kelvin:"<<converted_temp<<" K\n";
        break;

        case 4:
        std::cout<<"Enter the temperature in Kelvin:";
        std::cin>>current_temp;
        converted_temp=current_temp-273.15;
        std::cout<<"Temperature in Celsius:"<<converted_temp<<" °C\n";
        break;

        case 5: std::cout<<"Returning...\n";
        break;

        default:
        std::cout<<"Invalid Choice!!!\n";
    }
    }while(choice1!=5);
    
}
void length(){
    int choice2;
    double current_len,converted_len;

    do{
    std::cout<<"\n-----Lenght Menu-----\n";
    std::cout<<"\n1. Meter->Kilometer\n2. Kilometer->Meter\n3. Meter->Centimeter\n4. Centimeter->Meter\n5. Back\n";
    std::cout<<"Enter Your Choice:";
    std::cin>>choice2;
    
        switch(choice2){
            case 1:
            std::cout<<"Enter the length in meteres:";
            std::cin>>current_len;
            converted_len=current_len/1000;
            std::cout<<"Lenght="<<converted_len<<"km\n";
            break;

            case 2:
            std::cout<<"Enter the length in kilometer:";
            std::cin>>current_len;
            converted_len=current_len*1000;
            std::cout<<"Length="<<converted_len<<"m\n";
            break;

            case 3:
            std::cout<<"Enter the length in meters:";
            std::cin>>current_len;
            converted_len=current_len/100;
            std::cout<<"Lenght="<<converted_len<<"cm\n";
            break;

            case 4:
            std::cout<<"Enter the length in centimeter:";
            std::cin>>current_len;
            converted_len=current_len*100000;
            std::cout<<"Length="<<converted_len<<"m\n";
            break;

            case 5:
            std::cout<<"Returning...\n";
            break;

            default:
            std::cout<<"Invalid Choice!!!\n";
    }
     }while(choice2!=5);
}
void weight(){
    int choice3;
    double current_weigh,converted_weigh;

    do{
    std::cout<<"\n------Weight Menu------\n";
    std::cout<<"\n1. Kilogram -> Gram\n2. Gram -> Kilogram\n3. Kilogram ->Pound\n4. Pound -> Kilogram\n5. Back\n ";
    std::cout<<"Enter Your Choice:";
    std::cin>>choice3;
    
        switch(choice3){
            case 1:
            std::cout<<"Enter the Weight in Kilograms:";
            std::cin>>current_weigh;
            converted_weigh=current_weigh*1000;
            std::cout<<"Weight="<<converted_weigh<<"g\n";
            break;

            case 2:
            std::cout<<"Enter the Weight in grams:";
            std::cin>>current_weigh;
          converted_weigh=current_weigh/1000;
            std::cout<<"Weight="<<converted_weigh<<"kg\n";
            break;

            case 3:
            std::cout<<"Enter the Weight in Kilograms:";
            std::cin>>current_weigh;
            converted_weigh=current_weigh*2.20462;
            std::cout<<"Weight="<<converted_weigh<<"lb\n";
            break;

            case 4:
            std::cout<<"Enter the Weight in Pounds:";
            std::cin>>current_weigh;
            converted_weigh=current_weigh/2.20462;
            std::cout<<"Weight="<<converted_weigh<<"kg\n";
            break;
            
            case 5:
            std::cout<<"Returning...\n";
            break;

            default:
            std::cout<<"Invalid Choice!!!\n";
    
    }
     }while(choice3!=5);
}
int main(){
   int choice;
    do{
     choice= main_menu();
   
    switch(choice){
    case 1: temperature();
    break;

    case 2: length();
    break;

     case 3: weight();
     break;

    case 4:std::cout<<"Exiting...\n Excited To Welcome You Back , Thankyou\n";
    break;
    
    default: 
    std::cout<<"Invalid Choice !!!\n";
    }
    
}while(choice!=4);

return 0;
}
