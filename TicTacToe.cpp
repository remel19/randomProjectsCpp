/*
 * Project Name: TicTacToe.cpp
 * Created on: Apr 26, 2016
 * Author: Remel Kabir
 * Copyright   : Email:remelkabir@gmail.com for Permission to use it
 * Description : TicTacToe game.
 *
 */

#include<iostream>
#include<stdlib.h>
using namespace std;

char squares[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}; //array to store the move
bool checkForX();//checks if x has win the game yet or not
bool checkFor0();//checks if 0 has win the game yet or not
bool full(); //check if the board is full yet or not
void board();//prints the board every time after entering a new move


//main program
int main(){

	while(!full()){
		int playerInputx; // player X's input
		int playerInput0; // player 0's input
		//X's turn
		cout<<"Player X's turn.\nPlease Enter a number between 1-9:";
		cin>> playerInputx; //X enters it's move
		int a = playerInputx; //temporary variable to store player X's move
		while(squares[a] == 'X' || squares[a] =='0' || a<1 ||a>9){// loop to check for valid move
			if(a<1 || a>9) cout<< "Out of range, please re-enter your move: ";
			else cout<< "Invalid move, please re-enter your move: ";
			cin>>a; // stores the new valid move into variable a
			playerInputx = a; // sets player X's move to a
		}
		squares[playerInputx] = 'X'; //printing player's move into the board
		board(); //function to print the board
		if(checkForX()){//checks if X has won
			cout<<"Congratulation player X, you have won!!!"<<endl;
			break; //If X has won, gets out of the loop, end of program
		}
		if(full()){ //check if board is full or not
			cout<<"Board's full no one wins!!!"<<endl;
			break; // if full no one has won and gets out of the program
		}



		//0's turn
		cout<<"Player 0's turn.\nPlease Enter a number between 1-9:";
		cin>> playerInput0;// 0 enters it's move
		int b = playerInput0;
		while(squares[b] == 'X' || squares[b] =='0' || b<1 ||b>9){ // loop to check for valid move
			if(b<1 || b>9) cout<< "Out of range, please re-enter your move: ";
			else cout<< "Invalid move, please re-enter your move: ";
			cin>>b;// stores the new valid move into variable b
			playerInput0 = b; // sets player X's move to b
		}
		squares[playerInput0] = '0'; //printing player's move into the board
		board(); //function to print the board
		if(checkFor0()){//checks if 0 has won
			cout<<"Congratulation player 0, you have won!!!"<<endl;
			break;//If 0 has won, gets out of the loop, end of program
		}
		if(full()){//check if board is full or not
			cout<<"Board's full no one wins!!!"<<endl;
			break; // if full no one has won and gets out of the program
		}
	}//end of while loop
	return 0;
}//end of main function

bool checkForX(){ //checks if X has won yet
	bool playerXwin = false; //assuming player X hasn't won yet
	// all the possible cases when X can win
	if(squares[1] == 'X' && squares[2] == 'X' && squares[3] == 'X'){
		playerXwin = true;
	}
	else if(squares[4] == 'X' && squares[5] == 'X' && squares[6] == 'X'){
		playerXwin = true;
	}
	else if(squares[7] == 'X' && squares[8] == 'X' && squares[9] == 'X'){
		playerXwin = true;
	}
	else if(squares[1] == 'X' && squares[4] == 'X' && squares[7] == 'X'){
		playerXwin= true;
	}
	else if(squares[2] == 'X' && squares[5] == 'X' && squares[8] == 'X'){
		playerXwin= true;
	}
	else if(squares[3] == 'X' && squares[6] == 'X' && squares[9] == 'X'){
		playerXwin= true;
	}
	else if(squares[1] == 'X' && squares[5] == 'X' && squares[9] == 'X'){
		playerXwin= true;
	}
	else if(squares[3] == 'X' && squares[5] == 'X' && squares[7] == 'X'){
		playerXwin= true;
	}
	return playerXwin;// returns whether player X has won or not
}

bool checkFor0(){ //checks if 0 has won yet
	bool player0win = false; //assuming player 0 hasn't won yet
	//all the possible cases when 0 can win
	if(squares[1] == '0' && squares[2] == '0' && squares[3] == '0'){
		player0win = true;
	}
	else if(squares[4] == '0' && squares[5] == '0' && squares[6] == '0'){
		player0win = true;
	}
	else if(squares[7] == '0' && squares[8] == '0' && squares[9] == '0'){
		player0win = true;
	}
	else if(squares[1] == '0' && squares[4] == '0' && squares[7] == '0'){
		player0win= true;
	}
	else if(squares[2] == '0' && squares[5] == '0' && squares[8] == '0'){
		player0win= true;
	}
	else if(squares[3] == '0' && squares[6] == '0' && squares[9] == '0'){
		player0win= true;
	}
	else if(squares[1] == '0' && squares[5] == '0' && squares[9] == '0'){
		player0win= true;
	}
	else if(squares[3] == '0' && squares[5] == '0' && squares[7] == '0'){
		player0win= true;
	}
	return player0win;// returns whether player 0 has won or not
}


bool full(){ // checks if the board is full or not
	bool boardFull = true; //assuming the board is full with X's and 0's
	for(int i =1; i<10; i++){ // loop to check every single square's input
		if(squares[i] != 'X' && squares[i] != '0'){ //checking squares 0-10 for X's and 0's
			boardFull = false; // if a square has neither X or 0 the board is not full
			break; // gets out of the loop if the board isn't full
		}
	}
	return boardFull; // returns whether the board is full or not
}

void board(){ // prints the board
	cout<<"| " <<squares[1] << " |" <<"  " <<squares[2] << " |" <<"  " <<squares[3] << " |" <<endl;
	cout<<"|---|----|----|"<<endl;
	cout<<"| " <<squares[4] << " |" <<"  " <<squares[5] << " |" <<"  " <<squares[6] << " |" <<endl;
	cout<<"|---|----|----|"<<endl;
	cout<<"| " <<squares[7] << " |" <<"  " <<squares[8] << " |" <<"  " <<squares[9] << " |" <<endl;
}


