#include <stdio.h>
struct student
{
    int roll;
    char name[1000];
    float marksInPhysics;
    float marksInChemistry;
    float marksInMathematics;
};
int rollCheck(struct student s[], int r, int i)
{

    for (int j = 0; j <= i; j++)
    {
        if (s[i].roll == r)
            return 1;
    }
    return 0;
}
int main()
{
    printf("Enter no. of students :");
    int n, c = -1;
    scanf("%d", &n);
    struct student s[n];
    float sum[n];
    for (int i = 0; i < n;)
    {
        printf("Enter roll :");
        scanf("%d", &s[i].roll);
        if (rollCheck(s, s[i].roll, i - 1))
        {
            printf("\n **ROLL ALREADY EXIST , RE-ENTER**\n\n");
            continue;
        }
        printf("Enter name :");
        scanf("%s", s[i].name);
        printf("Enter marks in Physics :");
        scanf("%f", &s[i].marksInPhysics);
        printf("Enter marks in Chemistry :");
        scanf("%f", &s[i].marksInChemistry);
        printf("Enter marks in Mathematics :");
        scanf("%f", &s[i].marksInMathematics);
        sum[i] = s[i].marksInPhysics + s[i].marksInChemistry + s[i].marksInMathematics;
        i++;
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {

            if (sum[i] < sum[j])
            {
                float t = sum[i];
                sum[i] = sum[j];
                sum[j] = t;
                struct student tt = s[i];
                s[i] = s[j];
                s[j] = tt;
            }
        }
    for (int i = 0; i < n; i++)
        printf("Roll : %d Name : %s Marks : %f \n ", s[i].roll, s[i].name, sum[i]);
    return 0;
}
