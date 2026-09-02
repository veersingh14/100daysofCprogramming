#include <stdio.h>

int main()
{
    int cp, sp, profit, loss;

    scanf("%d %d", &cp, &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        printf("Profit %d%%", (profit * 100) / cp);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        printf("Loss %d%%", (loss * 100) / cp);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}
