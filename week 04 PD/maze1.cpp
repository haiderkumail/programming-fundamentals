#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void move(int x, int y);
void gotoxy(int,int);




main(){
system("cls");
printMaze();
int x=11;
int y=23;
move(x,y);
while(true){
  move(x,y);
  if(x<25){
  x=x+1;
}
 if(x==25){
  gotoxy(x-1,y);
  cout<<"  ";
  x=11;
}

}


}
void printMaze(){
     
cout<< " ################################################################" << endl;
cout<< "||.. ............................................       .....  ||" << endl;
cout<< "||.. %%%%%%%%%%%      ...     %%%%%%%%%%%%% |%|..       %%%%%  ||" << endl;
cout<< "||..   |%|   |%|   |%|...     |%|       |%| |%|..        |%|   ||" << endl;
cout<< "||..   |%|   |%|   |%|...     |%|       |%| |%|..        |%|   ||" << endl;
cout<< "||..   %%%%%%%% .. |%|...     %%%%%%%%%%%%%    ..       %%%%%  ||" << endl;
cout<< "||..   |%|      .. |%|...    ............. |%| ..           .  ||" << endl;
cout<< "||..   %%%%%%%%%.. |%|...    %%%%%%%%%%    |%| ..       %%%%%  ||" << endl;
cout<< "||..         |%|.            |%|....       |%| ..         |%|  ||" << endl;
cout<< "||..    .....      |%|.             |%|....|%| ..         |%|  ||" << endl;
cout<< "||..|%| |%|%%      |%|.  |%|    ....|%|        ..|%|      |%|  ||" << endl;
cout<< "||..|%| |%|              %%%%%  ....|%|....    ..|%|.          ||" << endl;
cout<< "||..|%| |%|              ...|%|  %%%%%%%        .|%|.          ||" << endl;
cout<< "||..|%|      ..          ...|%|                 .|%|.     |%|  ||" << endl;
cout<< "||..|%|       .          ...|%|                 .|%|.     |%|  ||" << endl;
cout<< "||..|%| %%%%%%%%%%%%     ...|%|%%%%%%        .   |%|      %%%  ||" << endl;
cout<< "||.........................................  .       ........  ||" << endl;
cout<< "||  .......................................  .          .....  ||" << endl;
cout<< "||..|%|  |%|  |%|..   %%%%%%%%%%   .....|%|  .   |%| ..|%|.    ||" << endl;
cout<< "||..|%|  |%|  |%|..       ...|%|     %%%%%%      |%| ..|%|.    ||" << endl;
cout<< "||..|%|              .  G    ...|%|              |%| ..|%|.    ||" << endl;
cout<< "||..|%|  %%%%%%%%%%%%%%      ...|%|%%%%%%%       |%| ..|%|%%%  ||" << endl;
cout<< "||............................................   |%|.........  ||" << endl;
cout<< "||  ..........................................        .......  ||" << endl;
cout<< "#################################################################" << endl;              


}
void move(int x, int y){
   gotoxy(x-1,y);
   cout<<"  ";
   gotoxy(x,y);
   cout<<"P";
   Sleep(300);

}

void gotoxy(int x,int y)
{
   
COORD coordinates;
coordinates . X = x;
coordinates . Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}






