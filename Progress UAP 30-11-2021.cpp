#include <ncurses.h>
#include <windows.h>

using namespace std;

void menu_utama_play(){
	mvprintw (8,51, "MENU UTAMA");refresh();
	mvprintw (9,42, "(Tekan enter untuk memilih!)");refresh();
	attron(COLOR_PAIR(1));
	mvprintw (12,53, "PLAY:)");refresh();
	attroff(COLOR_PAIR(1));
	mvprintw (14,53, "EXIT:(");refresh();
}

void menu_utama_exit(){
	mvprintw (8,51, "MENU UTAMA");refresh();
	mvprintw (9,42, "(Tekan enter untuk memilih!)");refresh();
	mvprintw (12,53, "PLAY:)");refresh();
	attron(COLOR_PAIR(1));
	mvprintw (14,53, "EXIT:(");refresh();attroff(COLOR_PAIR(1));refresh();
}

void play(){
	clear();
	printw("MANTAP!");
}

void exit(){
	exit(0);
}

void warna(){
	start_color();
	init_pair(1,COLOR_BLACK,COLOR_WHITE);
}

int main(){
	
	char ch;
	int select;

	initscr();
	warna();
	
	menu_utama_play();select=1;
	
	for(int i=0;;){
	noecho();
	ch = getch();
		if(ch==72){
			clear();
	        menu_utama_play();select=1;
		}
		else if(ch == 80){
			clear();
	        menu_utama_exit();select=2;
		}
		
		if(ch == '\n'){
			
			if(select == 1){
				play();
			}
			if(select == 2){
				exit();
			}
		}
	}
	
	getch();
	refresh();
	endwin();
	
}
