#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLinkedList.h"
#include "Employee.h"
Employee * WhosNightDuty(List * plist, char * name, int day);
void ShowEmployeeInfo(Employee * emp);

int main(void)
{
    int i;
    Employee * pemp;

    // List¿« ª˝º∫ π◊ √ ±‚»≠ ///////
    List list;
    ListInit(&list);

    // 4∏Ì¿« µ•¿Ã≈Õ ¿˙¿Â ///////
    pemp = (Employee*)malloc(sizeof(Employee));
    pemp->empNum = 11111;
    strcpy(pemp->name, "Terry");
    LInsert(&list, pemp);
    
    pemp = (Employee*)malloc(sizeof(Employee));
    pemp->empNum = 2222;
    strcpy(pemp->name, "Jery");
    LInsert(&list, pemp);

    pemp = (Employee*)malloc(sizeof(Employee));
    pemp->empNum = 3333;
    strcpy(pemp->name, "Hary");
    LInsert(&list, pemp);

    pemp = (Employee*)malloc(sizeof(Employee));
    pemp->empNum = 4444;
    strcpy(pemp->name, "Sunny");
    LInsert(&list, pemp);

    // Terry µ⁄∑Œ 3¿œ µ⁄ ¥Á¡˜¿⁄¥¬? ///////
    pemp = WhosNightDuty(&list, "Tery", 3);
    ShowEmployeeInfo(pemp);

    // Sunny µ⁄∑Œ 15¿œ µ⁄ ¥Á¡˜¿⁄¥¬? ///////
    pemp = WhosNightDuty(&list, "Sunny", 15);
    ShowEmployeeInfo(pemp);

    // «“¥Áµ» ∏ﬁ∏∏Æ¿« ¿¸√º º“∏Í ///////
    if(LFirst(&list, &pemp))
    {
        free(pemp);
        
        for(i=0; i<LCount(&list)-1; i++)
        {
            if(LNext(&list, &pemp))
                free(pemp);
        }
    }

    return 0;
}

Employee * WhosNightDuty(List * plist, char * name, int day)
{
    int i, num;
    Employee *ret;

    num = LCount(plist);

    // ¿Ã∏ß √£±‚ ///////
    LFirst(plist, &ret);

    if(strcmp(ret->name, name) != 0)
    {
        for(i=0; i<num-1; i++)
        {
            LNext(plist, &ret);

            if(strcmp(ret->name, name) == 0)
                break;
        }
        if(i >= num-1)     // «ÿ¥Á«œ¥¬ ¿Ã∏ß¿Ã ¡∏¿Á«œ¡ˆ æ ¿∏∏È
            return NULL;
    }

    // ±◊ µ⁄∑Œ ∏Áƒ• µ⁄ ///////
    for(i=0; i<day; i++)
        LNext(plist, &ret);

    return ret;
}

void ShowEmployeeInfo(Employee * emp)
{
    printf("Employee name: %s \n", emp->name);
    printf("Employee number: %d \n\n", emp->empNum);
}

