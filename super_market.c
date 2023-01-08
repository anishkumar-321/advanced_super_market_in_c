
#include<stdio.h>
#include<stdlib.h>
//function declarations
void mall_design();
void transportation_charges();
void floors_description();
void floor1();
void floor2();
void floor3();
void floor4();
void cart();
void delete_all_items();
void previous_floor();
void payment_modes();
void finally();
void delete_item();
void final_design();
//global identifiers
 void (*fp[4])(void)={floor1,floor2,floor3,floor4};
int tshirts=0,boxers=0,pants=0,belts=0,inner_wears=0,socks=0,shorts=0,shirts=0;
int apples=0,kiwis=0,oranges=0,watermelon=0,pomegranets=0,bananas=0,beans=0,cucumber=0;
int harrier_AC=0,crompton_fans=0,decorative_fans=0,pedestal_fans=0,Aqua_gaurd_purifier=0,Philips_vaccum_cleaner=0,oneplus_TV=0;
int stapler=0,eraser=0,highlighter=0,fountain_pen=0,books=0;
int trans=0,floors=0,total=0,fruit=0,clothing=0,home=0,state=0,book,bill=0,method=0,count=0,amount=0,pin=0,press=0,quantity=0,leave=0,deletee=0,mall=0,index=0;
unsigned long long int number=0,mobile=0,pincode=0;
char str[50];
//function definitions
void mall_design(){
   printf("         ##################################################################################\n");
   printf("         #   *       *   ******   *          ******         *******    ***  ***   ******  #\n");
   printf("         #   *       *   ******   *          *             *       *   * *  * *   ******  #\n");
   printf("         #   *  * *  *   *        *          *             *       *   * **** *   *       #\n");
   printf("         #   * *   * *   ******   *******    *******        *******    *      *   ******  #\n");
   printf("         #                                                                                #\n");
   printf("         #                            *********     ******                                #\n");
   printf("         #                                *       *        *                              #\n");
   printf("         #                                *       *        *                              #\n");
   printf("         #                                *       *        *                              #\n");
   printf("         #                                *         ******                                #\n");
   printf("         #                                                                                #\n");
   printf("         #                                                                                #\n");
   printf("         #          * *  *  *             * *     * *   * * * *  * * * *   *********      #\n");
   printf("         #          *         *           *  *   *  *  *      *  *      *      *          #\n");
   printf("         #          *          *    ****  *    *    *  * *  * *  ** * * *      *          #\n");
   printf("         #          *         *           *         *  *      *  * *           *          #\n");
   printf("         #          * * * * *             *         *  *      *  *   *         *          #\n");
   printf("         ##################################################################################\n");
printf("\n\n\n");
printf("NOTE:/* PLEASE BE CAREFUL THAT YOU MUST SANTISE AND BE IN MASK BEFORE ENETRING THE MALL*/\n");
 transportation_charges();
}
void transportation_charges(){
   label:
printf("parking charge details::\n");
printf("1.CAR-50Rs\n");
printf("2.BIKE-25Rs\n");
printf("3.CYCLE-10Rs\n");
printf("4.BY_WALK-5Rs\n");
printf("PRESS 1 TO SELECT YOUR TRANSPORTAION IS CAR\n");
printf("PRESS 2 TO SELECT YOUR TRANSPORTAION IS BIKE\n");
printf("PRESS 3 TO SELECT YOUR TRANSPORTAION IS CYCLE\n");
printf("PRESS 4 TO SELECT YOUR TRANSPORTAION IS BY_WALK\n");
scanf("%d",&trans);
switch(trans)
{

    case 1: {
              printf("YOUR TRANSPORTATION IS CAR\n");
              printf("PLEASE PAY THE MONEY\n");
              car:
              scanf("%d",&trans);
              if(trans!=50)
              {
              printf("PLEASE PAY THE REQUIRED AMOUNT\n");
              goto car;
              }
              printf("YOU HAVE PAID THE PARKING MONEY SUCESSFULLY\n");
              printf("YOU HAVE ACCESS TO ENTER THE D-MART MALL\n");
                  break;
              }

    case 2: {
              printf("YOUR TRANSPORTATION IS BIKE\n");
              printf("PLEASE PAY THE MONEY\n");
              bike:
              scanf("%d",&trans);
              if(trans!=25)
              {
              printf("PLEASE PAY THE REQUIRED AMOUNT\n");
              goto bike;
              }
              printf("YOU HAVE PAID THE PARKING MONEY SUCESSFULLY\n");
              printf("YOU HAVE ACCESS TO ENTER THE D-MART MALL\n");
              break;
               }
     case 3:{
              printf("YOUR TRANSPORTATION IS CYCLE\n");
              printf("PLEASE PAY THE MONEY\n");
              cycle:
              scanf("%d",&trans);
              if(trans!=10)
              {
              printf("PLEASE PAY THE REQUIRED AMOUNT\n");
              goto cycle;
              }
              printf("YOU HAVE PAID THE PARKING MONEY SUCESSFULLY\n");
              printf("YOU HAVE ACCESS TO ENTER THE D-MART MALL\n");
              break;
               }
     case 4:{
              printf("YOUR TRANSPORTATION IS BY WALK\n");
              printf("PLEASE PAY THE MONEY\n");
              bywalk:
              scanf("%d",&trans);
              if(trans!=5)
              {
              printf("PLEASE PAY THE REQUIRED AMOUNT\n");
              goto bywalk;
              }
              printf("YOU HAVE PAID THE PARKING MONEY SUCESSFULLY\n");
              printf("YOU HAVE ACCESS TO ENTER THE D-MART MALL\n");
              break;
             }
     default :{
                printf("PLEASE ENTER THE CORRECT NUMBER\n");
                goto label;
               }
}
   floors_description();
}
void floors_description(){

    tshirts=0,boxers=0,pants=0,belts=0,inner_wears=0,socks=0,shorts=0,shirts=0;
    apples=0,kiwis=0,oranges=0,watermelon=0,pomegranets=0,bananas=0,beans=0,cucumber=0;
    harrier_AC=0,crompton_fans=0,decorative_fans=0,pedestal_fans=0,Aqua_gaurd_purifier=0,Philips_vaccum_cleaner=0,oneplus_TV=0;
    stapler=0,eraser=0,highlighter=0,fountain_pen=0,books=0;
     trans=0,floors=0,total=0,fruit=0,clothing=0,home=0,state=0,book,bill=0,method=0,count=0,amount=0,pin=0,press=0,quantity=0,leave=0,deletee=0,mall=0,index=0;
     number=0,mobile=0,pincode=0;
     str[50];
printf("IF YOU BUY THE PRODUCTS MORE THAN OR EQUAL TO 5,000Rs THEN THE DISCOUNT OF 500Rs IS APPLIED\n");
printf("IF YOU BUY THE PRODUCTS MORE THAN OR EQUAL TO 2,000Rs THEN THE DISCOUNT OF 200Rs IS APPLIED\n");
printf("IF YOU BUY THE PRODUCTS MORE THAN OR EQUAL TO 1,000Rs THEN THE DISCOUNT OF 100Rs IS APPLIED\n");
printf("\n\n\n");
printf("NOTE:: IN D-MART THERE ARE 5 FLOORS ,EACH FLOOR HAS SOME RESPECTIVE PRODUCTS ACCORDING TO THAT FLOOR,HERE ARE THE DETAILS OF THE PRODUCTS AVAILABLE IN EACH FLOOR\n");
printf("|| || || || || || || || || || || || || || || || || || || || || || \n");
printf("||                     1st FLOOR :: VEGETABLES,FRUITS          || \n");
printf("||                     2nd FLOOR :: CLOTHINGS AND STYLES       || \n");
printf("||                     3rd FLOOR :: HOME APPLICANCES           || \n");
printf("||                     4th FLOOR :: BOOKS AND STATIONERIES     || \n");
printf("||                     PRESS 1 TO GO FOR FIRST FLOOR           || \n");
printf("||                     PRESS 2 TO GO FOR SECOND FLOOR          || \n");
printf("||                     PRESS 3 TO GO FOR THIRD  FLOOR          || \n");
printf("||                     PRESS 4 TO GO FOR FOURTH FLOOR          || \n");
printf("|| || || || || || || || || || || || || || || || || || || || || || \n");
scanf("%d",&floors);
//here the function pointer array is used.Be careful to write that because it executes whether which floor to go...
  (*fp[floors-1])();
}
void floor1(){
  while(floors==1)
{
        label1:
        floors=1;
    printf("#########################################################################\n");
    printf("#-------INFO OF AVAILABLE FRUITS AND VEGETABLES-------------------------# \n");
    printf("#              11.APPLES(1KG)==100Rs                                    # \n");
    printf("#              21.BANANAS(1KG)==75Rs                                    # \n");
    printf("#              31.KIWIS(1KG)==56RS                                      # \n");
    printf("#              41.WATERMELON(1)==30Rs                                   # \n");
    printf("#              51.BEANS(1KG)==105Rs                                     # \n");
    printf("#              61.ORANGES(1KILO)==120Rs                                 # \n");
    printf("#              71.CUCUMBER(1PIECE)==45Rs                                # \n");
    printf("#              81.POMEGRANATE(1KG)==90Rs                                # \n");
    printf("#              PRESS 2 TO GO FOR THE 2ND FLOOR(CLOTHING AND SYLES)      # \n");
    printf("#              PRESS 3 TO GO FOR THE 3RD FLOOR(HOME APPLICANCES)        # \n");
    printf("#              PRESS 4 TO GO FOR THE 4TH FLOOR(BOOKS AND STATIONRIES    # \n");
    printf("#              PRESS 5 TO VIEW THE CART                                 # \n");
    printf("#              PRESS 6 TO LEAVE THE D-MART MALL                         # \n");
    printf("######################################################################### \n");
    scanf("%d",&fruit);
      switch(fruit)
      {
      case 11 :
        {
            printf("HOW MUCH OF QUANTITY(KGS) OF APPLES YOU WANT\n");
            scanf("%d",&quantity);
            printf("THE APPLES OF %d KGS WAS ADDED TO YOUR CART\n",quantity);
            total=total+quantity*100;
            apples=apples+quantity;
            break;
        }
      case 21:
        {
            printf("HOW MUCH OF QUANTITY(KGS) OF BANANAS YOU WANT\n");
            scanf("%d",&quantity);
            printf("%THE BANANAS OF %d KGS WAS ADDED TO YOUR CART\n",quantity);
            total=total+quantity*75;
            bananas=bananas+quantity;
            break;
        }
      case 31:
        {
            printf("HOW MUCH OF QUANTITY(KGS) OF KIWIS YOU WANT\n");
            scanf("%d",&quantity);
            printf("%THE KIWIS OF %d KGS WAS ADDED TO YOUR CART\n",quantity);
            total=total+quantity*56;
            kiwis=kiwis+quantity;
            break;
        }
      case 41:
        {
            printf("HOW MANY OF WATERMELONS YOU WANT \n");
            scanf("%d",&quantity);
            printf("%THE WATERMELON OF %d QUANTITY WAS ADDED TO YOUR CART\n",quantity);
            total=total+quantity*30;
            watermelon=watermelon+quantity;
            break;
        }
      case 51:
        {
            printf("HOW MANY KGS OF BEANS YOU WANT\n");
            scanf("%d",&quantity);
            printf("THE BEANS OF %d KGS WAS ADDED TO YOUR CART\n",quantity);
            total=total+quantity*105;
            beans=beans+quantity;
            break;
        }
      case 61:
        {
            printf("HOW MANY KILOS OF ORANGES YOU WANT\n");
            scanf("%d",&quantity);
            printf("THE ORANGES OF %d KILOS WAS ADDED TO YOUR CART\n",quantity);
            total=total+quantity*100;
            oranges=oranges+quantity;
            break;
        }
      case 71:
        {
            printf("HOW MANY OF CUCUMBERS YOU WANT\n");
            scanf("%d",&quantity);
            printf("THE %d CUCUMBERS WAS ADDED TO YOUR CART\n",quantity);
            total=total+quantity*45;
            cucumber=cucumber+quantity;
            break;
        }

      case 81:
        {
            printf("HOW MANY KGS OF POMEGRANETS YOU WANT\n");
            scanf("%d",&quantity);
            printf("THE POMEGRANATES OF %d KGS WAS ADDED TO YOUR CART\n ",quantity);
            total=total+quantity*90;
            pomegranets=pomegranets+quantity;
            break;
        }
      case 2:
                (*fp[1])();
              break;
      case 3:
                (*fp[2])();
               break;
      case 4:
                (*fp[3])();
               break;
      case 5:
             cart();
             break;
      case 6:
            printf("ARE YOU SURE YOU WANT TO LEAVE THE MALL\n");
             printf("PRESS 1 TO LEAVE MALL (OR) PRESS 2 TO CONTINUE SHOPPING\n");
             scanf("%d",&mall);
             if(mall==1)
                 previous_floor();
             else
                goto label1;
      default:
             printf("PLEASE ENTER THE CORRECT NUMBER\n");
             goto label1;

}
}
}
void floor2(){
    while(floors==2)
{
        label2:
        floors=2;
        printf("*************************************************************************\n");
        printf("*------------INFO OF CLOTHING PRODUCTS AVIALABLE IN THE 2ND FLOOR-------*\n");
        printf("*                        12.WROGN SHIRT==850Rs                          *\n");
        printf("*                        22.JOCKEY INNER_WEARS(2 PIECES)==340Rs         *\n");
        printf("*                        32.WOODLAND_BELT(1 PRODUCT)==540Rs             *\n");
        printf("*                        42.DIXCY_SCOUT_TSHIRTS(PACK OF 2)==220Rs       *\n");
        printf("*                        52.MILTON_BOXERS(PACK OF 2)==249Rs             *\n");
        printf("*                        62.JOCKEY_INNER_SOCKS (PACK OF 2)==150Rs       *\n");
        printf("*                        72.BENEE_KLEED_SHORTS (PACK OF 2)==549Rs       *\n");
        printf("*                        PRESS 1 TO GO FOR 1ST  FLOOR                   *\n");
        printf("*                        PRESS 3 TO GO FOR 2ND FLOOR                    *\n");
        printf("*                        PRESS 4 TO GO FOR 3RD FLOOR                    *\n");
        printf("*                        PRESS 5 TO VIEW THE CART                       *\n");
        printf("*                        PRESS 6 TO LEAVE THE D_MART MALL               *\n");
        printf("*************************************************************************\n");
        scanf("%d",&clothing);
        switch(clothing)
        {
        case 12 :
            {
                printf("HOW MANY WROGN SHIRTS DO YOU WANT\n");
                scanf("%d",&quantity);
                printf("THE %d  WROGN SHIRT(OR)SHIRTS HAVE BEEN ADDED TO YOU CART\n",quantity);
                shirts=shirts+quantity;
                total=total+quantity*850;
                break;
            }
        case 22:
            {
                printf("HOW MANY PACKS OF JOCKEY INNER WEARS YOU WANT\n");
                scanf("%d",&quantity);
                printf("THE %d PACK(OR)PACKS OF JOCKEY INNER WEARS HAS BEEN ADDED TO YOUR CART\n",quantity);
                inner_wears=inner_wears+quantity;
                total=total+quantity*340;
                break;
            }
        case 32:
            {
                printf("HOW MANY WOODLAND BELTS YOU WANT\n");
                scanf("%d",&quantity);
                printf("THE %d WOODLAND BELT(OR)BELTS HAS BEEN ADDED TO YOUR CART\n",quantity);
                belts=belts+quantity;
                total=total+quantity*540;
                break;
            }
        case 42:
            {
                printf("HOW MANY PACKS OF DIXCY SCOUT TSHIRTS YOU WANT\n");
                scanf("%d",&quantity);
                printf("THE %d PACK(OR)PACKS OF DIXCY SCOUT HAS BEEN ADDED TO YOUR CART\n",quantity);
                tshirts=tshirts+quantity;
                total=total+quantity*220;
                break;
            }
        case 52:
            {
                printf("HOW MANY PACKS OF MILTON BOXERS YOU WANT\n");
                scanf("%d",&quantity);
                printf("THE %d PACK(OR)PACKS OF MILTON BOXERS HAS BEEN ADDED TO YOUR CART\n",quantity);
                boxers=boxers+quantity;
                total=total+quantity*249;
                break;

            }
        case 62:
            {
                printf("HOW MANY PACKS OF JOCKEY INNERSOCKS YOU WANT\n");
                scanf("%d",&quantity);
                printf("THE %d PACK(OR)PACKS OF JOCKEY INNER SOCKS HAS BEEN ADDED TO YOUR CART\n",quantity);
                socks=socks+quantity;
                total=total+quantity*150;
                break;
            }
        case 72:
                {
                  printf("HOW MANY MANY PACKS OF BENE KLEED SHORTS YOU WANT\n");
                  scanf("%d",&quantity);
                  printf("THE %d PACKS OF BENE KLEED SHORTS HAS BEEN ADDED TO YOUR CART\n",quantity);
                  shorts=shorts+quantity;
                  total=total+quantity*549;
                   break;

                }
        case 1:
            (*fp[0])();
            break;
        case 3:
            (*fp[2])();
             break;
        case 4:
            (*fp[3])();
            break;
        case 5:
             cart();
              break;
        case 6:
            printf("ARE YOU SURE YOU WANT TO LEAVE THE MALL\n");
             printf("PRESS 1 TO LEAVE MALL (OR) PRESS 2 TO CONTINUE SHOPPING\n");
             scanf("%d",&mall);
             if(mall==1)
                previous_floor();
             else
                goto label2;
        default:
            {
                printf("PLEASE ENTER THE CORRECT NUMBER\n");
                goto label2;
            }
            }
            }
}
void floor3(){
  while(floors==3)
{
      label3:
      floors=3;
      printf("#############################################################################\n");
      printf("#-------------------INFO OF AVAILABLE HOME APPLICANCES--------              #\n");
      printf("#                   13.HARRIER_AC==30,000Rs                                 #\n");
      printf("#                   23.CROMPTON_FAN==1200Rs                                 #\n");
      printf("#                   33.DECORATIVE_FAN==2000Rs                               #\n");
      printf("#                   43.PEDESTAL_FAN==900Rs                                  #\n");
      printf("#                   53.AQUA-GUARD_WATER_PURIFIER==10,000Rs                  #\n");
      printf("#                   63.PHILIPS_VACCUM_CLEANER==12000Rs                      #\n");
      printf("#                   73.ONEPLUS_SMART_TV(30 INCHES)==19,000Rs                #\n");
      printf("#                   PRESS 1 TO GO FOR 1ST FLOOR(FRUITS AND VEGETABLES)      #\n");
      printf("#                   PRESS 2 TO GO FOR 2ND FLOOR(CLOTHING AND STYLES)        #\n");
      printf("#                   PRESS 4 TO GO FOR 3RD FLOOR(BOOKS AND STATIONARIES)     #\n");
      printf("#                   PRESS 5 TO VIEW THE CART                                #\n");
      printf("#                   PRESS 6 TO LEAVE THE D_MART MALL                        #\n");
      printf("#############################################################################\n");
      scanf("%d",&home);
      switch(home)
      {
      case 13:
            {
               printf("HOW MANY HARRIER ACS YOU WANT\n");
               scanf("%d",&quantity);
               printf("%d AC (OR)AC'S HAS BEEN ADDED TO YOUR CART\n",quantity);
               harrier_AC=harrier_AC+quantity;
               total=total+quantity*30000;
               break;
            }
      case 23:
        {
            printf("HOW MANY CROMPTON FANS YOU WANT\n");
            scanf("%d",&quantity);
            printf("%d CROMPTON FAN (OR) FANS HAS BEEN ADDED TO YOUR CART\n",quantity);
            crompton_fans=crompton_fans+quantity;
            total=total+quantity*1200;
            break;

        }
      case 33:
        {
            printf("HOW MANY DECORATIVE FANS YOU WANT\n");
            scanf("%d",&quantity);
            printf("%d DECORATIVE FAN (OR) FANS HAS BEEN ADED TO YOUR ACCOUNT\n",quantity);
            decorative_fans=decorative_fans+quantity;
            total=total+quantity*2000;
            break;
        }
      case 43:
          {
              printf("HOW MANY PEDESTAL FANS YOU WANT\n");
              scanf("%d",&quantity);
              printf("%d PEDESTAL FAN(OR)FANS HAS BEEN ADDED TO YOUR ACCOUNT\n",quantity);
              pedestal_fans=pedestal_fans+quantity;
              total=total+quantity*900;
              break;
          }
      case 53:
        {
            printf("HOW MANY AQUA GAURD PURIFIERS YOU WANT\n");
            scanf("%d",&quantity);
            printf("%d AQUA_GAURD_PURIFIER(OR)PURIFIERS HAS BEEN ADDED TO YOUR CART\n",quantity);
            Aqua_gaurd_purifier=Aqua_gaurd_purifier+quantity;
            total=total+quantity*10000;
            break;
        }
      case 63:
        {
            printf("HOW MANY PHILIPS_VACCUM_CLEANER YOU WANT\n ");
            scanf("%d",&quantity);
            printf("%d  PHILIPS_VACCUM CLENAER (OR)CLEANERS HAS BEEN ADDED TO YOUR CART\n",quantity);
            Philips_vaccum_cleaner=Philips_vaccum_cleaner+quantity;
            total=total+quantity*12000;
            break;
        }
      case 73:
        {
            printf("HOW MANY ONEPLUS SMART TV'S YOU WANT\n");
            scanf("%d",&quantity);
            printf("%d ONEPLUS SMART TV(OR)TVS HAS BEEN ADDED TO YOUR CART\n",quantity);
            oneplus_TV=oneplus_TV+quantity;
            total=total+quantity*19000;
            break;
        }
      case 1:
             (*fp[0])();
              break;
      case 2:
             (*fp[1])();
              break;
      case 4:
             (*fp[3])();
              break;
      case 5:
             cart();
              break;
      case 6:
         printf("ARE YOU SURE YOU WANT TO LEAVE THE MALL\n");
             printf("PRESS 1 TO LEAVE MALL (OR) PRESS 2 TO CONTINUE SHOPPING\n");
             scanf("%d",&mall);
             if(mall==1)
                previous_floor();
             else
                goto label3;
    default:
        {
            printf("PLEASE ENTER THE CORRECT NUMBER\n");
            goto label3;
        }
        }
        }
}
void floor4(){
  while(floors==4)
{
    label4:
    floors=4;
    printf("************************************************************************\n");
    printf("*---------INFO OF THE AVAILABLE BOOKS AND STATIONARIES-----------------*\n");
    printf("*              14.KANGAROO_STAPLER==40Rs                               *\n");
    printf("*              24.CAMLIN_ERASER==5RS                                   *\n");
    printf("*              34.FOUNTAIN_PEN==35Rs                                   *\n");
    printf("*              44.NATRAJAN_HIGHLIGHTER==56Rs                           *\n");
    printf("*              54.SAI_BOOKS(1 NOTE BOOK)==35Rs                         *\n");
    printf("*              PRESS 1 TO GO FOR 1ST FLOOR(VEGETABLES AND FRUITS)      *\n");
    printf("*              PRESS 2 TO GO FOR 2ND FLOOR(CLOTHING AND STYLES)        *\n");
    printf("*              PRESS 3 TO GO FOR 3RD FLOOR(HOME APPLICANCES)           *\n");
    printf("*              PRESS 5 TO VIEW THE CART                                *\n");
    printf("*              PRESS 6 TO LEAVE THE MALL                               *\n");
    printf("************************************************************************\n");
    scanf("%d",&book);
    switch(book)
    {
    case 14:
        {
            printf("HOW MANY KANGAROO STAPLERS YOU WANT\n");
            scanf("%d",&quantity);
            printf("%d KANGAROO STAPLER(OR)STAPLERS HAS BEEN ADDED TO YOUR CART\n",quantity);
            stapler=stapler+quantity;
            total=total+quantity*40;
            break;
        }
    case 24:
        {
            printf("HOW MANY CAMLIN ERASERS YOU WANT\n");
            scanf("%d",&quantity);
            printf("%d CAMLIN ERASER(OR)ERASERS HAS BEEN ADDED TO YOUR CART\n",quantity);
            eraser=eraser+quantity;
            total=total+quantity*5;
            break;
        }
    case 34:
        {
            printf("HOW MANY FOUNTAIN_PENS YOU WANT\n");
            scanf("%d",&quantity);
            printf("%d FOUNTAIN_PEN(OR)PENS HAS BEEN ADDED TO YOUR CART\n",quantity);
            fountain_pen=fountain_pen+quantity;
            total=total+quantity*35;
            break;
        }
    case 44:
        {
            printf("HOW MANY NATRAJAN_HIGHLIGHTERS YOU WANT\n");
            scanf("%d",&quantity);
            printf("%d NATARAJAN PEN(OR)PENS HAS BEEN ADDED TO YOUR CART\n",quantity);
            highlighter=highlighter+quantity;
            total=total+quantity*56;
            break;
        }
    case 54:
        {
            printf("HOW MANY SAI_BOOKS YOU WANT\n");
            scanf("%d",&quantity);
            printf("%d SAI BOOK(OR) BOOKS HAS BEEN ADDED TO YOUR CART\n",quantity);
            books=books+quantity;
            total=total+quantity*35;
            break;
        }

    case 1:
           (*fp[0])();
            break;
    case 2:
           (*fp[1])();
            break;
    case 3:
           (*fp[2])();
            break;
    case 5:
          cart();
          break;
    case 6:
         printf("ARE YOU SURE YOU WANT TO LEAVE THE MALL\n");
             printf("PRESS 1 TO LEAVE MALL (OR) PRESS 2 TO CONTINUE SHOPPING\n");
             scanf("%d",&mall);
             if(mall==1)
                previous_floor();
             else
                goto label4;

    default:
        {
            printf("PLEASE ENTER THE CORRRECT NUMBER\n");
            goto label4;
        }
        }
        }
}
void cart(){
    if(total==0)
        {
            printf("YOU HAVE NOT BUYED ANY PRODUCT,PRESS 1 TO LEAVE THE MALL (OR) PRESS 2 TO GO FOR SHOPPING\n");
            scanf("%d",&leave);
            if(leave==1)
            {
                previous_floor();
            }
            else
            {
                (*fp[floors-1])();
            }
        }
else
{
printf(" THE WORLD'S BIGGEST D_MART_MALL IN TIRUPATHI(517506)\n");
printf(" THE  PRODUCTS  THAT ARE IN THE CART\n");
                               printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
(apples>0)?                    printf("11.YOU HAVE SELECTED THE APPLES =%d(KGS),AND COST IS %d                           \n",apples,100*apples):0;
(bananas>0)?                   printf("21.YOU HAVE SELECTED THE BANANAS=%d(KGS),AND COST IS %d                           \n",bananas,75*bananas):0;
(kiwis>0)?                     printf("31.YOU HAVE SELECTED THE KIWIS=%d(KGS), AND COST IS %d                            \n",kiwis,56*kiwis):0;
(watermelon>0)?                printf("41YOU HAVE SELECTED THE WATERMELON=%d(TIMES) AND COST IS %d                       \n",watermelon,30*watermelon):0;
(beans>0)?                     printf("51.YOU HAVE SELECTED THE BEANS =%d(GMS),AND COST IS %d                            \n",beans*80,105*beans):0;
(oranges>0)?                   printf("61.YOU HAVE SELECTED THE ORANGES =%d(KILO),AND COST IS %d                         \n",oranges,120*oranges):0;
(cucumber>0)?                  printf("71.YOU HAVE SELECTED THE  CUCUMBER=%d(PIECE(OR)PIECES),AND COST IS %d             \n",cucumber,45*cucumber):0;
(pomegranets>0)?               printf("81.YOU HAVE SELECTED THE POMEGRANATES =%d(KGS),AND COST IS %d                     \n",pomegranets,90*pomegranets):0;
(shirts>0)?                    printf("12.YOU HAVE SELECTED THE WROGN SHIRTS =%d(PIECE(OR)PIECES),AND COST IS %d         \n",shirts,850*shirts):0;
(inner_wears>0)?               printf("22.YOU HAVE SELECTED THE JOCKEY_INNER_WEAR =%d(PIECE(or)PIECES),AND COST IS %d    \n",inner_wears+inner_wears,340*inner_wears):0;
(belts>0)?                     printf("32.YOU HAVE SELECTED THE WOODLAND BELT =%d(PIECE(OR)PIECES),AND COST IS %d        \n",belts,540*belts):0;
(tshirts>0)?                   printf("42.YOU HAVE SELECTED THE DIXCY_SCOUT_TSHIRTS =%d(PIECE(OR)PIECES),AND COST IS %d  \n",tshirts+tshirts,tshirts*220):0;
(shorts>0)?                    printf("52.YOU HAVE SELECTED THE BENE_KLEED_SHORTS =%d,AND COST IS %d                     \n",shorts,240*shorts):0;
(socks>0)?                     printf("62.YOU HAVE SELECTED THE JOCKEY_INNER_SOCKS =%d(PIECE (OR)PIECES),AND COST IS %d  \n",socks+socks,150*socks):0;
(boxers>0)?                    printf("72.YOU HAVE SELECTED THE MILTON_BOXERS =%d(PIECE(OR)PIECES),AND COST IS %d        \n",boxers+boxers,boxers*249):0;
(harrier_AC>0)?                printf("13.YOU HAVE SELECTED THE  HARRIER_AC=%d, AND COST IS %d                           \n",harrier_AC,30000*harrier_AC):0;
(crompton_fans>0)?             printf("23.YOU HAVE SELECTED THE CROMPTON_FAN=%d, AND COST IS %d                          \n",crompton_fans,1200*crompton_fans):0;
(decorative_fans>0)?           printf("33.YOU HAVE SELECTED THE DECORATIVE_FAN=%d, AND COST IS %d                        \n",decorative_fans,decorative_fans*2000):0;
(pedestal_fans>0)?             printf("43.YOU HAVE SELECTED THE PEDESTAL_FANS=%d, AND COST IS %d                         \n",pedestal_fans,900*pedestal_fans):0;
(Aqua_gaurd_purifier>0)?       printf("53.YOU HAVE SELECTED THE Aqua_guard_purifier=%d, AND COST IS %d                   \n",Aqua_gaurd_purifier,10000*Aqua_gaurd_purifier):0;
(Philips_vaccum_cleaner>0)?    printf("63.YOU HAVE SELECTED THE PHILIPS_VACCUM_CLEANER=%d(QUANTITY), AND COST IS %d      \n",Philips_vaccum_cleaner,12000*Philips_vaccum_cleaner):0;
(oneplus_TV>0)?                printf("73.YOU HAVE SELECTED THE ONEPLUS_SMART_TV=%d(QUANTITY), AND COST IS %d            \n",oneplus_TV,oneplus_TV*19000):0;
(stapler>0)?                   printf("14.YOU HAVE SELECTED THE KANGAROO_STAPLER =%d(QUANTITY),AND COST IS %d            \n",stapler,40*stapler):0;
(eraser>0)?                    printf("24.YOU HAVE SELECTED THE CAMLIN_ERASER =%d(QUANTITY),AND COST IS %d               \n",eraser,5*eraser):0;
(highlighter>0)?               printf("34.YOU HAVE SELECTED THE NATRAJAN_HIGH_LIGHTER =%d(QUANTITY),AND COST IS %d       \n",highlighter,highlighter*56):0;
(fountain_pen>0)?              printf("44..YOU HAVE SELECTED THE FOUNTAIN_PEN =%d(QUANTITY),AND COST IS %d               \n",fountain_pen,fountain_pen*35):0;
(books>0)?                     printf("54.YOU HAVE SELECTED THE SAI_BOOKS =%d(QUANTITY),AND COST IS %d                   \n",books,35*books):0;
                               printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("PRESS 1 TO DELETE THE ITEMS IN THE CART\n");
printf("PRESS 2 TO DELETE ALL ITEMS IN THE CART \n");
printf("PRESS 3 TO GO FOR THE BILL\n");
printf("PRESS 4 TO GO FOR THE PREVIOUS FLOOR FROM WHERE DID YOU CAME\n");
scanf("%d",&deletee);
//these function needs to write the function pointer array to call  delete,view cart,go for the bill....
    if(deletee==1)
        delete_item();
    else if(deletee==2)
         delete_all_items();
    else if(deletee==3)
        payment_modes();
    else if(deletee==4)
        previous_floor();
}
}
void delete_all_items(){
    tshirts=0,boxers=0,pants=0,belts=0,inner_wears=0,socks=0,shorts=0,shirts=0;
    apples=0,kiwis=0,oranges=0,watermelon=0,pomegranets=0,bananas=0,beans=0,cucumber=0;
    harrier_AC=0,crompton_fans=0,decorative_fans=0,pedestal_fans=0,Aqua_gaurd_purifier=0,Philips_vaccum_cleaner=0,oneplus_TV=0;
    stapler=0,eraser=0,highlighter=0,fountain_pen=0,books=0;
    printf("ALL THE ITEMS IN THE CART ARE DELETED\n");
    printf("PRESS 1 TO GO FOR THE PREVIOUS FLOOR\n");
    printf("PRESS 2 TO LEAVE THE MALL\n");
    scanf("%d",&index);
    if(index==1)
    (*fp[floors-1])();
   else
    final_design();
}
void delete_item(){
   while(index!=1)
   {  printf("PRESS THE FOLLOWING INDEX NUMBERS THAT WILL DELETE YOUR PRODUCT\n");
      printf("PRESS 1 TO GO FOR YOU PREVIOUS FLOOR FROM WHERE DID YOU CAME FROM\n");
      printf("PRESS  2  TO GO FOR THE BILLING\n");
      printf("PRESS 3 TO VIEW THE CART\n");
    scanf("%d",&index);
    if(index==3)
         cart();
    else if(index==2)
        payment_modes();
     else if(index==1)
         (*fp[floors-1])();
      else if(index==11)
      {
       apple:
       printf("YOU HAVE %d KGS OF APPLES LEFT IN THE CART\n",apples);
       printf("HOW MANY KGS OF APPLES YOU WANT TO DELETE\n");
       scanf("%d",&quantity);
       if(quantity>apples)
       {
           printf("PLEASE ENTER THE CORRECT QUANTITY TO DELETE\n");
           goto apple;
       }
       else
        {
            apples=apples-quantity;
            printf("%d KGS OF APPLES ARE DELETED\n",quantity);
            total=total-quantity*100;
        }
   }
       else if(index==21)
        {
             banana:
            printf("YOU HAVE %d KGS OF BANANAS LEFT IN THE CART\n",bananas);
            printf("HOW MANY KGS OF BANANAS YOU WANT TO DELETE\n");
            scanf("%d",&quantity);
            if(quantity>bananas)
            {
               printf("PLEASE ENTER THE CORRECT QUANTITY TO DELETE\n");
               goto banana;
            }
            else
           {
            bananas=bananas-quantity;
            printf("%d KGS OF BANANAS ARE DELETED\n",quantity);
            total=total-quantity*75;
           }
           }
        else if(index==31)
           {
               kiwi:
       printf("YOU HAVE %d KGS OF KIWIS LEFT IN THE CART\n",kiwis);
       printf("HOW MANY KGS OF  KIWIS YOU WANT TO DELETE\n");
       scanf("%d",&quantity);
       if(quantity>kiwis)
       {
           printf("PLEASE ENTER THE CORRECT QUANTITY TO DELETE\n");
           goto kiwi;
       }
       else
        {
            kiwis=kiwis-quantity;
            printf("%d KGS OF KIWIS ARE DELETED\n",quantity);
            total=total-quantity*56;
        }
        }
        else if(index==41)
        {
            water:
           printf("YOU HAVE %d  WATERMELON LEFT IN THE CART\n",watermelon);
           printf("HOW MANY  OF WATERMELON YOU WANT TO DELETE\n");
           scanf("%d",&quantity);
           if(quantity>watermelon)
          {
             printf("PLEASE ENTER THE CORRECT QUANTITY TO DELETE\n");
             goto water;
           }
           else
           {
              watermelon=watermelon-quantity;
              printf("%d WATERMELON ARE DELETED\n",quantity);
              total=total-quantity*30;
           }
           }
           else if(index==51)
           {
               bean:
             printf("YOU HAVE %d KGS OF BEANS LEFT IN THE CART\n",beans);
             printf("HOW MANY KGS OF BEANS YOU WANT TO DELETE\n");
             scanf("%d",&quantity);
            if(quantity>beans)
            {
              printf("PLEASE ENTER THE CORRECT QUANTITY TO DELETE\n");
               goto bean;
            }
            else
            {
                beans=beans-quantity;
                printf("%d KGS OF BEANS ARE DELETED\n",quantity);
                  total=total-quantity*105;
            }
           }
           else if(index==61)
           {
            orange:
                 printf("YOU HAVE %d KILO OF BEANS LEFT IN THE CART\n",oranges);
                 printf("HOW MANY KILOS OF ORANGES YOU WANT TO DELETE\n");
                 scanf("%d",&quantity);
                 if(quantity>oranges)
                 {
                     printf("PLEASE ENTER THE CORRECT QUANTITY TO DELETE\n");
                     goto orange;
                 }
                 else
                 {
                     oranges=oranges-quantity;
                     printf("%d KGS OF ORANGES ARE DELETED\n",quantity);
                     total=total-quantity*120;
                 }
           }
        else if(index==71)
        {
            cucumbe:
                printf("YOU HAVE %d CUCUMBERS LEFT IN THE CART\n",cucumber);
                printf("HOW MANY CUCUMBERS YOU WANT TO DELETE\n");
                scanf("%d",&quantity);
                if(quantity>cucumber)
                {
                    printf("PLEASE ENTER THE CORRECT QUANTITY TO DELETE\n");
                    goto cucumbe;
                }
                else
                {
                    cucumber=cucumber-quantity;
                    printf("%d CUCUMBER ARE DELETED\n",quantity);
                    total=total-quantity*45;
                }
                }
        else if(index==81)
        {
           pomegranat:
                 printf("YOU HAVE %d KILO OF POMEGRANATES LEFT IN THE CART\n");
                 printf("HOW MANY KGS OF POMEGRANATE YOU WANT TO DELETE\n");
                 scanf("%d",&quantity);
                 if(quantity>pomegranets)
                 {
                     printf("PLEASE ENTER THE CORRECT QUANTITY TO DELETE\n");
                     goto pomegranat;
                 }
                 else
                 {
                     pomegranets=pomegranets-quantity;
                     printf("%d KGS OF POMEGRANATE ARE DELETED\n",quantity);
                     total=total-quantity*90;
                 }

        }
        else if(index==12)
        {
            shirt:
                printf("YOU HAVE %d WROGN SHIRT LEFT IN THE CART\n",shirts);
                printf("HOW MANY OF SHIRTS YOU WANT TO DELETE\n");
                scanf("%d",&quantity);
                if(quantity>shirts)
                {
                    printf("PLEASE ENTER THE CORRECT QUANTITY\n");
                    goto shirt;
                }
                else
                {
                    shirts=shirts-quantity;
                    printf("%d SHIRT HAS BEEN DELETED\n",quantity);
                    total=total-quantity*850;
                }
        }
          else if(index==22)
          {
             wears:
                printf("YOU HAVE %d JOCKEY INNER PACKS LEFT IN THE CART\n",inner_wears);
                printf("HOW MANY OF INNER PACKS YOU WANT TO DELETE\n");
                scanf("%d",&quantity);
                if(quantity>inner_wears)
                {
                    printf("PLEASE ENTER THE CORRECT QUANTITY\n");
                    goto wears;
                }
                else
                {
                    inner_wears=inner_wears-quantity;
                    printf("%d INNER WEAR PACK HAS BEEN DELETED\n",quantity);
                    total=total-quantity*340;
                }
              }
              else if(index==32)
              {
                  belt:
                      printf("YOU HAVE %d WOODLAND BELT HAS LEFT IN YOUR CART\n",belts);
                      printf("HOW MANY OF BELTS YOU WANT TO DELETE\n");
                      scanf("%d",&quantity);
                      if(quantity>belts)
                      {
                          printf("PLEASE ENTER THE CORRECT QUANTITY\n");
                         goto scout;

                      }
                      else
                      {
                          belts=belts-quantity;
                          printf("%d TSHIRTS(PACK) HAS BEEN DELETED\n",quantity);
                          total=total-quantity*540;
                      }
              }
              else if(index==42)
              {
                  scout:
                      printf("YOU HAVE %d DIXCY SCOUT THSIRTS(PACK) HAS LEFT IN YOUR CART\n",tshirts);
                      printf("HOW MANY OF TSHIRTS YOU WANT TO DELETE\n");
                      scanf("%d",&quantity);
                      if(quantity>tshirts)
                      {
                          printf("PLEASE ENTER THE CORRECT QUANTITY\n");
                         goto scout;

                      }
                      else
                      {
                          tshirts=tshirts-quantity;
                          printf("%d TSHIRTS(PACK) HAS BEEN DELETED\n",quantity);
                          total=total-quantity*220;
                      }
              }
              else if(index==52)
              {
                      milton:
                      printf("YOU HAVE %d MILTON BOXERS(PACK) HAS LEFT IN YOUR CART\n",boxers);
                      printf("HOW MANY OF BOXERS(PACKS) YOU WANT TO DELETE\n");
                      scanf("%d",&quantity);
                      if(quantity>boxers)
                      {
                          printf("PLEASE ENTER THE CORRECT QUANTITY\n");
                         goto milton;

                      }
                      else
                      {
                          boxers=boxers-quantity;
                          printf("%d BOXER(PACK) HAS BEEN DELETED\n",quantity);
                          total=total-quantity*249;
                      }
              }
              else if(index==62)
              {

                    sock:
                      printf("YOU HAVE %d JOCKEY INNER SOCKS (PACK) HAS LEFT IN YOUR CART\n",socks);
                      printf("HOW MANY OF INNER SOCKS YOU WANT TO DELETE\n");
                      scanf("%d",&quantity);
                      if(quantity>socks)
                      {
                          printf("PLEASE ENTER THE CORRECT QUANTITY\n");
                         goto sock;

                      }
                      else
                      {
                          socks=socks-quantity;
                          printf("%d INNER_SOCKS(PACK) HAS BEEN DELETED\n",quantity);
                          total=total-quantity*150;
                      }
                    }
                  else if(index==72)
                  {
                      shor:
                      printf("YOU HAVE %d BENEE KLEED SHORTS(PACK) HAS LEFT IN YOUR CART\n",shorts);
                      printf("HOW MANY OF SHORTS YOU WANT TO DELETE\n");
                      scanf("%d",&quantity);
                      if(quantity>shorts)
                      {
                          printf("PLEASE ENTER THE CORRECT QUANTITY\n");
                         goto shor;

                      }
                      else
                      {
                          shorts=shorts-quantity;
                          printf("%d SHORTS(PACK) HAS BEEN DELETED\n",quantity);
                          total=total-quantity*549;
                      }
                  }
                   else if(index==13)
                   {
                        ac:
                         printf("YOU HAVE %d HARRIER_AC IN YOUR CART\n",harrier_AC) ;
                         printf("HOW MANY ACS YOU WANT TO DELETE\n");
                         scanf("%d",&quantity);
                         if(quantity>harrier_AC)
                         {
                            printf("PLEASE ENTER THE CORRECT QUANTITY\n");
                            goto ac;

                         }
                         else
                         {
                             harrier_AC=harrier_AC-quantity;
                             printf("%d AC'S HAS BEEN DELETED\n",quantity);
                             total=total-quantity*30000;
                         }
                       }
                   else if(index==23)
                   {
                       fan:
                          printf("YOU HAVE %d CROMPTON_FANS IN YOUR CART\n",crompton_fans) ;
                         printf("HOW MANY FANS YOU WANT TO DELETE\n");
                         scanf("%d",&quantity);
                         if(quantity>crompton_fans)
                         {
                            printf("PLEASE ENTER THE CORRECT QUANTITY\n");
                            goto fan;

                         }
                         else
                         {
                             crompton_fans=crompton_fans-quantity;
                             printf("%d FANS'S HAS BEEN DELETED\n",quantity);
                             total=total-quantity*1200;
                         }
                   }
                   else if(index==33)
                       {
                           fans:
                             printf("YOU HAVE %d DECORATIVE_FANS IN YOUR CART\n",decorative_fans);
                             printf("HOW MANY FANS YOU WANT TO DELETE\n");
                             scanf("%d",&quantity);
                             if(quantity>decorative_fans)
                             {
                                 printf("PLEASE ENTER THE CORRECT NUMBER\n");
                                 goto fans;
                             }
                             else
                             {
                                 decorative_fans=decorative_fans-quantity;
                                 printf("%d FAN HAS BEEN DELETED\n",quantity);
                                 total=total-quantity*2000;
                             }
                       }
                    else if(index==43)
                    {
                        fas:
                            printf("YOU HAVE %d PEDESTAL FAN IN YOUR CART\n",pedestal_fans);
                            printf("HOW MANY FANS YOU WANT TO DELETE\n");
                            scanf("%d",&quantity);
                            if(quantity>pedestal_fans)
                            {
                                printf("PLEASE ENTER THE CORRECT NUMBER\n");
                                goto fas;
                            }
                            else
                            {
                                pedestal_fans=pedestal_fans-quantity;
                                printf("%d FAN HAS BEEN DELETED\n",quantity);
                                total=total-quantity*900;
                            }
                    }
                    else if(index==53)
                    {
                        aqua:
                            printf("YOU HAVE %d AQUA GAURD PURIFIER IN YOUR CART\n",Aqua_gaurd_purifier);
                            printf("HOW MANY AQUA GAURD PURIFIERS YOU WANT TO DELETE\n");
                            scanf("%d",&quantity);
                            if(quantity>Aqua_gaurd_purifier)
                            {
                                printf("PLEASE ENTER THE CORRECT NUMBER\n");
                                goto aqua;
                            }
                            else{
                                Aqua_gaurd_purifier=Aqua_gaurd_purifier-quantity;
                                printf("%d AQUA GAURD PURIFIERS HAS BEEN DELETED FROM YOUR CART\n",quantity);
                                total=total-quantity*10000;
                            }
                        }
                        else if(index==63)
                        {
                            philips:
                                printf("YOU HAVE %d PHILIPS VACCUM CHAMBER\n",Philips_vaccum_cleaner);
                                printf("HOW MANY PHILIPS VACCUM CLEANERS YOU WANT TO DELETE\n");
                                scanf("%d",&quantity);
                                if(quantity>Philips_vaccum_cleaner)
                                {
                                    printf("PLEASE ENTER THE CORRECT NUMBER\n");
                                    goto philips;
                                }
                                else{
                                        Philips_vaccum_cleaner=Philips_vaccum_cleaner-quantity;
                                        printf("%d PHILIPS VACCUM CLEANER HAVE BEEN DELETED\n",quantity);
                                        total=total-quantity*12000;
                                }
                        }
                        else if(index==73)
                        {
                            oneplus:
                                printf("YOU HAVE %d ONEPLUS_SMART TV IN YOUR CART\n",oneplus_TV);
                                printf("HOW MANY ONEPLUS SMART TVS YOU WANT TO DELETE\n");
                                scanf("%d",&quantity);
                                if(quantity>oneplus_TV)
                                {
                                    printf("PLEASE ENTER THE CORRECT NUMBER\n");
                                    goto oneplus;
                                }
                                else
                                {
                                    oneplus_TV=oneplus_TV-quantity;
                                    printf("%d ONEPLUS SMART TVS HAS BEEN DELETED\n",quantity);
                                    total=total-quantity*19000;
                                }
                        }
                        else if(index==14)
                        {
                            stap:
                            printf("YOU HAVE %d KANGAROO STAPLERS  IN YOUR CART\n",stapler);
                            printf("HOW MANY STAPLERS YOU WANT TO DELETE\n");
                            scanf("%d",&quantity);
                            if(quantity>stapler)
                            {
                                printf("PLEASE ENTER THE CORRECT NUMBER\n");
                                goto stap;
                            }
                            else{
                                stapler=stapler-quantity;
                                printf("%d STAPLER ARE BEEN DELETED IN THE CART\n",quantity);
                                total=total-quantity*40;
                            }
                        }
                        else if(index==24)
                        {
                            cam:
                            printf("YOU HAVE %d CAMLIN ERASERS IN YOUR CART\n",eraser);
                            printf("HOW MANT ERASERS YOU WANT TO DELETE\n");
                            scanf("%d",&quantity);
                            if(quantity>eraser)
                            {
                                printf("PLEASE ENTER THE CORRECT NUMBER\n");
                                 goto cam;

                            }
                            else{
                                eraser=eraser-quantity;
                                printf("%d ERASERS HAVE BEEN DELETED IN YOUR CART\n",quantity);
                                total=total-quantity*5;
                            }
                        }
                        else if(index==34)
                        {
                            pe:
                            printf("YOU HAVE %d FOUNTAIN PENS IN THE CART\n",fountain_pen);
                            printf("HOW MANY WANT FOUNTAIN_PENS YOU WANT TO DELETE\n");
                            scanf("%d",&quantity);
                            if(quantity>fountain_pen)
                            {
                                printf("PLEASE ENTER THE CORRECT NUMBER\n");
                                goto pe;
                            }
                            else{
                                fountain_pen=fountain_pen-quantity;
                                printf("%d FOUNTAIN PENS HAVE BEEN DELETED\n",quantity);
                                total=total-quantity*35;
                            }
                        }
                        else if(index==44)
                        {
                            nat:
                                printf("YOU HAVE %d NATRAJAN PENS IN YOUR CART\n",highlighter);
                                printf("HOW MANY HIGHLIGHTERS YOU WANT TO DELETED\n");
                                scanf("%d",&quantity);
                                if(quantity>highlighter)
                                {
                                    printf("PLEASE ENTER THE CORRECT ANSWER\n");
                                    goto nat;
                                }
                                else{
                                       highlighter=highlighter-quantity;
                                       printf("%d HIGHLIGHTERS HAVE BEEN DELETED\n",quantity);
                                       total=total-quantity*56;
                                }
                        }
                        else if(index==54)
                        {
                            sai:
                                printf("YOU HAVE %d SAI BOOKS IN YOUR CART\n",books);
                                printf(" HOW MANY BOOKS YOU WANT TO DELETE\n ");
                                scanf("%d",&quantity);
                                if(quantity>books)
                                {
                                    printf("PLEASE ENTER THE CORRECT NUMBER\n");
                                    goto sai;
                                }
                                else
                                {
                                    books=books-quantity;
                                    printf("%d BOOKS HAVE BEEN DELETED\n",quantity);
                                    total=total-quantity*35;
                                }
                                }
}
}
void previous_floor(){
        (*fp[floors-1])();
}
void payment_modes(){
  bill:
printf("YOU HAVE PURCHASED THE TOTAL PRODUCTS OF COST %d\n",total);
printf("**************************************************************************************************************\n");
printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    if(total>=5000)
        total=total-500;
    else if(total>=2000)
        total=total-200;
    else if(total>=1000)
        total=total-100;
        printf("\n\n");
    printf("BY APPLYING  THE DISCOUNTS OF ALL PURCHASED ITEMS THE AMOUNT YOU HAVE TO PAY IS %d\n",total);
    printf("**************************************************************************************************************\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("YOU CAN PAY THE AMOUNT BY FOLLOWING FIVE METHODS\n");
    printf("1.CREDIT_CARD\n");
    printf("2.DEBIT_CARD\n");
    printf("3.PHONE_PE(or)GOOGLE_PAY\n");
    printf("4.LIQUID_CASH\n");
    printf("5.CASH ON DELIVERY\n");
    scanf("%d",&method);
    if(method==3)
    {
        printf("\n\n");
        printf("PLEASE TELL PHONE NUMER\n");
        number:
        scanf("%llu",&number);
        count=0;
        while(number>0)
        {
            number=number/10;
            count++;
        }
        if(count!=10)
        {
            printf("PLEASE ENTER THE VALID PHONE NUMBER AGAIN\n");
            goto number;
        }
        else{
            printf("MONEY TRANSACTION WAS SUCESSFULL\n");
             finally();
        }

    }
    else if(method==4)
    {
        printf("\n\n");
        amount:
        printf("YOU HAVE TO PAY THE ENTER AMOUNT OF :%d RS",total);
        scanf("%d",&amount);
        if(amount==total)
        {
            printf("MONEY HAS BEEN PAID SUCESSFULLY BY YOU\n");
             finally();
        }
        else
        {
            printf("PLEASE ENTER THE REQUIRED AMOUNT AGAIN\n");
            goto amount;
        }
    }
    else if(method ==1 || method==2)
    {
        printf("\n\n");
        pin_number:
        printf("PLEASE ENTER THE FOUR DIGIT PIN NUMBER\n");
        scanf("%d",&pin);
        count=0;
        while(pin>0)
        {
            count++;
            pin=pin/10;
        }
        if(count==4)
        {
            printf("MONEY TRANSACTION IS SUCESSFULL\n");
            finally();
        }
        else
        {
            printf("PLEASE ENTER THE PIN DIGITS CORRECTLY AGAIN\n");
            goto pin_number;
        }

    }
    else if(method==5)
    {
        printf("\n\n");
        printf("ENTER YOUR NAME::\n");
        scanf("%s",str);
        num:
        printf("ENTER 10 DIGTTS MOBILE NUMBER\n");
        scanf("%llu",&mobile);
        count=0;
        while(mobile>0)
        {
            mobile=mobile/10;
            count++;
        }
        if(count!=10)
        {
            printf("PLEASE ENTER THE VALID PHONE NUMBER AGAIN \n");
            goto num;
        }
        code:
        printf("ENTER YOUR LOCALITY OF 6 DIGITS PINCODE\n");
        scanf("%u",&pincode);
        count=0;
        while(pincode>0)
        {
            pincode=pincode/10;
            count++;
        }
        if(count!=6)
        {
            printf("PLEASE ENTER THE PIN CODE AGAIN\n");
             goto code;
        }
        printf("LOCALITY::VILLAGE(OR)TOWN\n");
        scanf("%s",str);
        printf("ENTER THE CITY NAME(OR)DISTRICT NAME\n");
        scanf("%s",str);
        printf("ENTER THE STATE\n");
        scanf("%s",str);
        printf("ENTER THE ADRESS THE PRODUCT WILL BE DELIVERED TO THAT.....\n");
        scanf("%s",str);
        printf("YOUR PRODUCT WILL BE DELIVERED TO YOU SOON\n");
        finally();
    }
    //these function needs to call final function to get final touch of the program..
}
void finally(){

        total=0;
        printf("\n\n");
        printf("PRESS 1 TO CONTINUE SHOPPING (OR) PRESS 2 TO LEAVE THE MALL\n");
        scanf("%d",&press);
        if(press==1)
            floors_description();
            else
                final_design();
}
void final_design(){
printf("\n\n");
printf("                                                                   \n");
printf("        ^ ^ ^ ^ ^ ^ ^ ^ ^        * * * * * * * * *                 \n");
printf("        ^ THANK YOU FOR ^        * OK, BE HAPPY  *                 \n");
printf("        ^ SHOPPING  IN  ^        *               *                 \n");
printf("        ^ D-MART MALL.. ^        *   TAKE CARE   *                 \n");
printf("        ^ HOPE YOU WILL ^        *               *                 \n");
printf("        ^ VISIT AGAIN...^        *        BYE    *                 \n");
printf("        ^ ^ ^ ^ ^ ^ ^ ^ ^        * * * * * * * * *                 \n");
printf("                                                                   \n");
printf("   ##############################################################   \n");
printf("   # NOTE:THIS IS PANDEMIC SITUATION EVERY ALL OF US.SO,PLEASE  #   \n");
printf("   #      MAINTAIN SOCIAL DISTANCE  (6FEET) AND WEAR MASK AND   #   \n");
printf("   #      SANITAISE YOUR HANDS REGULARLY....THIS IS THE RESPONS #   \n");
printf("   #      BILITY OF EVERY CITIZEN.PLEASE FOLLOW IT.....         #   \n");
printf("   ##############################################################   \n");
exit(0);
}
void main()
{
         mall_design();
}
