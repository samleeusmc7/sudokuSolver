#include<iostream>

using namespace std;

#include<vector>
#include<string>

class Board
{	
	public:
		void show()
		{
			const int MAX = 9;
			int array[9][9] = {};
			for(int i = 0; i < MAX; i++)
			{
				for(int j = 0; j < MAX; j++)
				{
					cout << array[i][j] << " ";
				}
				cout << endl;
			}
			
			
		}//END---SHOW()
		
		
		void checkRow()
		{
			for(int i = 1; i <= 9; i++)
			{
				cout << i << " ";
			}
		
		
		
		
		
		
		
		
		//CHECKING TO MAKE SURE THE SUMATION OF 1-9 IS 45
		/*
			int sum = 0;
			
			for(int i = 1; i <= 9; i++)
			{
				sum += i;
			}	
			cout << "the sum is : " << sum << endl;
			*/
		
		
		
		}//END----CHECKROW()
		
//		bool checkCol()
//		{		
//		}//END-----CHECKCOL()
		
	

};

		/*
		void show()
		{
			const int MAX = 9;
			
			int array[9][9] = {{1,2,3,4,5,6,7,8,9},
												{1,2,3,4,5,6,7,8,9},
												{1,2,3,4,5,6,7,8,9},
												{1,2,3,4,5,6,7,8,9},
												{1,2,3,4,5,6,7,8,9},
												{1,2,3,4,5,6,7,8,9},
												{1,2,3,4,5,6,7,8,9},
												{1,2,3,4,5,6,7,8,9},
												{1,2,3,4,5,6,7,8,9}};
																													
			for(int i = 0; i < MAX; i++)
			{
				for(int j = 0; j < MAX; j++)
				{
					cout << array[i][j] << " ";
				}
				cout << endl;
			}
												
			cout << endl;		
		}//END----SHOW()
		*/


int main()
{
	std::vector <int> vCol;
	std::vector <int> vRow;
	string enter;
	
	
	cout << "Press Enter to play the game : " << endl;
	cin.ignore();
	
	

	Board board;
	
	board.show();
	board.checkRow();





	return 0;
}


// creates a row and column vector 1-9	
	/*
	cout << endl;
		
	//ROW
	for(int i = 0; i <= MAX; i++)
	{	
		vCol.push_back(i);
	}
	
	for(int i = 1; i <= MAX; i++)
	{
		cout << vRow[i] << " ";
	}	
	

	//COLUMN
	for(int i = 0; i <= MAX; i++)
	{	
		vCol.push_back(i);
	}
	cout << endl;
	for(int i = 2; i <= MAX; i++)
	{
		cout << vCol[i] << endl;
	}	
	
	cout << endl;

*/


	
//-------------- creates a 9x9 grid --------------
/*	
	cout << endl;
	
	int array[9][9] = {{1,2,3,4,5,6,7,8,9},
										{1,2,3,4,5,6,7,8,9},
										{1,2,3,4,5,6,7,8,9},
										{1,2,3,4,5,6,7,8,9},
										{1,2,3,4,5,6,7,8,9},
										{1,2,3,4,5,6,7,8,9},
										{1,2,3,4,5,6,7,8,9},
										{1,2,3,4,5,6,7,8,9},
										{1,2,3,4,5,6,7,8,9}};
										
																		
	for(int i = 0; i < MAX; i++)
	{
		for(int j = 0; j < MAX; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
										
	cout << endl;						
*/									
	
	
		
	
//------------CREATES 9x9 1-9 ROWS ----------	
/*


	//ROW
	for(int i = 0; i <= MAX; i++)
	{	
		vRow.push_back(i);
	}
	
	
		for(int i = 0; i <= MAX; i++)
		{
			for(int i = 1; i <= MAX; i++)
			{
				cout << vRow[i] << " ";
			}
			cout << endl;
		}
*/	




//-----------CREATES 9x9 1-9 COLUMNS -----------
/*	
		for(int i = 0; i <= MAX; i++)
	{
		vCol.push_back(i);
	}	
	

		for(int i = 0; i <= MAX; i++)
		{
			for(int i = 1; i <= MAX; i++)
			{
				cout << vCol[i] << " ";
			}
			cout << endl;
		}
	
*/



//------------CREATES A MATRIX 3x3 1-9
/*
	int matrix[3][3] = {{1,2,3},
										{4,5,6},
										{7,8,9}};

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
*/	



