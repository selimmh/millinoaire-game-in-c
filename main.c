#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

//FUNCTIONS

void instructions();
void restart();
void prize_r1();
void prize_r2();
void prize_r3();
void round2_ask();
void round3_ask();
void fail_message();
void win_message_round1();
void win_message_round2();
void win_message_round3();
void addtoend();
void print_list();
void reset_list();
void setcolor();
void clearcolor();
void setbackground();
void clearbackground();


//LINKED LIST

struct node {
  int data;
  struct node *next;
};

struct node *start = NULL;
void addtoend(int);
void print_list();
void reset_list();
int count = 0;


//MAIN FUNCTION

int main()
     {
     int main_round, score_counter=0, i, n;
     float score;
     char answer;
     char playername[20];


//WELCOME PAGE

     system("cls");
     printf("\n\t\t________________________________________\t\t\n");
     printf("\n\t\t     BINE ATI VENIT LA MILLIONARIE     \t\t\t\n");
     clearcolor();
     printf("\n\n\t\t          ALEGETI OPTIUNEA    ");
     printf("\n");
     printf("\n\t\t\t [ENTER] - Incepe       ");
     printf("\n\t\t\t     [X] - Exit         ");
     printf("\n\t\t________________________________________");
     printf("\n\n\t\t\tOptiunea dumneavoastra: ");

     answer=toupper(getch());
    if (answer == 'X')
        {
    exit(1);
    }

    else
    {


// PLAYERNAME

     system("cls");
     printf("\n\n\t\t\t\tRegistrati numele: ");
     gets(playername);

    system("cls");
    instructions();
    printf("\n\t\t\t  Apasati Enter: ");
    getch();
    system("cls");

     score_counter=0;
     for(i=1;i<=15;i++)
     {
         system("cls");
         main_round=i;


//MAIN ROUNDS
//ROUND 1

     switch(main_round)
		{
        case 1:
        printf("\t\t________________________________________");
        printf("\n\t\t             1ST ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   1.CARE ESTE CAPITALA JAPONIEI?");
		printf("\n\n\t\t  A.Yamashina\t\t  B.Tokyo\n\n\t\t  C.Nagoya\t\t  D.Yokohama");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r1();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='B')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'B'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }

        case 2:
        printf("\t\t________________________________________");
        printf("\n\t\t             1ST ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   2.PRIMUL Om IN SPATIU A FOST ...?");
		printf("\n\n\t\t  A.Alan Bean\t\t  B.Neil Armstrong\n\n\t\t  C.Buzz Aldrin\t\t  D.Yuri Gagarin");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r1();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='D')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'D'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }

        case 3:
        printf("\t\t________________________________________");
        printf("\n\t\t             1ST ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   3.PE CARE CONTINENTAL ROMANIA ESTE?");
		printf("\n\n\t\t  A.Asia\t\t  B.America\n\n\t\t  C.Europa\t\t  D.Africa");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r1();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='C')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'C'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }

        case 4:
        printf("\t\t________________________________________");
        printf("\n\t\t             1ST ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   4.CE ELEMENT CHIMIC ARE SIMBOLUL 'N'?");
		printf("\n\n\t\t  A.Hidrogenul\t\t  B.Azotul\n\n\t\t  C.Heliul\t\t  D.Sodiul");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r1();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='B')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'B'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }

        case 5:
        printf("\t\t________________________________________");
        printf("\n\t\t             1ST ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   5.CARE OM DE STIINTA A DESCOPERIT  ");
		printf("\n\t\t      RADIOUL ELEMENTULUI RADIOACTIV?   ");
		printf("\n\n\t\t  A.Isaac Newton\t  B.Albert Einstein\n\n\t\t  C.Marie Curie\t\t  D.Benjamin Franklin");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r1();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='C')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            round2_ask();
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'C'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
                }


