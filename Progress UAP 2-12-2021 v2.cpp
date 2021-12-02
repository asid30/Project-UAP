#include <ncurses.h>
#include <windows.h>
using namespace std;

int main(){
	initscr();
	
	start_color();
	init_pair(1,COLOR_RED,COLOR_RED);
	init_pair(2,COLOR_WHITE,COLOR_WHITE);
	
	//sumbu y = 7 & 9
	//sumbu x = 60 sampai 116
	
	int a=9;
	int b=116;
	int c=7;
	int d=105;
	int e=7;
	int f=93;
	
	int time=50;//time
	
	attron(COLOR_PAIR(1));
	mvprintw(8,0,"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	attroff(COLOR_PAIR(1));
	
	mvprintw(a,b,"00");//kotak1
	mvprintw(c,d,"00");//kotak2
	mvprintw(e,f,"00");//kotak3
	
	for(int i = 0;;i++){
		for(int i = 0;i<120;i++){
		clear();refresh();
		attron(COLOR_PAIR(2));
		mvprintw(8,0,"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(a,b-i,"00");refresh();
		mvprintw(c,d-i,"00");refresh();
		mvprintw(e,f-i,"00");refresh();
		attroff(COLOR_PAIR(1));
		Sleep(time);refresh();
		attroff(COLOR_PAIR(1));refresh();
		}
	}
	
	getch();
	refresh();
	endwin();
}
