#include <stdio.h>

int main()
{
    printf("=== Проверка упрощения выражения X = (B->A) * !(A+B) * (A->C) ===\n");
    printf("A\tB\tC\t(B->A)\t!(A+B)\t(A->C)\tX_original\tX_simplified\n");
    printf("------------------------------------------------------------------------------------\n");

    for (int a = 0; a <= 1; a++)
    {
        for (int b = 0; b <= 1; b++)
        {
            for (int c = 0; c <= 1; c++)
            {
                int impl_ba = (!b) || a;   // B -> A
                int not_ab = (!a) && (!b); // !(A + B)
                int impl_ac = (!a) || c;   // A -> C
                int x_original = impl_ba && not_ab && impl_ac;
                int x_simplified = (!a) && (!b); // ¬A ∧ ¬B

                printf("%d\t%d\t%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
                       a, b, c, impl_ba, not_ab, impl_ac, x_original, x_simplified);
            }
        }
    }

    printf("\n✅ Вывод: X_original == X_simplified для всех значений A, B, C.\n");
    printf("Упрощённое выражение: X = ¬A ∧ ¬B\n");

    return 0;
}