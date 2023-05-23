#include <iostream>

int main(){
    int temparr[4][7][2];
    std::cout << "Podaj zmierzone temperatury\n";
    for(int i=0; i<sizeof(temparr)/sizeof(temparr[0]); i++){
        for(int j=0; j<sizeof(temparr[0])/sizeof(temparr[0][0]); j++){
            for(int k=0; k<sizeof(temparr[0][0])/sizeof(int);k++){
                std::cin >> temparr[i][j][k];
            }
            
        }
    }
    int srednia;
    std::cout <<"ktora srednia?\n1-calych pomiwarów\n2-tygodniowa\n3-dzienna";
    std::cin >> srednia;
    double mean=0;
    int temp=0;
    switch(srednia){
        case 1:{
            for(int i=0; i<sizeof(temparr)/sizeof(temparr[0]); i++){
                for(int j=0; j<sizeof(temparr[0])/sizeof(temparr[0][0]); j++){
                    for(int k=0; k<sizeof(temparr[0][0])/sizeof(int);k++){
                        temp+=1;
                        mean+=temparr[i][j][k];
                    }
                    
                }
            }
            mean/=temp;
            std::cout << "Srednia z calych pomiarow wynosi: " << mean <<" stopni\n";
            break;
        }
        case 2:{
            double weekdays[sizeof(temparr)/sizeof(temparr[0])];
            for(int i=0; i<sizeof(temparr)/sizeof(temparr[0]); i++){
                for(int j=0; j<sizeof(temparr[0])/sizeof(temparr[0][0]); j++){
                    for(int k=0; k<sizeof(temparr[0][0])/sizeof(int);k++){
                        temp+=1;
                        mean+=temparr[i][j][k];
                    }
                    
                }
            weekdays[i] = mean/=temp;
            temp = 0;
            mean = 0;
            std::cout <<"W tygodniu nr " << i+1 << " srednia temperatura wyniosla: " << weekdays[i] << std::endl;
            }
            break;
        }
        case 3:{
            double days[sizeof(temparr)/sizeof(int)];
            int m =0;
            for(int i=0; i<sizeof(temparr)/sizeof(temparr[0]); i++){
                for(int j=0; j<sizeof(temparr[0])/sizeof(temparr[0][0]); j++){
                    for(int k=0; k<sizeof(temparr[0][0])/sizeof(int);k++){
                        temp+=1;
                        mean+=temparr[i][j][k];
                    }
                    days[m] = mean/=temp;
                    temp = 0;
                    mean = 0;
                    std::cout <<"W dniu nr " << j+1 << " w tygodniu nr " << i+1 << " srednia temperatura wyniosla: " << days[m] << std::endl;
                    m++;
                }
            
            
            }
            mean /=temp;
            std::cout << "Srednia z calych pomiarow wynosi: " << mean <<" stopni\n";
            break;
            break;
        }
        default:{
            std::cout << "Wybrano bledny numer";
        }
    }
}