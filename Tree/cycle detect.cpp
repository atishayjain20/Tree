#include<bits/stdc++.h>
using namespace std;
struct linked{
	int data;
	linked* next;
	linked(int value){
		data=value;
		next=NULL;
	}
};
struct linked *where(struct linked *pos,struct linked *l1)
{
	struct linked *i=l1;
	struct linked *j=pos;
	while(true)
	{
		i=i->next;
		j=j->next;
		if(i==j)
		{
			return i;
		}
	}
	return NULL;
}
struct linked* cycledetect(struct linked *l1)
{
	struct linked *i=l1,*j=l1;
	int c=0;
	while(true)
	{
	   	i=i->next;
		j=j->next->next;
//		cout<<i<<" "<<j<<endl;
		if(i==j)
			return j;
//		l1=l1->next;
//		c++;
	}
	return i;
}
int main()
{
	linked *l1=new linked(5);
	l1->next=new linked(4);
//	cout<<l1->next->data;
	l1->next->next=new linked(3);
	linked *i,*j;
	i=l1->next;
	j=l1->next;
//	i==j?cout<<"hello":cout<<"bye";
	l1->next->next->next=new linked(2);
	l1->next->next->next->next=new linked(1);
	l1->next->next->next->next->next=l1->next->next;
	struct linked *pos=cycledetect(l1);
	struct linked *c=where(pos,l1);
	cout<<c->data;
	return 0;
}
