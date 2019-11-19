#include <ncurses.h>
#include <termios.h>
#include <iostream>
using namespace std;

int boarder_l = 50;
int boarder_w = 100;
bool game_sts = false;
int x, y, coin_x, coin_y;
char c;
//enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
//eDirection dir;
void Start_Game();

void Exit(){
	cout << "Exiting Game..." << endl;
	endwin();
	system("exit");
}

void Main_Menu(){
	while(true){
		if(game_sts){
			Start_Game();
		}
		cout << "Main Menu" << endl;
		cout << "Press y to start game" << endl;
		cout << "Press n to exit" << endl;
		c = getchar();
		if(c == 'y'){
			cout << "Starting Game..."<< endl;
			game_sts=true;
		}
		else if(c == 'n' || 'e'){
			Exit();
		}
	}
}

void Setup(){
	x=boarder_l/2;
	y=boarder_w/2;
	coin_x=rand() % boarder_l;
	coin_y=rand() % boarder_w;
}

void Boarders(){
	for(int l=0; l<boarder_l; ++l){
		for(int w=0; w<boarder_w; ++w){
			if(l==0 || l==boarder_l-1){
				cout << "-";
			}
			else{
				if(w==0 || w==boarder_w-1){
					cout << "|";
				}
				else if(l==x && w==y){
					cout << "O";
				}
				else if(l==coin_x && w==coin_y){
					cout << "*";
				}
				else{
					cout << " ";
				}
			}
		}
	cout << endl;
	}
}

void Controller(){
	if(game_sts){
		char u_input=getch();
		switch(u_input){
			case 'w':
				x--;
				break;
			case 'a':
				y--;
				break;
			case 's':
				x++;
				break;
			case 'd':
				y++;
				break;
			default:
				break;
		}
	}
}

//void Logic(){
//	switch(dir){
//		case LEFT:
//			y--;
//			break;
//		case RIGHT:
//			y++;
//			break;
//		case UP:
//			x--;
//			break;
//		case DOWN:
//			x++;
//			break;
//	}
//}

void Start_Game(){
	while(true){
		Setup();
		while(game_sts){
			initscr();
			Boarders();
			Controller();
			cout << "Testing" << endl;
			system("clear");
			//Logic();
			//Score();
			endwin();
		}
	}
}

int main(){
	system("clear");
	Main_Menu();
	endwin();
}
