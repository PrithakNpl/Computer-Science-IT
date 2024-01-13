#include<stdio.h>
void invalid();
int main()
{
    int marks=0,first,second,third,fourth,fifth,sixth,seventh,eighth,ninth,tenth;
    printf("Hello Player, Welcome to this geographical quiz.\nRules:\n1. There are ten questions, each question will get you 10 points.\n2. To answer each question,  enter the digit next to the correct option.\n3. ENJOY!!!\n\n");
    printf("The quiz game will be started now. Get ready to answer the questions !!!\nALL THE BEST !!!\n\n");
    printf("--------------------------------------------------------------------\n");

    printf("Q.N.A. What country are the Great Pyramids of Giza located in?\n\n1.Egypt\t\t2.India\n3.Russia\t4.Ethiopia\n");
    first: printf("\nPlease enter your answer (1-4): ");
    scanf("%d",&first);
    if(first==1)
    {
        printf("Correct!\n");marks+=10;
    }
    else if(first>4 || first<1){ invalid(); goto first;}
    else printf("Incorrect!!! The correct answer is Egypt\n");

    printf("--------------------------------------------------------------------\n");
    printf("\nQ.N.B. What is the longest river in the world?\n\n1.Amazon River\t2.Mississippi River\n3.Ganges River\t4.Nile River\n");
    second: printf("\nPlease enter your answer (1-4): ");
    scanf("%d",&second);
    if(second==4)
    {
        printf("Correct!\n");marks+=10;
    }
    else if(second>4 || second<1){ invalid(); goto second;}
    else printf("Incorrect!!! The correct answer is Nile River\n");

    printf("--------------------------------------------------------------------\n");
    printf("\nQ.N.C. What is the largest lake in the world?\n\n1.Lake Victoria\t2.Lake Superior\n3.Lake Malawi\t4.Lake Michigan\n");
    third: printf("\nPlease enter your answer (1-4): ");
    scanf("%d",&third);
    if(third==2)
    {
        printf("Correct!\n");marks+=10;
    }
    else if(third>4 || third<1){ invalid(); goto third;}
    else printf("Incorrect!!! The correct answer is Lake Superior\n");

    printf("--------------------------------------------------------------------\n");
    printf("\nQ.N.D. What is the biggest desert in the world?\n\n1.Antarctic Desert\t2.Gobi Desert\n3.Sahara desert\t\t4.Patagonian Desert\n");
    fourth: printf("\nPlease enter your answer (1-4): ");
    scanf("%d",&fourth);
    if(fourth==1)
    {
        printf("Correct!\n");marks+=10;
    }
    else if(fourth>4 || fourth<1){ invalid(); goto fourth;}
    else printf("Incorrect!!! The correct answer is Antarctic Desert\n");

    printf("--------------------------------------------------------------------\n");
    printf("\nQ.N.E. Which is the smallest continent in the world?\n\n1.Europe\t2.Asia\n3.Australlia\t4.South America\n");
    fifth: printf("\nPlease enter your answer (1-4): ");
    scanf("%d",&fifth);
    if(fifth==3)
    {
        printf("Correct!\n");marks+=10;
    }
    else if(fifth>4 || fifth<1){ invalid(); goto fifth;}
    else printf("Incorrect!!! The correct answer is Australlia\n");

    printf("--------------------------------------------------------------------\n");
    printf("\nQ.N.F. What is the biggest mountain in the world?\n\n1.Machapuchare\t2.Mount Fuji\n3.K2\t\t4.Mount Everest\n");
    sixth: printf("\nPlease enter your answer (1-4): ");
    scanf("%d",&sixth);
    if(sixth==4)
    {
        printf("Correct!\n");marks+=10;
    }
    else if(sixth>4 || sixth<1){ invalid(); goto sixth;}
    else printf("Incorrect!!! The correct answer is Mount Everest\n");

    printf("--------------------------------------------------------------------\n");
    printf("\nQ.N.G. What country has the most natural lakes?\n\n1.Canada\t2.China\n3.Russia\t4.USA\n");
    seventh: printf("\nPlease enter your answer (1-4): ");
    scanf("%d",&seventh);
    if(seventh==1)
    {
        printf("Correct!\n");marks+=10;
    }
    else if(seventh>4 || seventh<1){ invalid(); goto seventh;}
    else printf("Incorrect!!! The correct answer is Canada\n");

    printf("--------------------------------------------------------------------\n");
    printf("\nQ.N.H. What is the largest ocean in the world?\n\n1.Antarctic Ocean\t2.Pacific Ocean\n3.Atlantic Ocean\t4.Indian Ocean\n");
    eighth: printf("\nPlease enter your answer (1-4): ");
    scanf("%d",&eighth);
    if(eighth==2)
    {
        printf("Correct!\n");marks+=10;
    }
    else if(eighth>4 || eighth<1){ invalid(); goto eighth;}
    else printf("Incorrect!!! The correct answer is Pacific Ocean\n");

    printf("--------------------------------------------------------------------\n");
    printf("\nQ.N.I. Where are the Spanish Steps located?\n\n1.Portugal\t2.France\n3.Italy\t\t4.Spain\n");
    ninth: printf("\nPlease enter your answer (1-4): ");
    scanf("%d",&ninth);
    if(ninth==3)
    {
        printf("Correct!\n");marks+=10;
    }
    else if(ninth>4 || ninth<1){ invalid(); goto ninth;}
    else printf("Incorrect!!! The correct answer is Italy\n");

    printf("--------------------------------------------------------------------\n");
    printf("\nQ.N.J. What country is known to have the best quality tap water?\n\n1.Switzerland\t2.Japan\n3.Denmark\t4.Iceland\n");
    tenth: printf("\nPlease enter your answer (1-4): ");
    scanf("%d",&tenth);
    if(tenth==1)
    {
        printf("Correct!\n");marks+=10;
    }
    else if(tenth>4 || tenth<1){ invalid(); goto tenth;}
    else printf("Incorrect!!! The correct answer is Switzerland\n");
    printf("--------------------------------------------------------------------\n");
    printf("\nYou scored %d/100 points!!!\n",marks);
    printf("--------------------------------------------------------------------\n");
    return 0;
}
void invalid()
{
    printf("Invalid input");
}