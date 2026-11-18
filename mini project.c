#include <stdio.h>
#include <conio.h>
#include <dos.h>
void main()
{
    int i, j;
   




 int carPosition;
clrscr()
 textcolor(YELLOW);
    gotoxy(25, 2);
    cprintf("LINE FOLLOWER ROBOT");
    textcolor(LIGHTGREEN);
    gotoxy(8, 5);
    cprintf("START");
    gotoxy(65, 5);
    cprintf("END");
    /* Draw road boundaries */
    for(i = 7; i <= 23; i++)
    {
        gotoxy(5, i);
        cprintf("|");
        gotoxy(75, i);
        cprintf("|");
    }
    /* Draw robot moving on line */
    for(j = 8; j <= 21; j++)
    {
        clrscr();
        textcolor(YELLOW);
        gotoxy(25, 2);
        cprintf("LINE FOLLOWER ROBOT");
        textcolor(LIGHTGREEN);
        gotoxy(8, 5);
        cprintf("START");
        gotoxy(65, 5);
        cprintf("END");
        for(i = 7; i <= 23; i++)
        {
           





 gotoxy(5, i);
            cprintf("|");
   gotoxy(75, i);
            cprintf("|");
        }
        textcolor(WHITE);
        for(i = 8; i <= 22; i++)
        {
            gotoxy(40, i);
            cprintf("|");
        }
carPosition = j;
        textcolor(LIGHTCYAN);
        gotoxy(37, carPosition);
        cprintf("ROBOT");
        textcolor(LIGHTGREEN);
        gotoxy(10, 25);
        cprintf("Robot moving from START to END...");
        delay(300);
    }
    textcolor(YELLOW);
    gotoxy(10, 25);
    cprintf("Robot reached destination!          ");
    getch();
}
