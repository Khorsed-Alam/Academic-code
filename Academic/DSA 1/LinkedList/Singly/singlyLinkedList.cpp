#include<iostream>
using namespace std;

struct node
{
    int val;
    node *next;
};

node *head=NULL;

void Insertchoice()
{
    cout<<"1. Insert First: "<<endl;
    cout<<"2. Insert Last: "<<endl;
    cout<<"3. Insert At Position: "<<endl;
    cout<<"4. Insert Middle of the List: "<<endl;
    cout<<"5. Insert after value: "<<endl;
    cout<<"6. Delete First:  "<<endl;
    cout<<"7. Delete Last: "<<endl;
    cout<<"8. Delete After Value: "<<endl;
    cout<<"9. Delete At Any Position : "<<endl;
    cout<<"10. Search: "<<endl;
    cout<<"11. Reverse Print List: "<<endl;
    cout<<"12. Number of Node:"<<endl;
    cout<<"13. Print Nth node Value: "<<endl;
    cout<<"14. Print Nth to mid of the List: "<<endl;

    cout<<"0. Print Linked List: "<<endl;

}
void PrintList()
{
    cout<<"List: ";
    if(head==NULL)
    {
        cout<<"List is empty:"<<endl;

    }
    else
    {
        node* temp=head;
        while(temp!= NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}

void InsertFirst(int X)
{
    node *newitem= new node();
    newitem->val=X;
    newitem->next=head;
    head=newitem;
}

void InsertLast(int X)
{
    node *newItem= new node();
    newItem->val=X;
    newItem->next=NULL;

    if(head==NULL)
    {
        head=newItem;
        return ;
    }
    else
    {
        node *temp=head;
        while(temp-> next!= NULL)
        {
            temp=temp->next;
        }
        temp->next=newItem;
    }
}

void InsertAtPosition(int X, int pos)
{
    node *newItem=new node();
    newItem ->val= X;

    if(pos==0)
    {
        newItem->next=head;
        head=newItem;
    }
    else
    {
        node *temp=head;
        for(int i=1; i<pos-1; i++)
        {
            temp=temp->next;
        }
        newItem ->next= temp->next;
        temp->next= newItem;
    }
}

void  InsertMiddleoftheList(int X)
{
    node *newItem=new node();
    newItem->val=X;

    if(head==NULL)
    {
        cout<<"List is empty... Cann't insert in the middle";
        return;
    }
    else
    {
        node *temp=head;
        int count =0;
        while (temp!=0)
        {
            count++;
            temp=temp->next;
        }
        int mid=count /2;

        if(count %2==0)
        {
            cout<<"List is Even so Mid Doesnt exist"<<endl;
            return;
        }
        else
        {
            temp=head;
            for(int i=0; i<mid-1; i++)
            {
                temp=temp->next;
            }
            newItem ->next=temp->next;
            temp->next=newItem;
        }

    }

}
void InsertAfterValue(int Val, int X)
{
    node *newItem=new node();
    newItem->val=X;

    if(head==NULL)
    {
        cout<<"List is empty... Can not Insert after value: ";
        return ;
    }
    else
    {
        node *temp=head;
        while(temp!= NULL && temp->val !=Val)
        {
            temp=temp->next;
        }
        newItem->next=temp->next;
        temp->next= newItem;
    }
}

void DeleteFirst()
{
    if (head==NULL)
    {
        return ;
    }
    else
    {
        head=head->next;

    }

}

void DeleteLast()
{
    node *temp= head;
    node *prev=NULL;

    if(head==NULL)
    {
        return ;
    }
    else
    {

        while(temp->next!= NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        if(prev==NULL)
        {
            head= NULL;
        }
        else
        {
            prev->next= NULL;
        }


    }


}
 

void DeleteAfterVal(int X)
{
    if(head==NULL)
    {
        cout<<"List is empty. Can not delete after value: "<<endl;
        return ;
    }
    else
    {
        node *temp=head;
        while(temp->val !=NULL)
        {
            if(temp->next==NULL)
            {
                cout<<"Value not Founded in the list: ";
                return ;
            }
            temp=temp->next;

            node* deleteAfter= temp->next;
            temp->next= temp->next->next;
            delete deleteAfter;

        }
    }
}
void DeleteAtPosition(int delPos)
{
    if (head == NULL)
    {
        cout << "List is empty .. can not delete at any position" << endl;
        return;
    }
    if (delPos == 0)
    {
        node* tempNode = head;
        head = head->next;
        delete tempNode;
        return;
    }

    node* temp = head;
    int i = 0;
    while (i < delPos - 1 && temp != NULL)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL || temp->next == NULL)
    {
        cout << "Invalid Position" << endl;
        return;
    }

    node* PositionValue = temp->next;
    temp->next = temp->next->next;
    delete PositionValue;
}

void SearchVal(int searchVal)
{
    if(head==NULL)
    {
        cout<<"List is empty!, can not Search"<<endl;
        return ;
    }
    node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        if(temp-> val==searchVal)
        {
            cout<<"Value "<<searchVal<<" Found in the list. "<<endl;
            cout<<"Position: "<<count<<endl;
            return ;
        }
        temp=temp->next;
        count ++;
    }
    cout<<"Value "<<searchVal<<"Not found in the list "<<endl;
}

void PrintReverse(){
if(head==NULL){
    cout<<"List is Empty: "<<endl;
    return ;
}
node *current =head;
node *prev=NULL;
node *next=NULL;

while(current!= NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}
head=prev;
cout<<"Reverse List: ";
node *temp=head;
while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
}
}

