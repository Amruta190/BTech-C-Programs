#include<stdio.h>
struct address
{
    int d1,d2,d3;
    char street[50];
    char district[20];
    char state[20];
};
void main()
{
    struct address info;
    printf("Enter Door No:");
    scanf("%d %d %d",&info.d1,&info.d2,&info.d3);
    printf("\nEnter Street Name:");
    scanf("%s",info.street);
    fflush(stdin);
    printf("\nEnter District Name:");
    scanf("%s",info.district);
    printf("\nEnter State:");
    scanf("%s",info.state); 
    fflush(stdin);                    
    printf("\nDoor No:%d-%d-%d\n",info.d1,info.d2,info.d3);
    printf("Street:%s\n",info.street);
    printf("District:%s\n",info.district);
    printf("State:%s\n",info.state);                     
}
