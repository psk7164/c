#include <stdio.h>
#include <stdlib.h>

/*
*	C���� ����
	���� �¼����� ���α׷�
*/


int main(void) {
	int seat[7][9] = { 0 };	//�¼� ǥ��
	int i, j;
	char reservation[3] = " ";
	char ch;
	int row=0, column=0;    //row : ��, column : ��

	for (;;) {

		printf("�¼��� �����Ͻðڽ��ϱ�?(yes = y | no = n) :");
		scanf_s("%c", &ch, sizeof(char));
		//printf("�¼� ����: %c\n", ch);
		system("cls");
		if (ch == 'y' || ch == 'Y') {
			fflush(stdin);  // enter���� ���ڷ� �Է��� �����Ƿ� fflush�� ���ش�.

			printf("����������������������������������������������������������������������������������������������������\n");
			printf("��     ----------------screen----------------     ��\n");
			printf("����������������������������������������������������������������������������������������������������\n\n\n");

			for (i = 0; i < 7; i++) {				//����ִ� �¼�	
				printf("%c\t", 65 + i);
				for (j = 0; j < 9; j++) {
					if (seat[i][j] == 1) {
						printf("�� ");
						seat[column][row] = 1;
					}
					else {
						printf("�� ");
					}
				}
				putchar('\n');
			}
			printf("\n \t1  2  3  4  5  6  7  8  9  \n");		// ��


			printf("������ �¼��� �������ּ���.(���ĺ��빮�ڷ� �Է����ּ���): ");					// A  B  C  D  E  F  G ��  
			scanf_s("%s", reservation, sizeof(reservation));			//65 66 67 68 69 70 71
																		//(int)reservation[0] - 65  <-- ���ĺ�  (int)reservation[1]-48 <--�Ϲݼ��� 
			if (reservation[0] > 71 || reservation[0]<65) {
				printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.: ");	
				scanf_s("%s", reservation, sizeof(reservation));				//A  B  C  D  E  F  G �� �ƴ� ��� �ٽ� �Է¹޴´�.
			}
			
			ch = getchar();		
			column = reservation[0] - 65;
			row = reservation[1] - 48 - 1;			//-1�� ���ش�.  

			//printf("%d %d\n", column, row);

			seat[column][row] = 1;			// 1�� �־� �ڸ��� ���ŵ� �¼� ǥ��

			printf("����������������������������������������������������������\n");
			printf("��   �¼��� ����Ǿ����ϴ�.  ��\n");
			printf("����������������������������������������������������������\n\n\n");
		}else {
			printf("�¼� ���� ���\n");
			break;
		}

	}

	return 0;
}
