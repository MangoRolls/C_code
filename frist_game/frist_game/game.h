#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#define ROW 3
#define COL 3
	//����������
//��ʼ������
	void IntiBoard(char board[ROW][COL],int row,int col);
		//��ӡ�������
	void DisplayBoard(char board[ROW][COL],int row,int col);
	   //�����
		void GamerMove(char board[ROW][COL],int row,int col);
		//������
		void ComputerMove(char board[ROW][COL],int row,int col);
		//�ж�
		char judge(char board[ROW][COL],int row,int col);