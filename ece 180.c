#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    int num_investors = 1000;
    int num_periods = 10;
    double initial_price = 100.0;
    double returns[num_periods];

    printf("Initial Price: $%.2f\n", initial_price);

    for (int period = 1; period <= num_periods; period++) {
        double total_investment = 0.0;

        
        for (int investor = 0; investor < num_investors; investor++) {
            double random_investment = 10.0 + ((double)rand() / RAND_MAX) * 190.0; 
            double random_return = ((double)rand() / RAND_MAX) - 0.5;
            total_investment += random_investment * (1.0 + random_return);
        }

        
        double average_investment = total_investment / num_investors;

        
        returns[period - 1] = (average_investment - initial_price) / initial_price;

        printf("Period %d - Average Investment: $%.2f\n", period, average_investment);
    }

    
    double overall_return = 1.0;
    for (int i = 0; i < num_periods; i++) {
        overall_return *= (1.0 + returns[i]);
    }

    printf("Overall Return: %.2f%%\n", (overall_return - 1.0) * 100.0);

    return 0;
}

