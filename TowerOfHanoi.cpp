/* Program To Implement Tower Of Hanoi Alogithm Using Recursion.
This program shows the movements of disk from one tower to another when a key is pressed. */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class tower
{
	int *t1,*t2,*t3;
	int x,y,z;
	public:
	void disp_tower();
	void move_disk(int tx,int ty);
	void toh(int n,int a,int b,int c);
	tower(int no);
	~tower();
};

tower :: tower(int no)
{
	t1 = new int[no+1];
	t2 = new int[no+1];
	t3 = new int[no+1];
	x  = no;
	y  = z = 0;

	for(int i=0,j=no ; i<no ; i++,j--)
	{
		t1[i] = j;
		t2[i] = t2[i] = 0;
	}
	t1[no] = t2[no] = t3[no] = 0;
}

tower :: ~tower()
{
	delete []t1;
	delete []t2;
	delete []t3;
}
void tower :: disp_tower()
{
	clrscr();
	cout<<"

 X :: ";
	for(int i=0;i<x;i++)
	{
		cout<<" "<<t1[i];
	}
	cout<<"

 Y :: ";
	for(i=0;i<y;i++)
	{
		cout<<" "<<t2[i];
	}
	cout<<"

 Z :: ";
	for(i=0;i<z;i++)
	{
		cout<<" "<<t3[i];
	}
	getch();
}

void tower :: toh(int n,int tx,int ty,int tz)       //x to y using z
{

	if(n>=1)
	{
		toh(n-1,tx,tz,ty);
		move_disk(tx,ty);         	//x to y
		disp_tower();
		toh(n-1,tz,ty,tx);
	}
}

void tower :: move_disk(int tx,int ty)
{
	switch(tx)
	{
		case 1:
			{
				if(ty==2)
					t2[y++] = t1[--x];
				else
					t3[z++] = t1[--x];
			}break;
		case 2:
			{
				if(ty==1)
					t1[x++] = t2[--y];
				else
					t3[z++] = t2[--y];
			}break;
		case 3:
			{
				if(ty==1)
					t1[x++] = t3[--z];
				else
					t2[y++] = t3[--z];
			}break;
	}//end of switch
}
//------------------------------------------------------------------------
---
int main(void)
{
	clrscr();
	cout<<"Enter the no. of disks::";
	int no;
	cin>>no;
	tower obj(no);
	obj.disp_tower();
	obj.toh(no,1,2,3);
	getch();
	return 0;
}
