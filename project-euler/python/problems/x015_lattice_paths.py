# Starting in the top left corner of a 2 x 2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

# How many such routes are there through a 20 x 20 grid?


#####################
### LATTICE PATHS ###
#####################

class Vertex:
    def __init__(self, value, right=None, down=None):
        self.value = value
        self.right = right
        self.down = down

    def count_nodes(root):
        if root is None:
            return 0
        return 1 + count_nodes(root.right) + count_nodes(root.down)
    









