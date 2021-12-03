#include"game.h"
//��ʼ����������Ϊ��
void IntiBoard(char board[ROW][COL],int row,int col)
{   int i,j;
for(i=0;i<ROW;i++)
{   
	for(j=0;j<COL;j++)
	{
		board[i][j]=' ';
	}
}
}
//��ӡ�������
void DisplayBoard(char board[ROW][COL],int row,int col)
{  
	int i; 
	printf("\n");
	for(i=0;i<row;i++)
	{
		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);	
		if(i<ROW-1)printf("---|---|---\n");

	}
}
//�����
void GamerMove(char board[ROW][COL],int row,int col)
{   
	int i,j;
	while(1)
	{
		printf("�����,������һ������---->");
		scanf_s("%d %d",&i,&j);

		if(i>3||i<1||j>3||j<1)//��ֹ�����ȥ��
		{
			printf("������������,������ѡ��");
		}
		else if(board[i-1][j-1]=='#'||board[i-1][j-1]=='*'){printf("�������ظ�������");}
		else
		{
			board[i-1][j-1]='#';
			DisplayBoard(board,ROW,COL);
			break;
		}

	}
}

//������
void ComputerMove(char board[ROW][COL],int row,int col)
{
	int i,j;
	printf("������");
	while(1)
	{
		srand((unsigned)time(NULL));
		//�����,
		i=rand()%row;
		Sleep(60);
		j=rand()%col;//�����

		if(board[i][j]=='*'||board[i][j]=='#'){}//��ֹ�����ȥ��
		else
		{
			board[i][j]='*';
			DisplayBoard(board,ROW,COL);
			break;
		}
	}

}
//�ж�
char judge(char board[ROW][COL],int row,int col)
{   
	int i,j;
	//3����ͬ���
	for(i=0;i<ROW;i++)
	{if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]){return board[i][0];}}
	//3����ͬ����
	for(j=0;j<ROW;j++)
	{if(board[0][j]==board[1][j]&&board[2][j]==board[1][j]){return board[0][j];}}
	//3����ͬб�ŵ�
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]){return board[1][1];}
	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]){return board[1][1];}
	//����Ƿ��пո�ĵط�
	for(i=0;i<ROW;i++)
	{   
		for(j=0;j<COL;j++)
		{
			if(board[i][j]==' ')return 'c';//�п���Ϸ����
		}
	}
	return 0;

}

