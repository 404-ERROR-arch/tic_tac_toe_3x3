#include<iostream>
#include<windows.h>
using namespace std;

char tic_tac_toe[3][3];
char tic_tac_toe_result[3][3];
   
    

void tic_tac_show(){
    cout<<"__________________\n";
    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){
            cout<<"|  "<<tic_tac_toe[i][j]<<"  ";
        }cout<<"|\n";
        cout<<"|_____|_____|_____|\n";

    }
   
}

void tic_tac_result_show(){

    cout<<"________________\n";
    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){
            cout<<"|  "<<tic_tac_toe_result[i][j]<<" ";
        }cout<<"|\n";
        cout<<"|____|____|____|\n";

    }
 

}
    

void show_tic_tac_toe(){
    cout<<"---------------------------------------------\n\n";
    tic_tac_show();
    cout<<"\n";
    tic_tac_result_show();
    cout<<"\n------------------------------------------\n\n";

}


int main(){
    system("cls");
    system("color 07");

   

      tic_tac_toe[0][0] = '1';
      tic_tac_toe[0][1] = '2';
      tic_tac_toe[0][2] = '3';

      tic_tac_toe[1][0] = '4';
      tic_tac_toe[1][1] = '5';
      tic_tac_toe[1][2] = '6';

      tic_tac_toe[2][0] = '7';
      tic_tac_toe[2][1] = '8';
      tic_tac_toe[2][2] = '9';





      tic_tac_toe_result[0][0] = ' ';
      tic_tac_toe_result[0][1] = ' ';
      tic_tac_toe_result[0][2] = ' ';

      tic_tac_toe_result[1][0] = ' ';
      tic_tac_toe_result[1][1] = ' ';
      tic_tac_toe_result[1][2] = ' ';

      tic_tac_toe_result[2][0] = ' ';
      tic_tac_toe_result[2][1] = ' ';
      tic_tac_toe_result[2][2] = ' ';


      int count = 0;
      char player_A = 'O', player_B = 'X';
      char ans ;
      int not_win = 1;
      
      //crux part of program
      while(count<9 and not_win){
          system("color 07");
          int user_input;

          if(count&1){
              ans = player_A;
          }else{
              ans = player_B;
          }

          show_tic_tac_toe();

          cout<<ans<<" >>  ";
          cin>>user_input;


          switch(user_input){

              case 1:
              if(tic_tac_toe_result[0][0] == ' '){

                  tic_tac_toe_result[0][0] = ans;
                  tic_tac_toe[0][0] = ' ';
                  count++;

                  if(tic_tac_toe_result[0][0] == tic_tac_toe_result[0][1] and tic_tac_toe_result[0][1] == tic_tac_toe_result[0][2])
                    not_win = 0;
                
                  else if(tic_tac_toe_result[0][0] == tic_tac_toe_result[1][0] and tic_tac_toe_result[1][0] == tic_tac_toe_result[2][0])
                    not_win = 0;

                 else if(tic_tac_toe_result[0][0] == tic_tac_toe_result[1][1] and tic_tac_toe_result[1][1] == tic_tac_toe_result[2][2])
                    not_win = 0;

              }else{
                  cout<<"invalid input ;(\n\n";
                   system("color 04");
                    Sleep(1000);


              }
              break;



             case 2:
              if(tic_tac_toe_result[0][1] == ' '){

                  tic_tac_toe_result[0][1] = ans;
                  tic_tac_toe[0][1] = ' ';
                  count++;

                  if(tic_tac_toe_result[0][0] == tic_tac_toe_result[0][1] and tic_tac_toe_result[0][1] == tic_tac_toe_result[0][2])
                    not_win = 0;
                
                 

                 else if(tic_tac_toe_result[0][1] == tic_tac_toe_result[1][1] and tic_tac_toe_result[1][1] == tic_tac_toe_result[2][1])
                    not_win = 0;

              }else{
                  cout<<"invalid input ;(\n\n";
                   system("color 04");
                    Sleep(1000);


              }
              break;

                 case 3:
              if(tic_tac_toe_result[0][2] == ' '){

                  tic_tac_toe_result[0][2] = ans;
                  tic_tac_toe[0][2] = ' ';
                  count++;

                  if(tic_tac_toe_result[0][0] == tic_tac_toe_result[0][1] and tic_tac_toe_result[0][1] == tic_tac_toe_result[0][2])
                    not_win = 0;
                
                  else if(tic_tac_toe_result[0][2] == tic_tac_toe_result[1][2] and tic_tac_toe_result[1][2] == tic_tac_toe_result[2][2])
                    not_win = 0;

                 else if(tic_tac_toe_result[0][2] == tic_tac_toe_result[1][1] and tic_tac_toe_result[1][1] == tic_tac_toe_result[2][0])
                    not_win = 0;

              }else{
                  cout<<"invalid input ;(\n\n";
                   system("color 04");
                    Sleep(1000);


              }
              break;


               case 4:
              if(tic_tac_toe_result[1][0] == ' '){

                  tic_tac_toe_result[1][0] = ans;
                  tic_tac_toe[1][0] = ' ';
                  count++;

                  if(tic_tac_toe_result[1][0] == tic_tac_toe_result[1][1] and tic_tac_toe_result[1][1] == tic_tac_toe_result[1][2])
                    not_win = 0;
                
                  else if(tic_tac_toe_result[0][0] == tic_tac_toe_result[1][0] and tic_tac_toe_result[1][0] == tic_tac_toe_result[2][0])
                    not_win = 0;


              }else{
                  cout<<"invalid input ;(\n\n";
                   system("color 04");
                    Sleep(1000);


              }
              break;


               case 5:
              if(tic_tac_toe_result[1][1] == ' '){

                  tic_tac_toe_result[1][1] = ans;
                  tic_tac_toe[1][1] = ' ';
                  count++;

                  if(tic_tac_toe_result[1][0] == tic_tac_toe_result[1][1] and tic_tac_toe_result[1][1] == tic_tac_toe_result[1][2])
                    not_win = 0;
                
                  else if(tic_tac_toe_result[0][1] == tic_tac_toe_result[1][1] and tic_tac_toe_result[1][1] == tic_tac_toe_result[2][1])
                    not_win = 0;

                 else if(tic_tac_toe_result[0][0] == tic_tac_toe_result[1][1] and tic_tac_toe_result[1][1] == tic_tac_toe_result[2][2])
                    not_win = 0;

                  else if(tic_tac_toe_result[0][2] == tic_tac_toe_result[1][1] and tic_tac_toe_result[1][1] == tic_tac_toe_result[2][0])
                    not_win = 0;

              }else{
                  cout<<"invalid input ;(\n\n";
                   system("color 04");
                    Sleep(1000);


              }
              break;



               case 6:
              if(tic_tac_toe_result[1][2] == ' '){

                  tic_tac_toe_result[1][2] = ans;
                  tic_tac_toe[1][2] = ' ';
                  count++;

                  if(tic_tac_toe_result[0][2] == tic_tac_toe_result[1][2] and tic_tac_toe_result[1][2] == tic_tac_toe_result[2][2])
                    not_win = 0;
                
                  else if(tic_tac_toe_result[1][0] == tic_tac_toe_result[1][1] and tic_tac_toe_result[1][1] == tic_tac_toe_result[1][2])
                    not_win = 0;

              }else{
                  cout<<"invalid input ;(\n";
                   system("color 04");
                    Sleep(1000);

              }
              break;

               case 7:
              if(tic_tac_toe_result[2][0] == ' '){

                  tic_tac_toe_result[2][0] = ans;
                  tic_tac_toe[2][0] = ' ';
                  count++;

                  if(tic_tac_toe_result[0][0] == tic_tac_toe_result[1][0] and tic_tac_toe_result[1][0] == tic_tac_toe_result[2][0])
                    not_win = 0;
                
                  else if(tic_tac_toe_result[2][0] == tic_tac_toe_result[2][1] and tic_tac_toe_result[2][1] == tic_tac_toe_result[2][2])
                    not_win = 0;

                 else if(tic_tac_toe_result[2][0] == tic_tac_toe_result[1][1] and tic_tac_toe_result[1][1] == tic_tac_toe_result[0][2])
                    not_win = 0;

                  

              }else{
                  cout<<"invalid input ;(\n\n";
                   system("color 04");
                    Sleep(1000);


              }
              break;


               case 8:
              if(tic_tac_toe_result[2][1] == ' '){

                  tic_tac_toe_result[2][1] = ans;
                  tic_tac_toe[2][1] = ' ';
                  count++;

                  if(tic_tac_toe_result[0][1] == tic_tac_toe_result[1][1] and tic_tac_toe_result[1][1] == tic_tac_toe_result[2][1])
                    not_win = 0;
                
                  else if(tic_tac_toe_result[2][0] == tic_tac_toe_result[2][1] and tic_tac_toe_result[2][1] == tic_tac_toe_result[2][2])
                    not_win = 0;

                 

              }else{
                  cout<<"invalid input ;(\n\n";
                   system("color 04");
                    Sleep(1000);


              }
              break;



                case 9:
              if(tic_tac_toe_result[2][2] == ' '){

                  tic_tac_toe_result[2][2] = ans;
                  tic_tac_toe[2][2] = ' ';
                  count++;

                  if(tic_tac_toe_result[0][2] == tic_tac_toe_result[1][2] and tic_tac_toe_result[1][2] == tic_tac_toe_result[2][2])
                    not_win = 0;
                
                  else if(tic_tac_toe_result[2][0] == tic_tac_toe_result[2][1] and tic_tac_toe_result[2][1] == tic_tac_toe_result[2][2])
                    not_win = 0;

                 else if(tic_tac_toe_result[0][0] == tic_tac_toe_result[1][1] and tic_tac_toe_result[1][1] == tic_tac_toe_result[2][2])
                    not_win = 0;

                  
              }else{
                  cout<<"invalid input ;(\n\n";
                   system("color 04");
                    Sleep(1000);


              }
              break;


              default:
              cout<<"invalid input ;(\n\n";
               system("color 04");
                    Sleep(1000);












          }


        



      }

      if(not_win == 0){
            show_tic_tac_toe();
            if(ans == 'O')
            cout<<"player _A won\n\n";
            else{
                cout<<"player _b won\n\n";
            }
              cout<<"---------------------------------------------------\n\n\n";
              system("color 02");
              Sleep(2000);
        }else{
            show_tic_tac_toe();
            cout<<"match has been drow\n";

            cout<<"---------------------------------------------------\n\n\n";
        }

    main();


}