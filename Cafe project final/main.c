#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>

int token=0, tokens[60], payment_counter=0;
struct user
{
    char username[20];
    char password[20];
};
struct user s[2] = {{"Orpa", "1253314"}, {"Deepeta", "424642"}};

int login()
{
    printf("=====Login=====\n\n");

    char name[20];
    char pass[20];

    printf("Username: ");
    scanf("%s", &name);

    printf("Password: ");
    scanf("%s", &pass);

    for(int i = 0; i < 2; i++)
        if((strcmp(name, s[i].username)==0) && (strcmp(pass, s[i].password)==0))
            return i;

    return -1;
}

int main_sheet()
{
    int i;
    system("cls");

    printf("\n\n\n\n\n\t\t=========== Welcome to Brew That: Coffee Shop! =========== \n\t\t\t\t\t\t\t\n\n");

    printf("                   _______________________________________________ \n");
    printf("                    ---------------------------------------------  \n");
    printf("                   |                                             | \n");
    printf("                   |   Please select any of the options below:-  | \n");
    printf("                   |                                             | \n");
    printf("                   |   1. Place New Order.                       | \n");
    printf("                   |                                             | \n");
    printf("                   |   2. Bill Payment.                          | \n");
    printf("                   |                                             | \n");
    printf("                   |   3. Exit.                                  | \n");
    printf("                   |                                             | \n");
    printf("                    ---------------------------------------------  \n");
    printf("                    ______________________________________________ \n");


    printf("\n\n\n\n                         Enter Your Choice: ");
    int n;
    scanf("%d",&n);
    return n;
}
int menu_order()
{
    int arNo[30],decision,arquantity[30],bill[30],counter=0;
    work:
        system("cls");
        printf("\n\t\t\t\tMenu\n\t\t\t\t----------\n");
        printf("\n\tHOT BEVERAGES :\n\n");
        printf("\t1. Espresso ..............................120/=\t  \n");
        printf("\t2. Latte Macchiato.............................. 40/=\n");
        printf("\t3. Americano...............................  70/=\t \n");
        printf("\t4. Cappuccino ..........................  90/=\t \n");
        printf("\t5. Caramel Cappuccino ..........  90/=\t \n");
        printf("\t6. Cafe Latte ...................  90/=\n");
        printf("\t7. Mocha ....................  65/=\n");
        printf("\t8. Caramel Macchiato ..........  90/=\t \n");
        printf("\t9. Hazelnut Latte ..........  90/=\t \n");
        printf("\t10.White Chocolate ..........  90/=\t \n");
        printf("\t11.Hot Chocolate ..........  90/=\t \n");
        printf("\t12. Affogato ........................  65/=\t  \n");
        printf("\t13.  Irish coffee ..........  90/=\t \n");
        printf("\t14. Turkish coffee ..........  90/=\t \n");
        printf("\n\tCOLD BEVERAGES :\n\t\t\t\t\t\t\t \n");
        printf("\t15. Iced Latte ........................  65/=\t  \n");
        printf("\t16. Iced Coffee(regular) ........................... 230/=\t \n");
        printf("\t17. Choco Mint ..........  90/=\t \n");
        printf("\t18. Oreo Cappuccino ..........  90/=\t \n");
        printf("\t19. Frappe  ..........  90/=\t \n");
        printf("\t20. Iced Mocha ..........  90/=\t \n");
        printf("\t21. Iced Macchiata ..........  90/=\t \n");
        printf("\n\tDESSERTS :\n\n");
        printf("\t22. Brownie ..........  90/=\t \n");
        printf("\t23. Apple Pie ..........  90/=\t \n");
        printf("\t24. Chocolate Cake ..........  90/=\t \n");
        printf("\t25. Tiramisu ..........  90/=\t \n");
        printf("\t26. Cheesecake ..........  90/=\t \n");
        printf("\t27. Glazed Donut ..........  90/=\t \n");
        printf("\t28. Cookies ..........  90/=\t \n");
        printf("\t29. Chocolate Ice-cream ..........  90/=\t \n");
        printf("\t30. Vanilla Ice-cream..........  90/=\t \n");
        for(;;)
        {
            counter++;
            printf("\t Enter Item No.: ");
            scanf("%d", &arNo[counter-1]);
            if(arNo[counter-1]==0)
            {
                break;
            }
            printf("\t Enter Quantity: ");
            scanf("%d", &arquantity[counter-1]);
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\tThank you for ordering!\n\n\n\n\n\n\t\t\t <Enter 1 for your bill>\n\t\t\tEnter your choice: ");
        scanf("%d", &decision);
        printf("\n\n\n\n\n\n\n\n");

        counter--;

        if(decision==1)
        {
            Bill_show(arNo,arquantity,counter);
        }
        else if(decision==2)
        {
            goto work;
        }
        else if(decision==3)
        {
            main();
        }
}

void Bill_show(int arNo[], int arquantity[], int counter)
{
    int n;
    system("cls");
    int i, sum=0;
    int costs[30]={                     }
    char items[30][]={"Espresso","Latte Macchiato","Americano","Cappuccino","Caramel Capuccino","Cafe Latte","Mocha","Caramel Macchiato","Hazelnut Latte","White Chocolate","Hot Chocolate","Affogato","Irish Coffee","Turkish Coffee","Iced Latte","Iced Coffee","Choco Mint","Oreo Cappuccino","Frappe","Iced Mocha","Iced Macchiata","Brownie","Apple Pie","Chocolate Cake","Tiramisu","Cheesecake","Glazed Donut","Cookies","Chocolate Ice-cream","Vanilla Ice-cream"};
    printf("\n\nYour Bill Total:\n\n\n\t\tItem(s)\t\t    Item Quantity\t\t      Price\n\n\n\n");

    for(i=0;i,counter;i++)
    {
        printf("\t%2d. %-16s ________\t%-5d piece(s) ____ %7d\n",i+1,items[arNo[i]-1],arquantity[i],arquantity[i]*prices[arNo[i]-1]);
        sum=sum+(prices[arNo[i]-1]*arquantity[i]);
    }

    printf("n\n\n\n\t\t\t\t\t\t\t\t  Gross Total = %d\n\n\n\n",sum);
    token++;
    tokens[token]=sum;
    printf("\tYour token no. is %d. Please use and show this provided token while paying your bill!\n\n\n\n\n\t\t\t<Press (1) to order again>\n\n\t\t\t<Press (2) to go to Main Menu Bar>\n\n\t\n\t\t\tEnter your choice: ",token);
    scanf("%d", &n);
    if(n==0)
    {
        menu_order();
    }
    else if(n==2)
    {
        main();
    }
}

void Bill_Show()

int main()
{
    printf("o.oOOOoo                              oOoOOoOOo o                  \n");
    printf(" o     o                                  o     O                  \n");
    printf(" O     O                                  o     o              O   \n");
    printf(" oOooOO.                                  O     O             oOo  \n");
    printf(" o     `O `OoOo. .oOo. 'o     O           o     OoOo. .oOoO'   o   \n");
    printf(" O      o  o     OooO'  O  o  o           O     o   o O   o    O   \n");
    printf(" o     .O  O     O      o  O  O           O     o   O o   O    o   \n");
    printf(" 0OooOO'   o     `OoO'  `Oo'oO'           o     O   o `OoO'o   `oO \n");


    printf("                                                                             .-. .-.              .                              \n");
    printf("                                                                             |   |                |                              \n");
    printf("                                                                    .-. .-. -|- -|-  .-.      .--.|--.  .-. .,-.        .  - -.  \n");
    printf("                                                                   (   (   ) |   |  (.-'      `--.|  | (   )|   )     .'       ) \n");
    printf("                                                                    `-' `-'  '   '   `--'     `--''  `- `-' |`-'    .'      --:  \n");
    printf("                                                                                                            |        `.        ) \n");
    printf("                                                                                                            '          `.  - -'  \n");
    sleep(3);
    system("cls");

    while (1)
    {
        int isLogin = login();

        if (isLogin != -1)
        {
            printf("\nLogin Successful.\n\n");
            printf("Welcome back user!\n\n", s[isLogin].username);
            break;
        }
        else
            printf("\nLogin Unsuccessful.\n\nPlease Enter a valid username and password.\n\n");
    }
    sleep(2);


    int k,j,n,d;
    k = main_sheet();

    if(k==1)
    {
        menu_order();
    }

    else if(k==2)
    {
        Bill_Payment();
    }

    else
    {
        system("cls");
        printf("\n\n\n\n\n\t\t=========== Brew That: Coffee Shop <3 =========== \n\t\t\t\t\t\t\t\n\n");
        printf("\n\n\n\t\t\tCurrent session order received  : %d\n\n",token);
        printf("\t\t\tCurrent session bill paid      : %d\n\n",payment_counter);
        if(payment_counter<token)
        {printf("\t\t\t\tLeft yet to pay          : %d\n\n\n\n\n\n",token-payment_counter);}
        else
        {
            printf("\n\n\n\n\n\n");
        }
        return 0;
    }

 }


