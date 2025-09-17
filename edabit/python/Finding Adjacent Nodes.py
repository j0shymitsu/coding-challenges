# Example 

matrix_example = [
    [0, 1, 0, 0],    # Node 0
    [1, 0, 1, 1],    # Node 1
    [0, 1, 0, 1],    # Node 2
    [0, 1, 1, 0]     # Node 3
]

def is_adjacent(matrix, node1, node2):
    return matrix[node1][node2]

