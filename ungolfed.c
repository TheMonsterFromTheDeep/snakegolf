#include <curses.h>
#include <unistd.h>
#include <time.h>
#define w(c,m) if(c){endwin();puts(m);exit(0);}
#define s while(a==*x&&b==*y){a=rand()%30;b=rand()%20;
x[15],y[15],a,b,i=1,l=1,t=1,r=0,j; //Variables
//x: x points of snake
//y: y points of snake
//a,b: coordinates of food
//i: index and misc
//l: length of snake
//t: x delta of snake
//r: y delta of snake
//j: index
main(){
    srand(time(0)); //Generate seed
    *x=*y=0; //Init snake
    s} //Generate first food
    initscr(); //Curses init statements
    cbreak();
    noecho();
    nodelay(stdscr,1);
    curs_set(0);
    for(;;){ //Forever loop
        clear();
        j=getch()-32; //The -32 is so we can compare with capital ASCII values, which can be represented more compactly as numbers (65 vs 'A')
        i=(j==68)-(j==65); //Get change in x delta
        if(i!=-t)t=i?i:t*(j!=83&&j!=87); //If the x delta is not the opposite of the current x delta, set the new x delta; otherwise retain unless y delta is changing
        i=(j==83)-(j==87); //Exact same as above
        if(i!=-r)r=i?i:r*(j!=68&&j!=65);
        for(i=0;i<l;++i){ //Drawing and losing loop
            mvaddch(y[i],x[i],35); //Draw snake component (35 <=> '#')
            for(j=0;j<l;++j){ //Check if snake self-intersects
                w(x[i]==x[j]&&y[i]==y[j]&&i!=j,"You lose!") //Losing condition
            }
        }
        for(i=l-1;i>0;){ //Update position of components
            x[i]=x[i-1];y[i]=y[--i];
        }
        *x=(*x+t+30)%30;*y=(*y+r+20)%20; //Update position of head (will wrap around 30 in x and 20 in y)
        mvaddch(b,a,64); //Draw food
        if(*x==a&&*y==b){ //Snake head is touching food
            w(l>14,"You won!") //If snake is 15 long, you win!

            x[l]=(x[l-1]-t+30)%30; //Create new component opposite of current direction
            y[l]=(y[l++-1]-r+20)%20;
            
            s} //Generate new food
        }
        refresh(); //Curses refresh statement
        usleep(50000); //Delay for loop
    }
}
