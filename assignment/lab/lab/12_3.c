#include <stdio.h>

struct employee
{
    long empNo;
    char name[20], department[20];
    float basicPay, DA, HRA, grossSalary;
};

int main()
{
    FILE *fp, *fo;

    fo = fopen("O_P.txt", "a");
    fp = fopen("I_P.txt", "r");
    struct employee e;

    do
    {

        fscanf(fp, "%ld\n", &e.empNo);
        fgets(e.name, 20, fp);
        // fscanf(fp, "%s", e.name);
        fgets(e.department, 20, fp);
        // fscanf(fp, "%s", e.department);
        fscanf(fp, "%f", &e.basicPay);
        fscanf(fp, "%f", &e.DA);
        fscanf(fp, "%f", &e.HRA);
        fscanf(fp, "%f", &e.grossSalary);
        fscanf(fp, "\n");

        e.DA = e.basicPay * 0.1;
        e.HRA = e.basicPay * 0.4;
        e.grossSalary = e.basicPay + e.DA + e.basicPay;

        fprintf(fo, "Employee Number:\t%ld\n", e.empNo);
        fprintf(fo, "Employee Name:\t%s", e.name);
        fprintf(fo, "Department:\t%s", e.department);
        fprintf(fo, "Basic Pay:\t%f\n", e.basicPay);
        fprintf(fo, "DA:\t%f\n", e.DA);
        fprintf(fo, "HRA:\t%f\n", e.HRA);
        fprintf(fo, "Gross Salary:\t%.2f\n", e.grossSalary);
        fprintf(fo, "\n");
    } while (!feof(fp));

    fclose(fp);
    fclose(fo);

    return 0;
}