void CountNode(){
if(head==NULL){
    cout<<"List is empty!! "<<endl;
    return ;
}
else{
    node *temp=head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    cout<<"Number of node in the list: "<<count<<endl;
    cout<<endl;
}
}

void PrintNthNode(int NodeNum){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return ;
    }else{
        node *temp =head;

        int i=0;
        while(i<NodeNum){
            i++;
            temp=temp->next;
        }
        cout<< temp->val<<endl;

    }

}
void PrintNthMid(int NodeN){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return ;
    }else{
        node *temp=head;
        int count =0;
        while(temp!=NULL){
            count++;
            temp=temp->next;

        }
        int mid= count/2;
        int nod=mid-NodeN;

        PrintNthNode(nod);
        return;

    }


}



int main()
{
    while (true)
    {
        Insertchoice();
        int ch;

        cout<<"Enter Choice number: ";
        cin>>ch;
        if(ch==0)
        {
            PrintList();
        }

        if(ch==1)
        {
            int X;
            cout<<"Enter a value to insert in First: ";
            cin>>X;
            InsertFirst(X);
        }
        else if(ch==2)
        {
            int X;
            cout<<"Enter a value to insert in Last: ";
            cin>>X;
            InsertLast(X);

        }
        else if(ch==3)
        {
            int X,pos;
            cout<<"Enter Insert value and List position : ";
            cin>> X>>pos;
            InsertAtPosition(X,pos);
        }
        else if(ch==4)
        {
            int X;
            cout<<"Enter value for Insert middle of the List: ";
            cin>>X;
            InsertMiddleoftheList(X);
        }
        else if(ch==5)
        {
            int Val, X;
            cout<<"Enter Target value and Insert Value: ";
            cin>>Val>>X;
            InsertAfterValue(Val,X);
        }
        else if(ch==6)
        {
            DeleteFirst();
        }
        else if(ch==7)
        {
            DeleteLast();
        }
        else if(ch==8)
        {
            int X;
            cout<<"Enter Target value: ";
            cin>>X;
            DeleteAfterVal(X);
        }
        else if(ch==9)
        {
            int delPos;
            cout<<"Enter Position value for delete: ";
            cin>>delPos;

            DeleteAtPosition(delPos);
        }
        else if (ch==10)
        {
            int searchVal;
            cout<<"Enter Value to Search: ";
            cin>>searchVal;

            SearchVal(searchVal);
        }
        else if(ch==11){
            PrintReverse();
            cout<<endl;
        }
        else if(ch==12){
            CountNode();
        }
        else if(ch==13){
            int NodeNum;
            cout<<"Enter node number to print value: ";
            cin>>NodeNum;

            PrintNthNode(NodeNum);
        }
        else if(ch==14){
            int NodeN;
            cout<<"Enter node Number : "<<endl;
            cin>>NodeN;
            PrintNthMid(NodeN);
        }
    }
}
