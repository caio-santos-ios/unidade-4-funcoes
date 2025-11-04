#include <stdio.h>

int calcular_salario_bruto(int salaryHour, int quantityHour) {
    return salaryHour * quantityHour;
}

int calcular_desconto(int baseSalary) {
    return baseSalary * 9 / 100;
}

int calcular_salario_liquido(int baseSalary, int descont) {
    return baseSalary - descont;
}

int main() {
    int salaryHour, quantityHour;

    printf("Digite o valor da sua hora de trabalho: ");
    scanf("%d", &salaryHour);

    printf("Digite a quantidade de horas trabalhadas no mês: ");
    scanf("%d", &quantityHour);
    
    int baseSalary = calcular_salario_bruto(salaryHour, quantityHour);
    printf("Salário bruto: %d \n", baseSalary);
    
    int descont = calcular_desconto(baseSalary);
    printf("Desconto: %d \n", descont);
    
    int liquitSalary = calcular_salario_liquido(baseSalary, descont);
    printf("Salário líquido: %d \n", liquitSalary);
    
    return 0;
}