//ROUND 2

		case 6:
        printf("\t\t________________________________________");
        printf("\n\t\t             2ND ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   6.CE NU POATE LIPSI DIN SALATA GRECEASCA?");
		printf("\n\n\t\t  A.Praful de copt\t  B.Dulceata de gutui\n\n\t\t  C.Branza\t\t  D.Coniacul");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r2();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='C')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'C'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }

		case 7:
        printf("\t\t________________________________________");
        printf("\n\t\t             2ND ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   7.CE SE ZICE IN POPOR CA-SI TINE OMUL");
		printf("\n\t\t            INGAMFAT PE SUS");
		printf("\n\n\t\t  A.Nasul\t\t  B.Urechile\n\n\t\t  C.Degele\t\t  D.Ochi");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r2();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='A')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'A'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }

        case 8:
        printf("\t\t________________________________________");
        printf("\n\t\t             2ND ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   8.CU CE PICTEAZA ARTISTII CARE UTILIZEAZA");
		printf("\n\t\t              CULORI ACUARELA");
		printf("\n\n\t\t  A.Otet\t\t  B.Cafea\n\n\t\t  C.Petrol\t\t  D.Apa");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r2();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='D')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'D'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }

        case 9:
        printf("\t\t________________________________________");
        printf("\n\t\t             2ND ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   9.CARE DINTRE URMATOARELE TARI SE AFLA IN ASIA ?");
		printf("\n\n\t\t  A.Polonia\t\t  B.Congo\n\n\t\t  C.Israel\t\t  D.Argentina");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r2();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='C')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'C'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }


        case 10:
        printf("\t\t________________________________________");
        printf("\n\t\t             2ND ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   10.UNDE TRAIESC CEI MAI MULTI ESCHIMOSI?");
		printf("\n\n\t\t  A.In Sahara\t\t  B.In Tahiti\n\n\t\t  C.In Polare\t\t  D.In jungla");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r2();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='C')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            round3_ask();
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'C'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }


//ROUND 3

        case 11:
        printf("\t\t________________________________________");
        printf("\n\t\t             3RD ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   11.CE TARA NU SE AFLA IN PENINSULA SCANDINAVA?");
		printf("\n\n\t\t  A.Argentina\t\t  B.Suedia\n\n\t\t  C.Norvegia\t\t  D.Finlanda");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r3();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='A')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'A'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }

        case 12:
        printf("\t\t________________________________________");
        printf("\n\t\t             3RD ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   12.CE FEL DE RASA ESTE DOBERMANUL?");
		printf("\n\n\t\t  A.Felina\t\t  B.Bovina\n\n\t\t  C.Cabalina\t\t  D.Canina");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r3();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='D')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'A'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }

        case 13:
        printf("\t\t________________________________________");
        printf("\n\t\t             3RD ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   13.CARE DINTRE URMATOARELE CUVINTE NU E DIMINUTIV?");
		printf("\n\n\t\t  A.Sticula\t\t  B.Maimuta\n\n\t\t  C.Furnicuta\t\t  D.Puicuta");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r3();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='B')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'A'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }

        case 14:
        printf("\t\t________________________________________");
        printf("\n\t\t             3RD ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   14.CE TRUPA CANTA PIESA 'PRAF DE STELE'?");
		printf("\n\n\t\t  A.Parlament\t\t  B.Vita de vie\n\n\t\t  C.Vama Veche\t\t  D.Sarmalele reci");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r3();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='B')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'A'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }

        case 15:
        printf("\t\t________________________________________");
        printf("\n\t\t             3RD ROUND                ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t     Scorul dumneavoastra: %d din 15", score_counter);
        printf("\n\t\t________________________________________");
		printf("\n\n\t\t   15.CARE DINTRE URMATORII SCRIITORI ESTE IRLANDEZ?");
		printf("\n\n\t\t  A.James Joyce\t\t  B.Charles Dickens\n\n\t\t  C.Ernest Hemingway\t  D.Marcek Proust");
		printf("\n\t\t________________________________________");

        setcolor(3);
		printf("\n\t\tTimeline: ");
		addtoend(score_counter+1);
		print_list();
		clearcolor();
		prize_r3();

		printf("\n\n\t\t      Raspunsul dumneavoastra: ");
		if (toupper(getch())=='A')
			{
            system("COLOR 2F");
            printf("\n\n\t\t\t      Corect");
            printf("\n\n\t\t\t  Apasati Enter: ");
            score_counter++;
            getch();
            system("COLOR 0F");
            win_message_round3();
            break;
			    }
		else
            {
            system("COLOR 4F");
            printf("\n\n\t\t\t      Gresit");
            printf("\n\n\t\t\tRaspunsul este 'A'");
            printf("\n\n\t\t\t  Apasati Enter: ");
            getch();
            reset_list();
            system("COLOR 0F");
            fail_message();
            break;
		       }}}}}


//LOCAL FUNCTIONS
void restart()
{
    printf("\n\n\t\t   - Apasati Enter pentru RESTART");
	printf("\n\t\t   - Apasati X pentru EXIT");
	printf("\n\n\t\t     Optiunea dumneavoastra: ");

	if (toupper(getch())=='X')
    {
        exit(1);
    }
    else
    {
        main();
        }}


