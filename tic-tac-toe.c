#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char sym[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
void display();
int end();
void menu();

int main()
{
    int i, p, player = 1;
    char mark, p1,p2;
    
    do
    {
        system("cls");  //clears the output screen
        menu();
    
        printf("\n\n");
        display();
        
            player = (player % 2)? 1 : 2;   //when 1%2 then 1 is chosen and after player++ 2%2 second option is chosen
            
            printf("Player %d enter the position: ", player);
            scanf("%d", &p);

            mark = (player == 1)? 'X' : 'O';  // here when 1%2 player is 1 then 'X' is chosen
        
        if (p == 1 && sym[0] == '1')     //when the position entered and the number of display() function matches
            sym[0] = mark;                 //it will put the mark 'X' or 'O'. This mark is identified using the line
                                        // mark = (player == 1)? 'X' : 'O';
        else if (p == 2 && sym[1] == '2')
            sym[1] = mark;
            
        else if (p == 3 && sym[2] == '3')
            sym[2] = mark;
            
        else if (p == 4 && sym[3] == '4')
            sym[3] = mark;
            
        else if (p == 5 && sym[4] == '5')
            sym[4] = mark;
            
        else if (p == 6 && sym[5] == '6')
            sym[5] = mark;
            
        else if (p == 7 && sym[6] == '7')
            sym[6] = mark;
            
        else if (p == 8 && sym[7] == '8')
            sym[7] = mark;
            
        else if (p == 9 && sym[8] == '9')
            sym[8] = mark;
                    else
                     {
                         printf("Invalid move ");

                            player--;
                        getch();   // when invalid move then after pressing enter key it will again ask the same player to input the position number
                     }

        i = end();
                
                player++;       // this will point to player 2 after one round
                                //or if there is invalid move, player-- and then player++ will point to the same player again
    }while (i ==  - 1);
    
    printf("\n");
    display();
    
    if (i == 100)
        printf("$\a Player 1 wins! :) ");
    else if(i == 200)
        printf("$\a Player 2 wins! :) ");
    else
        printf(" \a Game draw :(");

    getch();

    return 0;
}

void menu()
{
     printf("\t\t\t TIC TAC TOE GAME: \n\n");
    printf("\t\t~~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~\n\n");
    printf("Player 1: X\nPlayer 2: O\n");
}

void display()
{  

    printf("\t\t   ----------------------------- \n");
    printf("\t\t\t %c | \t %c \t |  %c\n", sym[0], sym[1], sym[2]);
    printf("\t\t\t   | \t\t |\n");
    printf("\t\t   ----------------------------- \n");
    printf("\t\t\t %c | \t %c \t |  %c\n", sym[3], sym[4], sym[5]);
    printf("\t\t\t   | \t\t |\n");
    printf("\t\t   ----------------------------- \n");
    printf("\t\t\t %c | \t %c \t |  %c\n", sym[6], sym[7], sym[8]);
    printf("\t\t\t   | \t\t |\n");
    printf("\t\t   ----------------------------- \n");
}

int end()
{
    if((sym[0] == 'X' && sym[1] == 'X' && sym[2] == 'X') || 
    (sym[0] == 'X' && sym[3] == 'X' && sym[6] == 'X') || (sym[0] == 'X' && sym[4] == 'X' && sym[8] == 'X') )

        return (100);
    
    else if ((sym[0] == 'O' && sym[1] == 'O' && sym[2] == 'O')
     || (sym[0] == 'O' && sym[3] == 'O' && sym[6] == 'O') || (sym[0] == 'O' && sym[4] == 'O' && sym[8] == 'O'))

        return (200);

    else if((sym[1] == 'X' && sym[4] == 'X' && sym[7] == 'X'))

        return (100);

    else if((sym[1] == 'O' && sym[4] == 'O' && sym[7] == 'O'))

        return (200);

    else if((sym[2] == 'X' && sym[5] == 'X' && sym[8] == 'X'))

        return (100);

    else if((sym[2] == 'O' && sym[5] == 'O' && sym[8] == 'O'))

        return (200);

    else if((sym[3] == 'X' && sym[4] == 'X' && sym[5] == 'X'))

        return (100);

    else if((sym[3] == 'O' && sym[4] == 'O' && sym[5] == 'O'))

        return (200);

    else if((sym[2] == 'X' && sym[4] == 'X' && sym[6] == 'X'))

        return (100);

    else if((sym[2] == 'O' && sym[4] == 'O' && sym[6] == 'O'))

        return (200);

    else if((sym[6] == 'X' && sym[7] == 'X' && sym[8] == 'X'))

        return (100);

    else if((sym[6] == 'O' && sym[7] == 'O' && sym[8] == 'O'))

        return (200);

    else if (sym[0] != '1' && sym[1] != '2' && sym[2] != '3' &&
        sym[3] != '4' && sym[4] != '5' && sym[5] != '6' && sym[6] 
        != '7' && sym[7] != '8' && sym[8] != '9')

        return 0;

    else
    {
        return -1;
    }
    
}