#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    // Question 1
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        score++;
    }

    // Question 2
    printf("\nQ2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    // Question 3
    printf("\nQ3. 2 + 8 = ?\n");
    printf("1. 12\n2. 9\n3. 10\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        score++;
    }

    // Final Result
    printf("\n===== RESULT =====\n");
    printf("Your Score = %d / 3\n", score);

    if(score == 3)
    {
        printf("Excellent!\n");
    }
    else if(score == 2)
    {
        printf("Good Job!\n");
    }
    else
    {
        printf("Keep Practicing!\n");
    }

    return 0;
}