void instructions()
	{
    system("cls");
    printf("\n\t\t________________________________________");
    printf("\n\n\t\t    * * * Instructiune de joc * * *     ");
    printf("\n\t\t________________________________________");
    printf("\n");
    printf("\n\t\t[1] Jocul are 15 intrebari, 3 ROUND'uri");
    printf("\n\t\t[2] In sfarsitul fiecare Round, o sa aveti   ");
    printf("\n\t\t    pop up ca sa alegeti sa ramaneti cu bani ");
    printf("\n\t\t    castigat sau riscati pentru 1 milion de dolari");
    printf("\n\t\t[3] Daca pierdeti pe parcurs, veti pierde toti banii");
    printf("\n\t\t[!] Va doresc succes");
    printf("\n\t\t________________________________________\n");
        }


void prize_r1()
    {
    printf("\n");
    setcolor(10);
    printf("\n\t\t\t   [5]  1.000 Lei");
    setcolor(14);
    printf("\n\t\t\t   [4]  500 Lei");
    printf("\n\t\t\t   [3]  300 Lei");
    printf("\n\t\t\t   [2]  200 Lei");
    printf("\n\t\t\t   [1]  100 Lei");
    clearcolor(0);
    printf("\n");
}


void prize_r2()
    {
    printf("\n");
    setcolor(10);
    printf("\n\t\t   [10] 30.000 Lei");
    setcolor(14);
    printf("\n\t\t   [9]  15.000 Lei");
    printf("\n\t\t   [8]  10.000 Lei");
    printf("\n\t\t   [7]  5.000 Lei");
    printf("\n\t\t   [6]  2.000 Lei");
    clearcolor();
    printf("\n");
}


void prize_r3()
    {
    printf("\n");
    setcolor(10);
    printf("\n\t\t   [15] 1.000.000 Lei");
    setcolor(14);
    printf("\n\t\t   [14] 500.000 Lei");
    printf("\n\t\t   [13] 250.000 Lei");
    printf("\n\t\t   [12] 125.000 Lei");
    printf("\n\t\t   [11] 60.000 Lei");
    clearcolor();
    printf("\n");
}


void round2_ask()
{
        system("cls");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        printf("\n\t\t              FELICITARI                ");
        printf("\n\t\t         ATI TERMINAT ROUND 1           ");
        printf("\n\n\t\t     [ENTER] - Vreau sa continui ROUND 2");
        printf("\n\t\t         [B] - Raman cu 1.000$         ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        printf("\n\t\t      Raspunsul dumneavoastra: ");

        if (toupper(getch()) == 'B')
        {
            win_message_round1();
            restart();
            }
        else
        {

        }}

void round3_ask()
{
        system("cls");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        printf("\n\t\t              FELICITARI                ");
        printf("\n\t\t         ATI TERMINAT ROUND 2           ");
        printf("\n\n\t\t     [ENTER] - Vreau sa continui ROUND 3");
        printf("\n\t\t         [B] - Raman cu 60.000$         ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        printf("\n\t\t      Raspunsul dumneavoastra:          ");

        if (toupper(getch()) == 'B')
        {
            win_message_round2();
            restart();
        }
        else
        {

        }}


void fail_message()
{
        system("cls");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        printf("\n\t\t            IMI PARE RAU                ");
        printf("\n\t\t        NU ATI CASTIGAT NIMIC           ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        restart();
}


void win_message_round1()
{
        system("cls");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        printf("\n\t\t              FELICITARI                ");
        printf("\n\t\t        ATI CASTIGAT 1.000$      ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        reset_list();
}


void win_message_round2()
{
        system("cls");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        printf("\n\t\t              FELICITARI                ");
        printf("\n\t\t        ATI CASTIGAT 60.000$      ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        reset_list();
}


void win_message_round3()
{
        system("cls");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        printf("\n\t\t              FELICITARI                ");
        printf("\n\t\t          ***ESTI MILIONAR***           ");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        reset_list();
        restart();
}


void addtoend(int x) {
  struct node *t, *temp;

  t = (struct node*)malloc(sizeof(struct node));
  t->data = x;
  count++;

  if (start == NULL) {
    start = t;
    start->next = NULL;
    return;
  }

  temp = start;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = t;
  t->next   = NULL;
}

void reset_list() {
  struct node *t, *temp;

  start = NULL;
}

void print_list() {
  struct node *t;

  t = start;

  if (t == NULL) {
    printf("Empty");
    return;
  }

  while (t->next != NULL) {
    printf("[%d]->", t->data);
    t = t->next;
  }
  printf("%d", t->data);
}


void setcolor(int ForgC)
{
     WORD wColor;
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;}


void clearcolor(){
    setcolor(15);
}


void setbackground(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;}


void clearbackground()
{
    setbackground(15,0);}
