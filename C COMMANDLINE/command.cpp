#include <stdio.h>

int main()
{
	
	
	int i,j;

	int letters[26][7][4] = {{0,1,1,0,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1},//expected A
	               {1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,0},//expected B
	               {0,0,1,1,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1},//expected C
	               {1,1,0,0,1,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,1,0,1,1,0,0},//expected D
	               {1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1},//expected E
	               {1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,1,0,0,0},//expected F
	               {0,1,1,0,1,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,1,0,1,1,0},//expected G
	               {1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1},//expected H
	               {1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0},//expected I
	               {0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0},//expected J
	               {1,0,0,1,1,0,1,0,1,1,0,0,1,0,0,0,1,1,0,0,1,0,1,0,1,0,0,1},//expected K
	               {1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,1,1},//expected L
	               {1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1},//expected M
	               {1,0,0,1,1,1,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,1,1,1,0,0,1},//expected N
	               {0,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0},//expected O
	               {1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,0,1,0,0,0,1,0,0,0,1,0,0,0},//expected P
	               {0,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,1,1,0,1,1,1},//expected Q
	               {1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,0,1,1,0,0,1,0,1,0,1,0,0,1},//expected R
	               {0,1,1,0,1,0,0,1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,1,0,1,1,0},//expected S
	               {1,1,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0},//expected T
	               {1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0},//expected U
	               {1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},//expected V
	               {1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1},//expected W
	               {1,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,0,1},//expected X
	               {1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,1,0,0,0,1,0,0,0,1,0,0},//expected Y
	               {1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1},//expected Z
	           };
	
	
char exercise[8][2] = {"A","B","C","D","E","F","G","H"};	//Assigned exercise by the teacher
int marker[8] = {8,5,5,4,4,6,5,4};	//Assigned marks for each letter depending on complexity

double x;
double finalMark, letterMark, studentScore;
int score,letterScore,sampleScore, answer[8][7][4];
score = letterScore = sampleScore = 0;

printf("****Welcome to kindercare application system****\n\n");

printf("Use 1 or 0 to draw the letter C\n \t\t.... Place a 1 where the Letter plot should appear or a 0 where it shouldn't'\n\n");

for(int k=0; k<8; k++) //Counter for the letters in the exercise
{
	printf("\n\nSketch the letter %s\t\t(%d marks)\n",exercise[k],marker[k]);
	printf("\n\n\tThe Expected correct pattern is\n");	
for(int i=0;i<7;i++)
{
		for(int j=0;j<4;j++)
		{
			if(letters[k][i][j] == 1)
			{
				printf("*");
			}
			else{
				printf(" ");
			}
				
		}
			printf("\n");
}	

	printf("\n\n\tIt's your turn, try it out\n");

	for(int i=0;i<7;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d", &answer[k][i][j]);	//Accepts input from the pupil
			
			if(answer[k][i][j]== letters[k][i][j])
			{
				score = score + 1; //For each correctly plotted point, the score variable is increased by one
				letterScore = letterScore + 1;	//letterScore variable is increased by one for each correct point plotted on a letter 
			}
		}
	}

	printf("\n\nThe drawn letter pattern is\n");	
for(int i=0;i<7;i++)
{
		for(int j=0;j<4;j++)
		{
			if(answer[k][i][j] == 1)
			{ 
				printf("*");
			}
			else{
				printf(" ");
			}
				
		}
			printf("\n");
}

		letterMark = (letterScore/28.0)*marker[k];	//student mark scored on each letter as per the awarded marks for that letter
		printf("\n You have scored %.2f marks out of %d on the letter %s",letterMark,marker[k],exercise[k]);
		letterScore = 0;	//Reset back to zero so as to store new marks for next letter in assignment
		
		studentScore = studentScore + letterMark;	//cummulative student scores on letters attempted so far
		sampleScore = sampleScore + marker[k];		// cummulative sample space scores as assigned by the teacher



	printf("\n\n\n\tTotal number of correctly plotted points in this assignment is %d out of 224 points\n",score);
	
		//Calculating the pupil final mark
		x = studentScore/sampleScore; 
		finalMark = (x*100);
		
	printf("\n\tDear student your final mark in the assignment is %.2f%%",finalMark);
}

}





