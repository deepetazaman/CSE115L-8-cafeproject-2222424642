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

//code for the main menu bar
int main_sheet()
{
    int i;
    system("cls");
    system("color 0D");

    printf("\n\n\n\n\n              ===========              Welcome                =========== \n");
    printf("              ===========                 To                  =========== \n");
    printf("              ===========      BREW THAT: COFFEE SHOP <3!     =========== \n");


    printf("\n                   _______________________________________________ \n");
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

//code for the menu list, selection and ordering section
int menu_order()
{
    int arNo[30],decision,arquantity[30],bill[30],counter=0;
    work:
        system("cls");
        system("color 0F");
        printf("\n\n\t\t\t   Menu\n\t\t\t----------\n");
        printf("\n\tHOT BEVERAGES :\n\n");
        printf("\t1.  Espresso .............................  120/=\n");
        printf("\t2.  Latte Macchiato ......................  220/=\n");
        printf("\t3.  Americano ............................  110/=\n");
        printf("\t4.  Cappuccino ...........................  100/=\n");
        printf("\t5.  Caramel Cappuccino ...................  130/=\n");
        printf("\t6.  Cafe Latte ...........................  200/=\n");
        printf("\t7.  Mocha ................................  130/=\n");
        printf("\t8.  Caramel Macchiato ....................  230/=\n");
        printf("\t9.  Hazelnut Latte .......................  140/=\n");
        printf("\t10. Affogato .............................  165/=\n");
        printf("\t11. Irish coffee .........................  180/=\n");
        printf("\t12. Turkish coffee .......................  210/=\n");
        printf("\t13. Hot Chocolate ........................  100/=\n");
        printf("\t14. White Chocolate ......................  110/=\n");
        printf("\n\tCOLD BEVERAGES :\n\t\t\t\t\t\t\t \n");
        printf("\t15. Iced Latte ...........................  200/=\n");
        printf("\t16. Iced Coffee(regular) .................  90/=\n");
        printf("\t17. Choco Mint ...........................  130/=\n");
        printf("\t18. Oreo Cappuccino ......................  220/=\n");
        printf("\t19. Frappe ...............................  190/=\n");
        printf("\t20. Iced Mocha ...........................  150/=\n");
        printf("\t21. Iced Macchiata .......................  220/=\n");
        printf("\n\tDESSERTS :\n\n");
        printf("\t22. Brownie ..............................  80/=\n");
        printf("\t23. Apple Pie ............................  90/=\n");
        printf("\t24. Chocolate Cake .......................  80/=\n");
        printf("\t25. Tiramisu .............................  110/=\n");
        printf("\t26. Cheesecake ...........................  100/=\n");
        printf("\t27. Glazed Donut .........................  50/=\n");
        printf("\t28. Cookies ..............................  60/=\n");
        printf("\t29. Chocolate Ice-cream ..................  60/=\n");
        printf("\t30. Vanilla Ice-cream.....................  50/=\n");
        printf("\n\n\tOrder your item: (Enter 0 to finish order)\n");
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
        system("color 0F");
        printf("\n\n\n\n\n\n\n\n\n\n\t\tThank you for ordering!\n\n\n\n\n\n");
    printf("                            )   (                    \n");
    printf("                           (    ) )                  \n");
    printf("                             ) ( (                   \n");
    printf("                           _______)_                 \n");
    printf("                        .-'---------|                \n");
    printf("                       ( c|.........|                \n");
    printf("                        '-.||||||||||                \n");
    printf("                           '________'                \n");
    printf("                            '------'                 \n");
    printf("\n\n\t\t<Press (1) for your bill>\n\t\t\tEnter your choice: ");
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

/*code for presenting the Bill*/
int Bill_show(int arNo[], int arquantity[], int counter)
{
    int n;
    system("cls");
    system("color B0");
    int i, sum=0;
    int price[30]={120,220,110,100,130,200,130,230,140,165,180,210,100,110,200,90,130,220,190,150,220,80,90,80,110,100,50,60,60,50};
    char items[30][50]={"Espresso","Latte Macchiato","Americano","Cappuccino","Caramel Capuccino","Cafe Latte","Mocha","Caramel Macchiato","Hazelnut Latte","Affogato","Irish Coffee","Turkish Coffee","Hot Chocolate","White Chocolate","Iced Latte","Iced Coffee","Choco Mint","Oreo Cappuccino","Frappe","Iced Mocha","Iced Macchiata","Brownie","Apple Pie","Chocolate Cake","Tiramisu","Cheesecake","Glazed Donut","Cookies","Chocolate Ice-cream","Vanilla Ice-cream"};
    printf("\n\nYour Bill Total:\n\n\n\t\tItem(s)\t\t    Item Quantity\t\t    Cost\n\n\n\n");

    for(i=0;i<counter;i++)
    {
        printf("      %2d. %-16s ---------   %d piece(s)  ----------  %7d\n",i+1,items[arNo[i]-1],arquantity[i],arquantity[i]*price[arNo[i]-1]);
        sum=sum+(price[arNo[i]-1]*arquantity[i]);
    }

    printf("n\n\n\n\t\t\t  Gross Total = %d\n\n\n\n",sum);
    token ++;
    tokens[token]=sum;
    printf("\tYour Token number= %d.\n\tPlease use and show this provided token while paying your bill!\n\n\n\n\n\t\t\t<Press (1) to order again>\n\n\t\t\t<Press (2) to go to Main Menu Bar>\n\n\t\n\t\t\tEnter your choice: ",token);
    scanf("%d", &n);
    printf("\n\n\n");
    if(n==1)
    {
        menu_order();
    }
    else if(n==2)
    {
        main();
    }
}


//the payment process section
void Bill_Payment()
{
    int k,i,cash,changer,n;
    redo:
    payment_counter++;
    system("cls");
    system("color 3F");
    printf("\n\n\n\t\t\tEnter your token number: ");
    scanf("%d",&k);
    printf("\t\t\tYour Gross Total Bill =%d",tokens[k]);
    work:
        printf("\n\t\t\tPay your Bill: ");
        scanf("%d",&cash);
        changer = cash-tokens[k];
        if(changer == 0)
        {
            printf("\n\t\tThank you for your payment! Have a wonderful day ahead!\n");
        }
        else if (changer<0)
            {
                system("cls");
                printf("\n\t\t\tAmount is insufficient. :(\n\t\tPlease pay the fair price of your bill\n");
                goto work;
            }
            else
            {
                 printf("\n\n\n\t\tReturned Amount: (%d-%d) = %d Tk.\n\t\t  ",cash,tokens[k],changer);

            printf("-------------------------------------------------------------\n");

            if(changer>=1000 )
                {printf("\n\t\t1000 Tk. note(s) = %d\n",changer/1000);
                changer=changer%1000;}
            if(changer>=500 && changer<1000)
            {printf("\n\t\t 500 Tk. note(s) = %d\n",changer/500);
            changer=changer%500;}
            if(changer>=100 && changer<500)
            {printf("\n\t\t 100 Tk. note(s) = %d\n",changer/100);
            changer= changer%100;}
            if(changer>=50 && changer<100)
            {printf("\n\t\t  50 Tk. note(s) = %d\n",changer/50);
            changer=changer%50;}
             if(changer>=10 && changer<50)
            {printf("\n\t\t  10 Tk. note(s) = %d\n",changer/10);
            changer=changer%10;}
            if(changer>=5 && changer<10)
            {printf("\n\t\t   5 Tk. note(s) = %d\n",changer/5);
            changer=changer%5;}
            if(changer>=2 && changer<5)
            {printf("\n\t\t   2 Tk. note(s) = %d\n",changer/2);
            changer=changer%2;}
            if(changer>=1 && changer<2)
            {printf("\n\t\t   1 Tk. note(s) = %d\n",changer/1);
            changer=changer%1;}

            printf("\t\t  ");
            printf("-------------------------------------------------------------\n");
            printf("\n\n\n\n\n\n\t\t\tThank you for your payment!\n\t\t   Have a wonderful day ahead!\n",changer);
}
printf("\n\n\t\t\t<Press (1) to pay another bill.>\n\t\t\t<Press (2) to go back to Main Menu Bar>\n\n\n\t\t\tEnter your choice: \t");
scanf("%d",&n);
if(n==2)
{
    main();
}
else if(n==1)
{
    goto redo;
}
}

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
    printf("                            )   (                                   `-' `-'  '   '   `--'     `--''  `- `-' |`-'    .'      --:  \n");
    printf("                           (    ) )                                                                         |        `.        ) \n");
    printf("                             ) ( (                                                                          '          `.  - -'  \n");
    printf("                           _______)_                 \n");
    printf("                        .-'---------|                \n");
    printf("                       ( c|.........|                \n");
    printf("                        '-.||||||||||                \n");
    printf("                           '________'                \n");
    printf("                            '------'                 \n");
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
    sleep(1);


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


