#include <ncurses.h>
#include <windows.h>

using namespace std;

void close (){ //fungsi untuk mengakhiri program
	exit(0);
}

int main(){ //kode utama
	
	initscr(); //inisiasi 
	int a;
	
	printw ("Pilih Menu: \n1. Start\n2. Exit\n\nJawaban anda: ");
	
	switch(a){
		case 1:clear();refresh();break;
		case 2:clear();close();refresh();break;
	}
	
	getch();
	endwin();
	
}
