#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{
	int i,j;

	int c[26][28] = {{0,1,1,0,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1},
	               {1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,0},
	               {0,0,1,1,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1},
	               {1,1,0,0,1,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,1,0,1,1,0,0},
	               {1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1},
	               {1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,1,0,0,0},
	               {0,1,1,0,1,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,1,0,1,1,0},
	               {1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1},
	               {1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0},
	               {0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0},
	               {1,0,0,1,1,0,1,0,1,1,0,0,1,0,0,0,1,1,0,0,1,0,1,0,1,0,0,1},
	               {1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,1,1},
	               {1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1},
	               {1,0,0,1,1,1,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,1,1,1,0,0,1},
	               {0,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0},
	               {1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,0,1,0,0,0,1,0,0,0,1,0,0,0},
	               {0,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,1,1,0,1,1,1},
	               {1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,0,1,1,0,0,1,0,1,0,1,0,0,1},
	               {0,1,1,0,1,0,0,1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,1,0,1,1,0},
	               {1,1,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0},
	               {1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0},
	               {1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
	               {1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1},
	               {1,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,0,1},
	               {1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,1,0,0,0,1,0,0,0,1,0,0},
	               {1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1},
	           };
	           
	        
		   	/*int p=0;
			for(int x=0;x<26;x++){
				for(int row=0; row<7; row++){
				for(int col=0; col<4; col++){
					if(c[x][p]==1)
					printf("*");
				    else
						printf("");
					p++;
				   }
				printf("\n");
				}
				printf("\n\n");
				p=0;
			}*/
			char x;
			puts("enter 1 or 0");
			for(int row=0; row<7; row++){
			for(int col=0; col<4; col++){
						
		
	
	x=getch();
	if(x=='1')
	{
	printf("*");
}
	
	else
	{
	printf(" ");	
	}
}

	printf("\n");
}
	
	return 0;
}
			
