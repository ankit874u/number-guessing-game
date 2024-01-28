#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
   
    cout<<"\n\t\t\twelcome to guess the number game!"<<endl;
    cout<<"you have to guess a number b/w 1 and 100 you 11 have limited choices based on the level you choose..good luck!!"<<endl;
    while(true){
                                                            
        cout<<"\nEnter the difficuilty level: \n ";
        cout<<" 1 for easy!\t";
        cout<<" 2 for medium!\t";
        cout<<" 3 for difficult!\t";
        cout<<" 0 for ending the game!\n"<<endl;

        int difficultychoice;
        cout<<"enter the number:";
        cin>>difficultychoice;

        srand(time(0));
        int secretnumber = 1+(rand()%100);
        int playerchoice;

        if(difficultychoice==1){
            cout<<"\nyou have 10 choices for finding the secret number b/w 1 and 100..";
            int choicesleft=10;
            for(int i=1;i<=10;i++){
                cout<<"\n\n enter the number";
                cin>>playerchoice;
                if(playerchoice==secretnumber){
                    cout<<"well played! you won"<<playerchoice<<"is the secret number"<<endl;
                    cout<<"t\t\tthanks for playing..."<<endl;
                    cout<<"play the game again with us!!\n\n"<<endl;
                    break;
                }
                else{
                    cout<<"nope"<<playerchoice<<"is not the right number\n";
                    
                    if(playerchoice<secretnumber){
                        cout<<"the secreatnumber is smaller than the number you have closen"<<endl;
                    }
                    else{
                        cout<<"the secretnumber is greater than the number you have chosen"<<endl;
                    }
                    choicesleft--;
                    cout<<choicesleft<<"choices left.."<<left;
                    if(choicesleft==0){
                        cout<<"you couldn't find the secret number,it was"<<secretnumber<<"you lose!!\n\n";
                        cout<<"play the game again to win!\n\n";

                    }
                }

            }
        }
        else if(difficultychoice==2){
            cout<<"\nyou have 7 choices for finding the secret number b/w 1 and 100..";
            int choicesleft=7;
            for(int i=1;i<=7;i++){
                cout<<"\n\n enter the number";
                cin>>playerchoice;
                if(playerchoice==secretnumber){
                    cout<<"well played! you won"<<playerchoice<<"is the secret number"<<endl;
                    cout<<"t\t\tthanks for playing..."<<endl;
                    cout<<"play the game again with us!!\n\n"<<endl;
                    break;
                }
                else{
                    cout<<"nope "<<playerchoice<<"is not the right number\n";
                    
                    if(playerchoice<secretnumber){
                        cout<<"the secreatnumber is smaller than the number you have closen"<<endl;
                    }
                    else{
                        cout<<"the secretnumber is greater than the number yiu have chosen"<<endl;
                    }
                    choicesleft--;
                    cout<<choicesleft<<"choices left.."<<left;
                    if(choicesleft==0){
                        cout<<"you couldn't find the secret number,it was"<<secretnumber<<"you lose!!\n\n";
                        cout<<"play the game again to win!\n\n";

                    }
                }

            }
        }
        else if(difficultychoice==3){
            cout<<"\nyou have 5 choices for finding the secret number b/w 1 and 100..";
            int choicesleft=5;
            for(int i=1;i<=5;i++){
                cout<<"\n\n enter the number";
                cin>>playerchoice;
                if(playerchoice==secretnumber){
                    cout<<"well played! you won"<<playerchoice<<"is the secret number"<<endl;
                    cout<<"t\t\tthanks for playing..."<<endl;
                    cout<<"play the game again with us!!\n\n"<<endl;
                    break;
                }
                else{
                    cout<<"nope"<<playerchoice<<"is not the right number\n";
                    
                    if(playerchoice<secretnumber){
                        cout<<"the secreatnumber is smaller than the number you have closen"<<endl;
                    }
                    else{
                        cout<<"the secretnumber is greater than the number yiu have chosen"<<endl;
                    }
                    choicesleft--;
                    cout<<choicesleft<<"choices left.."<<left;
                    if(choicesleft==0){
                        cout<<"you couldn't find the secret number,it was"<<secretnumber<<"you lose!!\n\n";
                        cout<<"play the game again to win!\n\n";

                    }
                }

            }
        }
        else if(difficultychoice==0){
            exit(0);
        }
        else{
            cout<<"wrong choice enter the vailed choice to play the game!(0,1,2,3)"<<endl;

        }

    }    

    return 0;
}
