#include "game.h"
//��ӡ��һ���˵�
void menu()
{
	printf("*************************************************\n");
	printf("****************����1����ʼ��Ϸ*****************\n");		
	printf("****************����0���˳���Ϸ*****************\n");
	printf("*************************************************\n");
	printf("����������----->");
}
void game()
{   
	char board[ROW][COL],result;
	//��ʼ����������Ϊ��
	IntiBoard(board,ROW,COL);
	//��ӡ�������
	DisplayBoard(board,ROW,COL);
	while(1)
	{
		//�����
		GamerMove(board,ROW,COL);
		judge(board,ROW,COL);
		//�ж�
		result=judge(board,ROW,COL);
		if( result=='*'){printf("����Ӯ��");break;}
		if( result=='#'){printf("���Ӯ��");break;}
		if(result=='c' ){}//ɾ��continue
		if(result==0) printf("ƽ����");
		//������
		ComputerMove(board,ROW,COL);
		//�ж���Ϸ���̺�ʤ��
		judge(board,ROW,COL);
		result=judge(board,ROW,COL);
		if( result=='*'){printf("����Ӯ��");break;}
		if( result=='#'){printf("���Ӯ��");break;}
		if(result=='c' ){continue;}
		if(result==0) printf("ƽ����");
	}
}


int main()
{   
	int input;
	do{
		menu();
		scanf_s("%d",&input);
		switch(input)
		{
		case 1:
			printf("���뾮������Ϸ");
			game();
			goto end;
		case 0:
			printf("�˳���Ϸ\n");
			goto end;
		default:
			printf("�������,������ѡ��\n");
		}
	}while(1);

end: return 0;
}
