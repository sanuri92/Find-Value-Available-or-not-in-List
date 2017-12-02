#include<stdio.h>
#include<conio.h>
#include "BTH.h"

  int main(){
		int num,i;
		TreeNode *node,*target;
		int list[]={1,4,6,7,12,13,15,18,19,20,22,24};
		clrscr();
		CreateTree(&node);
			for(i=0;i<12;i++){

		TreeNode *newnode=(TreeNode*)malloc(sizeof(TreeNode));
		 newnode->entry=list[i];
		 newnode->index=i;
		 newnode->left=newnode->right=NULL;
		 node=InsertTree(node,newnode);
		 }
	 printf("Enter the ValueIndex finding Value from [1,4,6,7,12,13,15,18,19,20,22,24]: ");
	 scanf("%d",&num);

	 target=TreeSearch(node,num);
	 printf("The index is: %d",target->index);

	 getch();

	 return 0;
	 }