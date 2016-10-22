#include <curses.h>
#include <unistd.h>
#include <time.h>
#define w(c,m) if(c){endwin();puts(m);exit(0);}
#define s while(a==*x&&b==*y){a=rand()%30;b=rand()%20;
x[15],y[15],a,b,i=1,l=1,t=1,r=0,j;main(){srand(time(0));*x=*y=0;s}initscr();cbreak();noecho();nodelay(stdscr,1);curs_set(0);for(;;){clear();j=getch()-32;i=(j==68)-(j==65);if(i!=-t)t=i?i:t*(j!=83&&j!=87);i=(j==83)-(j==87);if(i!=-r)r=i?i:r*(j!=68&&j!=65);for(i=0;i<l;++i){mvaddch(y[i],x[i],35);for(j=0;j<l;++j){w(x[i]==x[j]&&y[i]==y[j]&&i!=j,"You lose!")}}for(i=l-1;i>0;){x[i]=x[i-1];y[i]=y[--i];}*x=(*x+t+30)%30;*y=(*y+r+20)%20;mvaddch(b,a,64);if(*x==a&&*y==b){w(l>14,"You won!")x[l]=(x[l-1]-t+30)%30;y[l]=(y[l++-1]-r+20)%20;s}}refresh();usleep(50000);}}
