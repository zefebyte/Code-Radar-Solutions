#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    for (int i = 0; i < m; i++) { // Iterate through each player
        int rank = 1; // Start rank at 1
        for (int j = 0; j < n; j++) { // Iterate through the leaderboard
            if (player[i] < ranked[j]) { // If player score is less than current ranked score
                rank++;
            } else { // If player score is greater or equal
                break; // No need to continue, rank is found
            }
        }
        result[i] = rank; // Store the player's rank
    }
}
