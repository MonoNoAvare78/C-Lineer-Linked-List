#include <stdlib.h>
#include <stdio.h>


struct node {
  int data;
  struct node * next;
};

struct node * start=NULL;
struct node * temp = NULL;
struct node * temp2 = NULL;

void addbeg(){
    int sayi;
    struct node * eklenecek = (struct node *) malloc (sizeof(struct node));
    printf("kac eklemek istiyosun");
    scanf("%d", &sayi);
    eklenecek->data=sayi;
    if (start==NULL){
        start=eklenecek;
        start->next=NULL;
    }
    else{
        eklenecek->next=start;
        start=eklenecek;
    }
}


void addend()
{
    int sayi;
    struct node * eklenecek = (struct node *) malloc (sizeof(struct node));
    printf("kac eklemek istiyosun");
    scanf("%d", &sayi);
    eklenecek->data=sayi;
    if(start==NULL)
    {
        start=eklenecek;
        start->next=NULL;
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=eklenecek;
        eklenecek->next=NULL;
    }
    
}
void addbefore()
{
    int sayi , bef;
    struct node * eklenecek=(struct node * )malloc(sizeof(struct node));
    printf("eklemek istediðiniz sayýyý ve hangi sayýdan önce eklemek istedðiniz yazýnýz ");
    scanf("%d %d", &sayi , &bef );
    
    eklenecek->data=sayi;
    if(start==NULL)
    {
        start=eklenecek;
        start->next=NULL;
    }
    else
    {   
        temp=start;
        while(temp->next->data !=bef )
        {
            temp=temp->next;
        }
        temp2=temp->next;
        eklenecek->next=temp2;
        temp->next=eklenecek;
       
        
    }
}

void delbeg(){
    if(start==NULL){
        printf("bastan silinecek eleman yok");
    }
    else{
        temp=start;
        start=start->next;
        free(temp);
    }
}

void delend()
{
    if(start->next!=NULL)
    {
        temp=start;
        while(temp->next->next!=NULL)
        {   
            temp=temp->next;
        }
        
        temp->next=NULL;
        free(temp->next);
    }
    else
    {
       delbeg();
        
    }
}
void delete()
{
    int sayi;
    printf("hangi sayiyi silmek istiyorsun?");
    scanf("%d" ,&sayi);
    if(start->data==sayi)
    {
        delbeg();
    }
    else 
    {   
        temp=start;
        while(temp->next->data!=sayi)
        {
            temp=temp->next;
        }
        temp2=temp->next->next;
        free(temp->next);
        temp->next=temp2;
    }
    
}

void display(){
    if(start==NULL){
        printf("yazcak bisey yok");
    }
    else{
        temp=start;
        while(temp->next!=NULL){
            printf("%d ", temp->data);
            temp=temp->next;
        }
        printf("%d\n", temp->data);
    }
}


int main()
{
    
}

