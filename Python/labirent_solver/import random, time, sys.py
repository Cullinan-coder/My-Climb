from random import choice, randint, seed
from time import sleep
from copy import deepcopy

WIDTH = 10
HEIGHT = 10
WALL_PERCENTAGE = 0.3

WALL = '#'
SPACE = ' '
START = 'S'
FINISH = 'F'
PATH_DIRS = {'R': '>', 'L': '<', 'U': '^', 'D': 'v', 'X': '*'}
DIRECTION_MAP = {
    (0, 1): 'R',
    (0, -1): 'L',
    (-1, 0): 'U',
    (1, 0): 'D'
}

def generate_solvable_grid():
    while True:
        grid = [[SPACE if randint(0, 100) > WALL_PERCENTAGE * 100 else WALL for _ in range(WIDTH)] for _ in range(HEIGHT)]
        grid[0][0] = START
        grid[HEIGHT - 1][WIDTH - 1] = FINISH
        if is_solvable(deepcopy(grid), (0, 0), set()):
            return grid

# DFS çözüm kontrolü (yalnızca çözüm varsa True)
def is_solvable(grid, pos, visited):
    x, y = pos
    if not (0 <= x < HEIGHT and 0 <= y < WIDTH) or grid[x][y] == WALL or (x, y) in visited:
        return False
    if grid[x][y] == FINISH:
        return True
    visited.add((x, y))
    for dx, dy in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
        if is_solvable(grid, (x + dx, y + dy), visited):
            return True
    return False

# DFS çözüm yolu bul
def solve_dfs(grid, pos=(0, 0), visited=None, path=None):
    if visited is None: visited = set()
    if path is None: path = []
    x, y = pos
    if not (0 <= x < HEIGHT and 0 <= y < WIDTH) or grid[x][y] == WALL or pos in visited:
        return None
    if grid[x][y] == FINISH:
        return path
    visited.add(pos)
    for dx, dy in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
        next_pos = (x + dx, y + dy)
        direction = DIRECTION_MAP.get((dx, dy))
        result = solve_dfs(grid, next_pos, visited, path + [((x, y), direction)])
        if result:
            return result
    return None

def display_grid(grid):
    for row in grid:
        print('  '.join(cell for cell in row))  
    print()
    sleep(0.5)  

def solve_and_show():
    grid = generate_solvable_grid()
    path = solve_dfs(grid)
    if not path:
        print("Çözüm bulunamadı.")
        return

    for i, ((x, y), direction) in enumerate(path):
        if grid[x][y] not in [START, FINISH]:
            grid[x][y] = PATH_DIRS[direction]
        display_grid(grid)
        sleep(0.2)
    fx, fy = HEIGHT - 1, WIDTH - 1
    grid[fx][fy] = PATH_DIRS['X']
    display_grid(grid)

solve_and_show()
