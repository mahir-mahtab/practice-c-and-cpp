#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int score = 0;
int all_score = 0;
char anagram_word[3][20] = {"listen", "silent", "binary"};
char cliper[3][100] = {
    "there is a secret code",
    "attack at dawn",
    "meet me at the park"};
char wordGuess[3][20] = {"program", "network", "science"};

void show_menu();
void anagram_game();
int strLen(char str[]);
void strCpy(char or [], char cpy[]);
int strCmp(char str1[], char str2[]);
void scramble(char str[], int len);
void caesarCipherChallenge();
void caesar_encrypt(char str[], int len, int shift);
void caesar_decrypt(char str[], int len, int shift);
void wordGuessingGame();
int checkSub(char str[], char sub[]);
int scoreCal(int s, int j, int u);
void test()
{
    char str1[100] = "hello world";
    char str2[100] = "js";
    printf("%d\n", checkSub(str1, str2));
}
int main()
{
    srand(time(0));
    show_menu();
    if (all_score == 3)
    {
        printf("score: %d\n", score + 5);
    }
    else
    {
        printf("score: %d\n", score);
    }
    // test();
}
void show_menu()
{

    printf("Welcome to the game\n");
    printf("1. Start Game\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    getchar();
    if (choice == 1)
    {
        // call
        anagram_game();
    }
    else
    {
        printf("Game terminated");
    }
}
void anagram_game()
{

    printf("starting Anagram game\n");
    int index = rand() % 3;
    int len = strLen(anagram_word[index]);
    char cpy[20];
    strCpy(anagram_word[index], cpy);
    scramble(cpy, len);

    printf("Scrambled word: %s\n", cpy);

    for (int i = 0; i < 3; i++)
    {
        printf("Your guess: ");
        char guess[20];
        gets(guess);
        // getchar();
        fflush(stdin);

        if (strCmp(anagram_word[index], guess))
        {
            printf("correct!you solved it in %d tries\n", i + 1);
            score = scoreCal(score, i, 0);
            all_score++;
            break;
        }
        else if (i == 2)
        {
            printf("Sorry, you have run out of tries\n");
            printf("The correct word is: %s\n", anagram_word[index]);
        }

        else
        {
            printf("Incorrect! try again\n");
        }
    }
    caesarCipherChallenge();
}
void caesar_encrypt(char str[], int len, int shift)
{
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        str[i] = (str[i] - 'a' + shift) % 26 + 'a';
    }
}
void caesar_decrypt(char str[], int len, int shift)
{
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        str[i] = (str[i] - 'a' - shift) % 26 + 'a';
    }
}
int strLen(char str[])
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    return i;
}
void strCpy(char or [], char cpy[])
{
    int i = 0;
    while (or [i] != '\0')
    {
        cpy[i] = or [i];
        i++;
    }
    cpy[i] = '\0';
}
int strCmp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void scramble(char str[], int len)
{ // function to scramble the word
    int i, j, temp;
    for (i = 0; i < len; i++)
    {
        j = rand() % len;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
void caesarCipherChallenge()
{
    printf("starting Caesar Cipher Challenge(shift 2)\n");
    int index = rand() % 3;
    char str[100];
    strCpy(cliper[index], str);
    int len = strLen(str);
    caesar_encrypt(str, len, 2);
    printf("Encrypted phrase: %s\n", str);
    caesar_decrypt(str, len, 2);
   
    for (int i = 0; i < 3; i++)
    {
        char ans[100];
        printf("your guess: ");
        gets(ans);
        if (strCmp(str, ans))
        {
            printf("correct! you decrypted it in %d tries\n", i + 1);
            score = scoreCal(score, i, 0);
            all_score++;
            break;
        }
        else if (i == 2)
        {
            printf("Sorry, you have run out of tries\n");
            printf("The correct phrase is: %s\n", str);
        }
        else
        {
            printf("Incorrect! try again\n");
        }
    }
    wordGuessingGame();
}
void wordGuessingGame()
{
    int index = rand() % 3;
    int len = strLen(wordGuess[index]);
    char cpy[20];
    strCpy(wordGuess[index], cpy);
    printf("starting Word Guessing Game\nhint:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%c", cpy[i]);
    }
    printf("____\n");

    printf("select an option:1. Write Answer 2. Check Substring 3. Check Length\n");
    int flag1 = 0, flag2 = 0, flag3 = 0, u = 0;
    while (1)
    {

        int choice;
        scanf("%d", &choice);
        getchar();


        if (choice == 1)
        {
            flag1++;
            printf("enter your guess: ");
            char ans[20];
            gets(ans);
            // getchar();
            if (flag1 == 3)
            {
                printf("Sorry, you have run out of tries\n");
                printf("The correct word is: %s\n", wordGuess[index]);
                break;
            }
            else if (strCmp(ans, wordGuess[index]))
            {
                printf("correct! you solved it in %d tries\n", flag1);
                score = scoreCal(score, flag1 - 1, u);
                all_score++;
                break;
            }

            else
            {
                printf("Incorrect! try again\n");
            }
        }

        else if (choice == 2 && !flag2)
        {
            flag2 = 1;
            u++;
            printf("enter the substring: ");
            char sub[20];
            gets(sub);
            // getchar();
            if (checkSub(wordGuess[index], sub))
            {
                printf("yes");
            }
            else
            {
                printf("no");
            }
            printf("\n");
        }
        else if (choice == 3 && !flag3)
        {
            u++;
            flag3 = 1;
            printf("ENTER THE LENGTH: ");
            int newlen;
            scanf("%d", &newlen);
            if (newlen == strLen(wordGuess[index]))
            {
                printf("yes");
            }
            else
            {
                printf("no");
            }
            printf("\n");
        }
        else
        {
            printf("utility function already used\n");
        }
    }
}
int checkSub(char str[], char sub[])
{
    int len = strLen(str);

    int subLen = strLen(sub);
    for (int i = 0; i <= len - subLen; i++)
    {
        int flag = 1;
        for (int k = 0; k < subLen; k++)
        {
            if (str[i + k] != sub[k])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            return 1;
        }
    }
    return 0;
}
int scoreCal(int s, int j, int u)
{

    return s + ((2 - j) * 10) + 10 - (2 * u);
}
