#include<stdio.h>

int main(void)
{
    char a, b, c, d, e;
    int count = 0;
    //question no. 1
    printf("1. According to the Sustainable Development Goal 13, the biggest threat towards development is:\n"
    "a) Climate change\n"
    "b) Pollution\n"
    "c) Melting Polar Ice-Caps\n"
    "d) Population Growth\n"
    "Answer: ");
    scanf(" %c", &a);

    if(a == 'a')
    {
        count++;
    }

    //question no. 2
    printf("\n2. The Greenhouse Effect\n"
    "a) is the decrease in the surface temperature on Earth\n"
    "b) is the rise in the surface temperature on Earth\n"
    "c) is caused by the oxygen shortage\n"
    "Answer: ");
    scanf(" %c", &b);

    if(b == 'b')
    {
        count++;
    }

    //question no. 3
    printf("\n3. The number of reported hydro-meteorological hazards in recent decades (droughts, floods, wind storms, etc.):\n"
    "a) Has increased\n"
    "b) Has decreased\n"
    "c) Has remained about the same\n"
    "Answer: ");
    scanf(" %c", &c);

    if(c == 'a')
    {
        count++;
    }

    //question no. 4
    printf("\n4. How much do we want to limit global warming to in terms of a global temperate increase?\n"
    "a) 2° Celsius\n"
    "b) 5° Celsius\n"
    "c) 10° Celsius\n"
    "Answer: ");
    scanf(" %c", &d);

    if(d == 'a')
    {
        count++;
    }

    //question no. 5
    printf("\n5. In which countries do 80%% of children either using surface water or have to walk more than 15 "
    "minutes to find a protected water source?\n"
    "a) Colombia, China, New Zealand\n"
    "b) North Korea, Russia, Ukraine\n"
    "c) Ethiopia, Rwanda and Uganda\n"
    "Answer: ");
    scanf(" %c", &e);

    if(e == 'c')
    {
        count++;
    }

    if(count == 5)
    {
        printf("\nExcellent\n\n");
    }
    else if(count == 4)
    {
        printf("\nVery good\n\n");
    }
    else if(count <= 3)
    {
        printf("\nTime to brush up on your knowledge of global warming.\n\n");
    }

    //answer No. 1
    printf("(1)Correct Answer is a\n");
    printf("Climate change presents the single biggest threat to development, and its widespread, unprecedented impacts disproportionately burden the poorest and most vulnerable.\n"
        "Source: https://sustainabledevelopment.un.org/sdg13.\n\n");

    //answer no. 2
    printf("(2)Correct Answer is b\n");
    printf("The Greenhouse Effect is the natural process of the rise in surface temperature on Earth as certain "
        "gases in the atmosphere trap energy. These gases such as water vapor, carbon dioxide (CO2), "
        "methane (CH4) and nitrous oxide (N2O) are known as greenhouse gases because, like the glass in a "
        "greenhouse, they trap some of the outgoing energy from the sun retaining this heat in the earth. As "
        "a result, the earth's temperature increases.\n"
        "Source: http://whatsyourimpact.org/greenhouse-effect.\n\n");

    //answer no. 3
    printf("(3)Correct Answer is a\n");
    printf("The number of reported hydro-meteorological hazards (droughts, floods, wind storms, forest fires "
        "or landslides) has significantly increased in recent decades - from 195 (1987-1998 average) to 365 "
        "per year (2000-2006 average), resulting in deaths and economic losses."
        "Source: http://www.fao.org/climate-change/en/.\n\n");

    //answer no. 4
    printf("(4)Correct Answer is a\n");
    printf("Evidence shows that there have been changes in the global climate since the early 1900's and "
        "governments, organizations, scientists and NGO's around the world are campaigning for an "
        "essential cut in greenhouse gas emissions in order to limit global warming to as far below 2°C as "
        "possible.\n"
        "Source: http://www.oxfam.org.uk/what-we-do/issues-we-work-on/climate-change#083f9cb7-fa2e-4313-97e0-"
        "4492107d4291.\n\n");

    //answer no. 5
    printf("(1)Correct Answer is c\n");
    printf("According to the results of Millennium Development Goal 7, in 2010, 89%% of the world's population "
        "was using improved water sources, up from 76%% in 1990.\n"
        "Source: http://www.unmillenniumproject.org/goals/.\n\n");
}