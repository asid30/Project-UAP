#include <ncurses.h>
#include <windows.h>
using namespace std;

int main(){
	int x = 116, y = 8;
	initscr();
	
	//newwin(height, width, start_x, start_y)
	WINDOW * wina = newwin(20, 118, 1, 1);
	refresh();
	
	box(wina, 0, 0);
	wmove(wina, y, x);
	wprintw(wina, "");
	wrefresh(wina);
	
	while(true){
		x--;
		Sleep(80);
				if(x == 1){
					x = 116;
				}else{
					x--;
				}

		wclear(wina);
		box(wina, 0, 0);
		wmove(wina, y, x);
		wprintw(wina, "0");
		wrefresh(wina);
	}
	
	getch();
	endwin();
}
