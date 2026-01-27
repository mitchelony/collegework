import random, statistics

# -----------------------------
# MONTE CARLO: BASKETBALL SEASON SIMULATION
# Goal: Estimate the probability that a player averages at least
#       target_points_per_game over a full season.
# -----------------------------

# ----- MODEL PARAMETERS -----
games_per_season = 82           # Number of games in a season
two_pt_attempts = 10            # 2-point shot attempts per game
three_pt_attempts = 5           # 3-point shot attempts per game
# -----------------------------
p_two = 0.50                    # Probability of making a 2-point shot (50%)
p_three = 0.35                  # Probability of making a 3-point shot (40%)
# -----------------------------
target = 20                     # Target scoring average (points per game)
# -----------------------------
num_simulations = 10000         # How many seasons to simulate
# -----------------------------

def simulate_one_game():
    """
    Simulate a single basketball game for this player.
    For each 2-point and 3-point attempt, we use random.random() to decide if the shot is made or missed.
    Returns the total points scored in that game.
    """
    points = 0
    
    # Simulate 2-point attempts
    '''
    random.random() gives a float between 0 & 1
    If the random number is less than p_two, we count it as a make.
    '''
    for _ in range(two_pt_attempts):
        if random.random() < p_two:
            points += 2
    
    # Simulate 3-point attempts
    '''
    random.random() gives a float between 0 & 1
    If the random number is less than p_three, we count it as a make.
    '''
    for _ in range(three_pt_attempts):
        if random.random() < p_three:
            points += 3
    
    return points

def simulate_one_season():
    """
    Simulate an entire season for the player.
    We simulate 'games_per_season' games, sum the points, and then compute the average points per game.
    Returns the season average.
    """
    total_points = 0
    
    for _ in range(games_per_season):
        game_points = simulate_one_game()
        total_points += game_points
        
    average_points = total_points/games_per_season
    
    return average_points

def monte_carlo():
    """
    Run the Monte Carlo simulation for many seasons.
    We:
      - Simulate 'num_simulations' seasons,
      - Store each season's average points,
      - Count how many seasons reach or exceed the target average,
      - Estimate the probability based on those counts.
    """
    season_averages = []
    successful_seasons = 0 # Seasons where avg >= target_points_per_game
    
    for _ in range(num_simulations):
        avg = simulate_one_season()
        season_averages.append(avg)
        
        if avg >= target:
            successful_seasons += 1
    
    estimated_probability = successful_seasons / num_simulations
    
    mean_avg = statistics.mean(season_averages)
    stdev_avg = statistics.pstdev(season_averages)
    
    print(f"Simulated Seasons: {num_simulations}")
    print(f"Target Average: {target}")
    print(f"Estimated Probability Of Reaching Target: {estimated_probability * 100}%")
    print(f"Mean season average across all simulations: {mean_avg:.1f} PPG")
    print(f"Standard deviation of season averages: {stdev_avg:.2f} points")
    
if __name__ == "__main__":
    monte_carlo()