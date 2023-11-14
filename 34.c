#include <stdio.h>
#include <string.h>

struct FootballPlayer {
    char name[50];
    int goals;
    int assists;
    int yellowCards;
    int redCards;
};

int main() {
    // Sample football player data
    struct FootballPlayer players[] = {
        {"Player1", 10, 5, 2, 0},
        {"Player2", 5, 8, 1, 0},
        {"Player3", 7, 3, 2, 1},
        // Add more players as needed
    };

    int numPlayers = sizeof(players) / sizeof(players[0]);

    // Calculate and display total goals
    int totalGoals = 0;
    for (int i = 0; i < numPlayers; i++) {
        totalGoals += players[i].goals;
    }
    printf("Total Goals: %d\n", totalGoals);

    // Calculate and display total assists
    int totalAssists = 0;
    for (int i = 0; i < numPlayers; i++) {
        totalAssists += players[i].assists;
    }
    printf("Total Assists: %d\n", totalAssists);

    // Calculate and display total yellow cards
    int totalYellowCards = 0;
    for (int i = 0; i < numPlayers; i++) {
        totalYellowCards += players[i].yellowCards;
    }
    printf("Total Yellow Cards: %d\n", totalYellowCards);

    // Calculate and display total red cards
    int totalRedCards = 0;
    for (int i = 0; i < numPlayers; i++) {
        totalRedCards += players[i].redCards;
    }
    printf("Total Red Cards: %d\n", totalRedCards);

    return 0;
}

